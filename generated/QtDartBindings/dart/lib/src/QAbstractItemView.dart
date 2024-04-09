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

class QAbstractItemView_ScrollHint {
  static const EnsureVisible = 0;
  static const PositionAtTop = 1;
  static const PositionAtBottom = 2;
  static const PositionAtCenter = 3;
}

class QAbstractItemView_CursorAction {
  static const MoveUp = 0;
  static const MoveDown = 1;
  static const MoveLeft = 2;
  static const MoveRight = 3;
  static const MoveHome = 4;
  static const MoveEnd = 5;
  static const MovePageUp = 6;
  static const MovePageDown = 7;
  static const MoveNext = 8;
  static const MovePrevious = 9;
}

class QAbstractItemView extends QAbstractScrollArea {
  QAbstractItemView.fromCppPointer(var cppPointer,
      [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QAbstractItemView.init() : super.init() {}
  factory QAbstractItemView.fromCache(var cppPointer,
      [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QAbstractItemView;
    }
    return QAbstractItemView.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QAbstractItemView_Finalizer";
  } //QAbstractItemView(QWidget * parent)

  QAbstractItemView({required QWidget? parent}) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAbstractItemView__constructor_QWidget')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } // activated(const QModelIndex & index)
  activated(QModelIndex index) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAbstractItemView__activated_QModelIndex')
        .asFunction();
    func(thisCpp, index == null ? ffi.nullptr : index.thisCpp);
  }

  void onActivated(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QAbstractItemView__onActivated_QModelIndex')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onActivated_callback);
    final callbackMethod = onActivated_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onActivated_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onActivated_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // alternatingRowColors() const

  bool alternatingRowColors() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QAbstractItemView__alternatingRowColors')
        .asFunction();
    return func(thisCpp) != 0;
  } // autoScrollMargin() const

  int autoScrollMargin() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QAbstractItemView__autoScrollMargin')
        .asFunction();
    return func(thisCpp);
  }

  static void changeEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::changeEvent(QEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.changeEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QEvent.fromCppPointer(arg__1));
  } // clearSelection()

  clearSelection() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractItemView__clearSelection')
        .asFunction();
    func(thisCpp);
  } // clicked(const QModelIndex & index)

  clicked(QModelIndex index) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAbstractItemView__clicked_QModelIndex')
        .asFunction();
    func(thisCpp, index == null ? ffi.nullptr : index.thisCpp);
  }

  void onClicked(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QAbstractItemView__onClicked_QModelIndex')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onClicked_callback);
    final callbackMethod = onClicked_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onClicked_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onClicked_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // closePersistentEditor(const QModelIndex & index)

  closePersistentEditor(QModelIndex index) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAbstractItemView__closePersistentEditor_QModelIndex')
        .asFunction();
    func(thisCpp, index == null ? ffi.nullptr : index.thisCpp);
  } // commitData(QWidget * editor)

  commitData(QWidget? editor) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5397))
        .asFunction();
    func(thisCpp, editor == null ? ffi.nullptr : editor.thisCpp);
  }

  static void commitData_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? editor) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::commitData(QWidget * editor)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.commitData((editor == null || editor.address == 0)
        ? null
        : QWidget.fromCppPointer(editor));
  } // currentChanged(const QModelIndex & current, const QModelIndex & previous)

  currentChanged(QModelIndex current, QModelIndex previous) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5399))
        .asFunction();
    func(thisCpp, current == null ? ffi.nullptr : current.thisCpp,
        previous == null ? ffi.nullptr : previous.thisCpp);
  }

  static void currentChanged_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void> current, ffi.Pointer<void> previous) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::currentChanged(const QModelIndex & current, const QModelIndex & previous)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.currentChanged(QModelIndex.fromCppPointer(current),
        QModelIndex.fromCppPointer(previous));
  } // currentIndex() const

  QModelIndex currentIndex() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAbstractItemView__currentIndex')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QModelIndex.fromCppPointer(result, true);
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  } // dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight, const QList<int > & roles)

  dataChanged(QModelIndex topLeft, QModelIndex bottomRight,
      {required QList? roles}) {
    final void_Func_voidstar_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5401))
        .asFunction();
    func(
        thisCpp,
        topLeft == null ? ffi.nullptr : topLeft.thisCpp,
        bottomRight == null ? ffi.nullptr : bottomRight.thisCpp,
        roles == null ? ffi.nullptr : roles.thisCpp);
  }

  static void dataChanged_calledFromC(
      ffi.Pointer<void> thisCpp,
      ffi.Pointer<void> topLeft,
      ffi.Pointer<void> bottomRight,
      ffi.Pointer<void>? roles) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight, const QList<int > & roles)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.dataChanged(QModelIndex.fromCppPointer(topLeft),
        QModelIndex.fromCppPointer(bottomRight),
        roles: (roles == null || roles.address == 0)
            ? null
            : QList.fromCppPointer(roles));
  }

  static int devType_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::devType() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.devType();
    return result;
  } // dirtyRegionOffset() const

  QPoint dirtyRegionOffset() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAbstractItemView__dirtyRegionOffset')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPoint.fromCppPointer(result, true);
  } // doAutoScroll()

  doAutoScroll() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractItemView__doAutoScroll')
        .asFunction();
    func(thisCpp);
  } // doItemsLayout()

  doItemsLayout() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            cFunctionSymbolName(5404))
        .asFunction();
    func(thisCpp);
  }

  static void doItemsLayout_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::doItemsLayout()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.doItemsLayout();
  } // doubleClicked(const QModelIndex & index)

  doubleClicked(QModelIndex index) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAbstractItemView__doubleClicked_QModelIndex')
        .asFunction();
    func(thisCpp, index == null ? ffi.nullptr : index.thisCpp);
  }

  void onDoubleClicked(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QAbstractItemView__onDoubleClicked_QModelIndex')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onDoubleClicked_callback);
    final callbackMethod = onDoubleClicked_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onDoubleClicked_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onDoubleClicked_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // dragDropOverwriteMode() const

  bool dragDropOverwriteMode() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QAbstractItemView__dragDropOverwriteMode')
        .asFunction();
    return func(thisCpp) != 0;
  } // dragEnabled() const

  bool dragEnabled() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QAbstractItemView__dragEnabled')
        .asFunction();
    return func(thisCpp) != 0;
  } // edit(const QModelIndex & index)

  edit(QModelIndex index) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAbstractItemView__edit_QModelIndex')
        .asFunction();
    func(thisCpp, index == null ? ffi.nullptr : index.thisCpp);
  } // editorDestroyed(QObject * editor)

  editorDestroyed(QObject? editor) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5409))
        .asFunction();
    func(thisCpp, editor == null ? ffi.nullptr : editor.thisCpp);
  }

  static void editorDestroyed_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? editor) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::editorDestroyed(QObject * editor)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.editorDestroyed((editor == null || editor.address == 0)
        ? null
        : QObject.fromCppPointer(editor));
  } // entered(const QModelIndex & index)

  entered(QModelIndex index) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAbstractItemView__entered_QModelIndex')
        .asFunction();
    func(thisCpp, index == null ? ffi.nullptr : index.thisCpp);
  }

  void onEntered(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QAbstractItemView__onEntered_QModelIndex')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onEntered_callback);
    final callbackMethod = onEntered_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onEntered_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onEntered_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::event(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.event((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
    return result ? 1 : 0;
  }

  static int eventFilter_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void>? object, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::eventFilter(QObject * object, QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.eventFilter(
        (object == null || object.address == 0)
            ? null
            : QObject.fromCppPointer(object),
        (event == null || event.address == 0)
            ? null
            : QEvent.fromCppPointer(event));
    return result ? 1 : 0;
  } // executeDelayedItemsLayout()

  executeDelayedItemsLayout() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractItemView__executeDelayedItemsLayout')
        .asFunction();
    func(thisCpp);
  }

  static int focusNextPrevChild_calledFromC(
      ffi.Pointer<void> thisCpp, int next) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::focusNextPrevChild(bool next)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.focusNextPrevChild(next != 0);
    return result ? 1 : 0;
  } // hasAutoScroll() const

  bool hasAutoScroll() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QAbstractItemView__hasAutoScroll')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static int hasHeightForWidth_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::hasHeightForWidth() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.hasHeightForWidth();
    return result ? 1 : 0;
  }

  static int heightForWidth_calledFromC(ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::heightForWidth(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.heightForWidth(arg__1);
    return result;
  } // horizontalOffset() const

  int horizontalOffset() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            cFunctionSymbolName(5413))
        .asFunction();
    return func(thisCpp);
  }

  static int horizontalOffset_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::horizontalOffset() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.horizontalOffset();
    return result;
  } // horizontalScrollbarAction(int action)

  horizontalScrollbarAction(int action) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(5414))
        .asFunction();
    func(thisCpp, action);
  }

  static void horizontalScrollbarAction_calledFromC(
      ffi.Pointer<void> thisCpp, int action) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::horizontalScrollbarAction(int action)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.horizontalScrollbarAction(action);
  } // horizontalScrollbarValueChanged(int value)

  horizontalScrollbarValueChanged(int value) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(5415))
        .asFunction();
    func(thisCpp, value);
  }

  static void horizontalScrollbarValueChanged_calledFromC(
      ffi.Pointer<void> thisCpp, int value) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::horizontalScrollbarValueChanged(int value)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.horizontalScrollbarValueChanged(value);
  } // iconSize() const

  QSize iconSize() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAbstractItemView__iconSize')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  } // iconSizeChanged(const QSize & size)

  iconSizeChanged(QSize? size) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAbstractItemView__iconSizeChanged_QSize')
        .asFunction();
    func(thisCpp, size == null ? ffi.nullptr : size.thisCpp);
  }

  void onIconSizeChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QAbstractItemView__onIconSizeChanged_QSize')
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onIconSizeChanged_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // indexAt(const QPoint & point) const

  QModelIndex indexAt(QPoint? point) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5418))
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, point == null ? ffi.nullptr : point.thisCpp);
    return QModelIndex.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> indexAt_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? point) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::indexAt(const QPoint & point) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.indexAt((point == null || point.address == 0)
        ? null
        : QPoint.fromCppPointer(point));
    return result.thisCpp;
  } // indexWidget(const QModelIndex & index) const

  QWidget indexWidget(QModelIndex index) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QAbstractItemView__indexWidget_QModelIndex')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, index == null ? ffi.nullptr : index.thisCpp);
    return QWidget.fromCppPointer(result, false);
  }

  static void initPainter_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? painter) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::initPainter(QPainter * painter) const! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.initPainter((painter == null || painter.address == 0)
        ? null
        : QPainter.fromCppPointer(painter));
  } // isIndexHidden(const QModelIndex & index) const

  bool isIndexHidden(QModelIndex index) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5420))
        .asFunction();
    return func(thisCpp, index == null ? ffi.nullptr : index.thisCpp) != 0;
  }

  static int isIndexHidden_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::isIndexHidden(const QModelIndex & index) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.isIndexHidden(QModelIndex.fromCppPointer(index));
    return result ? 1 : 0;
  } // isPersistentEditorOpen(const QModelIndex & index) const

  bool isPersistentEditorOpen(QModelIndex index) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QAbstractItemView__isPersistentEditorOpen_QModelIndex')
        .asFunction();
    return func(thisCpp, index == null ? ffi.nullptr : index.thisCpp) != 0;
  } // keyboardSearch(const QString & search)

  keyboardSearch(String? search) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5422))
        .asFunction();
    func(thisCpp, search?.toNativeUtf8() ?? ffi.nullptr);
  }

  static void keyboardSearch_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? search) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::keyboardSearch(const QString & search)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.keyboardSearch(QString.fromCppPointer(search).toDartString());
  }

  static void leaveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::leaveEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.leaveEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static ffi.Pointer<void> minimumSizeHint_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::minimumSizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumSizeHint();
    return result.thisCpp;
  } // model() const

  QAbstractItemModel model() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAbstractItemView__model')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QAbstractItemModel.fromCppPointer(result, false);
  }

  static void mouseDoubleClickEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::mouseDoubleClickEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseDoubleClickEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  }

  static void mouseMoveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::mouseMoveEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseMoveEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  }

  static void mousePressEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::mousePressEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mousePressEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  }

  static void mouseReleaseEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::mouseReleaseEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseReleaseEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  } // moveCursor(QAbstractItemView::CursorAction cursorAction, QFlags<Qt::KeyboardModifier> modifiers)

  QModelIndex moveCursor(int cursorAction, int modifiers) {
    final voidstar_Func_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            cFunctionSymbolName(5425))
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, cursorAction, modifiers);
    return QModelIndex.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> moveCursor_calledFromC(
      ffi.Pointer<void> thisCpp, int cursorAction, int modifiers) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::moveCursor(QAbstractItemView::CursorAction cursorAction, QFlags<Qt::KeyboardModifier> modifiers)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.moveCursor(cursorAction, modifiers);
    return result.thisCpp;
  } // openPersistentEditor(const QModelIndex & index)

  openPersistentEditor(QModelIndex index) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAbstractItemView__openPersistentEditor_QModelIndex')
        .asFunction();
    func(thisCpp, index == null ? ffi.nullptr : index.thisCpp);
  }

  static void paintEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::paintEvent(QPaintEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.paintEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QPaintEvent.fromCppPointer(arg__1));
  } // pressed(const QModelIndex & index)

  pressed(QModelIndex index) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAbstractItemView__pressed_QModelIndex')
        .asFunction();
    func(thisCpp, index == null ? ffi.nullptr : index.thisCpp);
  }

  void onPressed(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QAbstractItemView__onPressed_QModelIndex')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onPressed_callback);
    final callbackMethod = onPressed_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onPressed_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onPressed_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // reset()

  reset() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            cFunctionSymbolName(5428))
        .asFunction();
    func(thisCpp);
  }

  static void reset_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::reset()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.reset();
  } // resetHorizontalScrollMode()

  resetHorizontalScrollMode() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractItemView__resetHorizontalScrollMode')
        .asFunction();
    func(thisCpp);
  } // resetVerticalScrollMode()

  resetVerticalScrollMode() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractItemView__resetVerticalScrollMode')
        .asFunction();
    func(thisCpp);
  } // rootIndex() const

  QModelIndex rootIndex() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAbstractItemView__rootIndex')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QModelIndex.fromCppPointer(result, true);
  } // rowsAboutToBeRemoved(const QModelIndex & parent, int start, int end)

  rowsAboutToBeRemoved(QModelIndex parent, int start, int end) {
    final void_Func_voidstar_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            cFunctionSymbolName(5432))
        .asFunction();
    func(thisCpp, parent == null ? ffi.nullptr : parent.thisCpp, start, end);
  }

  static void rowsAboutToBeRemoved_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> parent, int start, int end) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::rowsAboutToBeRemoved(const QModelIndex & parent, int start, int end)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.rowsAboutToBeRemoved(
        QModelIndex.fromCppPointer(parent), start, end);
  } // rowsInserted(const QModelIndex & parent, int start, int end)

  rowsInserted(QModelIndex parent, int start, int end) {
    final void_Func_voidstar_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            cFunctionSymbolName(5433))
        .asFunction();
    func(thisCpp, parent == null ? ffi.nullptr : parent.thisCpp, start, end);
  }

  static void rowsInserted_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> parent, int start, int end) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::rowsInserted(const QModelIndex & parent, int start, int end)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.rowsInserted(QModelIndex.fromCppPointer(parent), start, end);
  } // scheduleDelayedItemsLayout()

  scheduleDelayedItemsLayout() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractItemView__scheduleDelayedItemsLayout')
        .asFunction();
    func(thisCpp);
  }

  static void scrollContentsBy_calledFromC(
      ffi.Pointer<void> thisCpp, int dx, int dy) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::scrollContentsBy(int dx, int dy)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.scrollContentsBy(dx, dy);
  } // scrollDirtyRegion(int dx, int dy)

  scrollDirtyRegion(int dx, int dy) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QAbstractItemView__scrollDirtyRegion_int_int')
        .asFunction();
    func(thisCpp, dx, dy);
  } // scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint)

  scrollTo(QModelIndex index,
      {int hint = QAbstractItemView_ScrollHint.EnsureVisible}) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(5436))
        .asFunction();
    func(thisCpp, index == null ? ffi.nullptr : index.thisCpp, hint);
  }

  static void scrollTo_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index, int hint) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.scrollTo(QModelIndex.fromCppPointer(index), hint: hint);
  } // scrollToBottom()

  scrollToBottom() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractItemView__scrollToBottom')
        .asFunction();
    func(thisCpp);
  } // scrollToTop()

  scrollToTop() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractItemView__scrollToTop')
        .asFunction();
    func(thisCpp);
  } // selectAll()

  selectAll() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            cFunctionSymbolName(5439))
        .asFunction();
    func(thisCpp);
  }

  static void selectAll_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::selectAll()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.selectAll();
  } // selectedIndexes() const

  QList selectedIndexes() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            cFunctionSymbolName(5440))
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QList<QModelIndex>.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> selectedIndexes_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::selectedIndexes() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.selectedIndexes();
    return result.thisCpp;
  } // selectionChanged(const QItemSelection & selected, const QItemSelection & deselected)

  selectionChanged(QItemSelection selected, QItemSelection deselected) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5441))
        .asFunction();
    func(thisCpp, selected == null ? ffi.nullptr : selected.thisCpp,
        deselected == null ? ffi.nullptr : deselected.thisCpp);
  }

  static void selectionChanged_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void> selected, ffi.Pointer<void> deselected) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::selectionChanged(const QItemSelection & selected, const QItemSelection & deselected)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.selectionChanged(QItemSelection.fromCppPointer(selected),
        QItemSelection.fromCppPointer(deselected));
  } // selectionCommand(const QModelIndex & index, const QEvent * event) const

  int selectionCommand(QModelIndex index, {required QEvent? event}) {
    final int_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5442))
        .asFunction();
    return func(thisCpp, index == null ? ffi.nullptr : index.thisCpp,
        event == null ? ffi.nullptr : event.thisCpp);
  }

  static int selectionCommand_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void> index, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::selectionCommand(const QModelIndex & index, const QEvent * event) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.selectionCommand(
        QModelIndex.fromCppPointer(index),
        event: (event == null || event.address == 0)
            ? null
            : QEvent.fromCppPointer(event));
    return result;
  } // selectionModel() const

  QItemSelectionModel selectionModel() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAbstractItemView__selectionModel')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QItemSelectionModel.fromCppPointer(result, false);
  } // setAlternatingRowColors(bool enable)

  setAlternatingRowColors(bool enable) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAbstractItemView__setAlternatingRowColors_bool')
        .asFunction();
    func(thisCpp, enable ? 1 : 0);
  } // setAutoScroll(bool enable)

  setAutoScroll(bool enable) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAbstractItemView__setAutoScroll_bool')
        .asFunction();
    func(thisCpp, enable ? 1 : 0);
  } // setAutoScrollMargin(int margin)

  setAutoScrollMargin(int margin) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QAbstractItemView__setAutoScrollMargin_int')
        .asFunction();
    func(thisCpp, margin);
  } // setCurrentIndex(const QModelIndex & index)

  setCurrentIndex(QModelIndex index) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAbstractItemView__setCurrentIndex_QModelIndex')
        .asFunction();
    func(thisCpp, index == null ? ffi.nullptr : index.thisCpp);
  } // setDirtyRegion(const QRegion & region)

  setDirtyRegion(QRegion region) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAbstractItemView__setDirtyRegion_QRegion')
        .asFunction();
    func(thisCpp, region == null ? ffi.nullptr : region.thisCpp);
  } // setDragDropOverwriteMode(bool overwrite)

  setDragDropOverwriteMode(bool overwrite) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAbstractItemView__setDragDropOverwriteMode_bool')
        .asFunction();
    func(thisCpp, overwrite ? 1 : 0);
  } // setDragEnabled(bool enable)

  setDragEnabled(bool enable) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAbstractItemView__setDragEnabled_bool')
        .asFunction();
    func(thisCpp, enable ? 1 : 0);
  } // setDropIndicatorShown(bool enable)

  setDropIndicatorShown(bool enable) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAbstractItemView__setDropIndicatorShown_bool')
        .asFunction();
    func(thisCpp, enable ? 1 : 0);
  } // setIconSize(const QSize & size)

  setIconSize(QSize? size) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAbstractItemView__setIconSize_QSize')
        .asFunction();
    func(thisCpp, size == null ? ffi.nullptr : size.thisCpp);
  } // setIndexWidget(const QModelIndex & index, QWidget * widget)

  setIndexWidget(QModelIndex index, QWidget? widget) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QAbstractItemView__setIndexWidget_QModelIndex_QWidget')
        .asFunction();
    func(thisCpp, index == null ? ffi.nullptr : index.thisCpp,
        widget == null ? ffi.nullptr : widget.thisCpp);
  } // setModel(QAbstractItemModel * model)

  setModel(QAbstractItemModel? model) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5455))
        .asFunction();
    func(thisCpp, model == null ? ffi.nullptr : model.thisCpp);
  }

  static void setModel_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? model) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::setModel(QAbstractItemModel * model)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setModel((model == null || model.address == 0)
        ? null
        : QAbstractItemModel.fromCppPointer(model));
  } // setRootIndex(const QModelIndex & index)

  setRootIndex(QModelIndex index) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5456))
        .asFunction();
    func(thisCpp, index == null ? ffi.nullptr : index.thisCpp);
  }

  static void setRootIndex_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::setRootIndex(const QModelIndex & index)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setRootIndex(QModelIndex.fromCppPointer(index));
  } // setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag> command)

  setSelection(QRect? rect, int command) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(5457))
        .asFunction();
    func(thisCpp, rect == null ? ffi.nullptr : rect.thisCpp, command);
  }

  static void setSelection_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? rect, int command) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag> command)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setSelection(
        (rect == null || rect.address == 0) ? null : QRect.fromCppPointer(rect),
        command);
  } // setSelectionModel(QItemSelectionModel * selectionModel)

  setSelectionModel(QItemSelectionModel? selectionModel) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5458))
        .asFunction();
    func(
        thisCpp, selectionModel == null ? ffi.nullptr : selectionModel.thisCpp);
  }

  static void setSelectionModel_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? selectionModel) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::setSelectionModel(QItemSelectionModel * selectionModel)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setSelectionModel(
        (selectionModel == null || selectionModel.address == 0)
            ? null
            : QItemSelectionModel.fromCppPointer(selectionModel));
  } // setTabKeyNavigation(bool enable)

  setTabKeyNavigation(bool enable) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAbstractItemView__setTabKeyNavigation_bool')
        .asFunction();
    func(thisCpp, enable ? 1 : 0);
  }

  static void setVisible_calledFromC(ffi.Pointer<void> thisCpp, int visible) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::setVisible(bool visible)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setVisible(visible != 0);
  }

  static void setupViewport_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? viewport) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::setupViewport(QWidget * viewport)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setupViewport((viewport == null || viewport.address == 0)
        ? null
        : QWidget.fromCppPointer(viewport));
  }

  static ffi.Pointer<void> sharedPainter_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::sharedPainter() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sharedPainter();
    return result.thisCpp;
  } // showDropIndicator() const

  bool showDropIndicator() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QAbstractItemView__showDropIndicator')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static ffi.Pointer<void> sizeHint_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::sizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHint();
    return result.thisCpp;
  } // sizeHintForColumn(int column) const

  int sizeHintForColumn(int column) {
    final int_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(5463))
        .asFunction();
    return func(thisCpp, column);
  }

  static int sizeHintForColumn_calledFromC(
      ffi.Pointer<void> thisCpp, int column) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::sizeHintForColumn(int column) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHintForColumn(column);
    return result;
  } // sizeHintForIndex(const QModelIndex & index) const

  QSize sizeHintForIndex(QModelIndex index) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QAbstractItemView__sizeHintForIndex_QModelIndex')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, index == null ? ffi.nullptr : index.thisCpp);
    return QSize.fromCppPointer(result, true);
  } // sizeHintForRow(int row) const

  int sizeHintForRow(int row) {
    final int_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(5465))
        .asFunction();
    return func(thisCpp, row);
  }

  static int sizeHintForRow_calledFromC(ffi.Pointer<void> thisCpp, int row) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::sizeHintForRow(int row) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHintForRow(row);
    return result;
  } // startAutoScroll()

  startAutoScroll() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractItemView__startAutoScroll')
        .asFunction();
    func(thisCpp);
  } // stopAutoScroll()

  stopAutoScroll() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractItemView__stopAutoScroll')
        .asFunction();
    func(thisCpp);
  } // tabKeyNavigation() const

  bool tabKeyNavigation() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QAbstractItemView__tabKeyNavigation')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QAbstractItemView__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  } // update(const QModelIndex & index)

  updateIndex(QModelIndex index) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAbstractItemView__updateIndex_QModelIndex')
        .asFunction();
    func(thisCpp, index == null ? ffi.nullptr : index.thisCpp);
  } // updateEditorData()

  updateEditorData() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            cFunctionSymbolName(5471))
        .asFunction();
    func(thisCpp);
  }

  static void updateEditorData_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::updateEditorData()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.updateEditorData();
  } // updateEditorGeometries()

  updateEditorGeometries() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            cFunctionSymbolName(5472))
        .asFunction();
    func(thisCpp);
  }

  static void updateEditorGeometries_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::updateEditorGeometries()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.updateEditorGeometries();
  } // updateGeometries()

  updateGeometries() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            cFunctionSymbolName(5473))
        .asFunction();
    func(thisCpp);
  }

  static void updateGeometries_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::updateGeometries()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.updateGeometries();
  } // verticalOffset() const

  int verticalOffset() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            cFunctionSymbolName(5474))
        .asFunction();
    return func(thisCpp);
  }

  static int verticalOffset_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::verticalOffset() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.verticalOffset();
    return result;
  } // verticalScrollbarAction(int action)

  verticalScrollbarAction(int action) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(5475))
        .asFunction();
    func(thisCpp, action);
  }

  static void verticalScrollbarAction_calledFromC(
      ffi.Pointer<void> thisCpp, int action) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::verticalScrollbarAction(int action)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.verticalScrollbarAction(action);
  } // verticalScrollbarValueChanged(int value)

  verticalScrollbarValueChanged(int value) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(5476))
        .asFunction();
    func(thisCpp, value);
  }

  static void verticalScrollbarValueChanged_calledFromC(
      ffi.Pointer<void> thisCpp, int value) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::verticalScrollbarValueChanged(int value)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.verticalScrollbarValueChanged(value);
  } // viewportEntered()

  viewportEntered() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractItemView__viewportEntered')
        .asFunction();
    func(thisCpp);
  }

  void onViewportEntered(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QAbstractItemView__onViewportEntered')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onViewportEntered_callback);
    final callbackMethod = onViewportEntered_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onViewportEntered_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onViewportEntered_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static int viewportEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::viewportEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.viewportEvent(
        (event == null || event.address == 0)
            ? null
            : QEvent.fromCppPointer(event));
    return result ? 1 : 0;
  }

  static ffi.Pointer<void> viewportSizeHint_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::viewportSizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.viewportSizeHint();
    return result.thisCpp;
  } // visualRect(const QModelIndex & index) const

  QRect visualRect(QModelIndex index) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5479))
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, index == null ? ffi.nullptr : index.thisCpp);
    return QRect.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> visualRect_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::visualRect(const QModelIndex & index) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.visualRect(QModelIndex.fromCppPointer(index));
    return result.thisCpp;
  } // visualRegionForSelection(const QItemSelection & selection) const

  QRegion visualRegionForSelection(QItemSelection selection) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5480))
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, selection == null ? ffi.nullptr : selection.thisCpp);
    return QRegion.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> visualRegionForSelection_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> selection) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemView::visualRegionForSelection(const QItemSelection & selection) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance
        .visualRegionForSelection(QItemSelection.fromCppPointer(selection));
    return result.thisCpp;
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractItemView__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 1128:
        return "c_QAbstractItemView__changeEvent_QEvent";
      case 5397:
        return "c_QAbstractItemView__commitData_QWidget";
      case 5399:
        return "c_QAbstractItemView__currentChanged_QModelIndex_QModelIndex";
      case 946:
        return "c_QAbstractItemView__customEvent_QEvent";
      case 5401:
        return "c_QAbstractItemView__dataChanged_QModelIndex_QModelIndex_QList_int";
      case 1145:
        return "c_QAbstractItemView__devType";
      case 5404:
        return "c_QAbstractItemView__doItemsLayout";
      case 5409:
        return "c_QAbstractItemView__editorDestroyed_QObject";
      case 956:
        return "c_QAbstractItemView__event_QEvent";
      case 957:
        return "c_QAbstractItemView__eventFilter_QObject_QEvent";
      case 1155:
        return "c_QAbstractItemView__focusNextPrevChild_bool";
      case 1169:
        return "c_QAbstractItemView__hasHeightForWidth";
      case 1173:
        return "c_QAbstractItemView__heightForWidth_int";
      case 5413:
        return "c_QAbstractItemView__horizontalOffset";
      case 5414:
        return "c_QAbstractItemView__horizontalScrollbarAction_int";
      case 5415:
        return "c_QAbstractItemView__horizontalScrollbarValueChanged_int";
      case 5418:
        return "c_QAbstractItemView__indexAt_QPoint";
      case 1176:
        return "c_QAbstractItemView__initPainter_QPainter";
      case 5420:
        return "c_QAbstractItemView__isIndexHidden_QModelIndex";
      case 5422:
        return "c_QAbstractItemView__keyboardSearch_QString";
      case 1202:
        return "c_QAbstractItemView__leaveEvent_QEvent";
      case 1222:
        return "c_QAbstractItemView__minimumSizeHint";
      case 1224:
        return "c_QAbstractItemView__mouseDoubleClickEvent_QMouseEvent";
      case 1226:
        return "c_QAbstractItemView__mouseMoveEvent_QMouseEvent";
      case 1227:
        return "c_QAbstractItemView__mousePressEvent_QMouseEvent";
      case 1228:
        return "c_QAbstractItemView__mouseReleaseEvent_QMouseEvent";
      case 5425:
        return "c_QAbstractItemView__moveCursor_CursorAction_KeyboardModifiers";
      case 1235:
        return "c_QAbstractItemView__paintEvent_QPaintEvent";
      case 5428:
        return "c_QAbstractItemView__reset";
      case 5432:
        return "c_QAbstractItemView__rowsAboutToBeRemoved_QModelIndex_int_int";
      case 5433:
        return "c_QAbstractItemView__rowsInserted_QModelIndex_int_int";
      case 5218:
        return "c_QAbstractItemView__scrollContentsBy_int_int";
      case 5436:
        return "c_QAbstractItemView__scrollTo_QModelIndex_ScrollHint";
      case 5439:
        return "c_QAbstractItemView__selectAll";
      case 5440:
        return "c_QAbstractItemView__selectedIndexes";
      case 5441:
        return "c_QAbstractItemView__selectionChanged_QItemSelection_QItemSelection";
      case 5442:
        return "c_QAbstractItemView__selectionCommand_QModelIndex_QEvent";
      case 5455:
        return "c_QAbstractItemView__setModel_QAbstractItemModel";
      case 5456:
        return "c_QAbstractItemView__setRootIndex_QModelIndex";
      case 5457:
        return "c_QAbstractItemView__setSelection_QRect_SelectionFlags";
      case 5458:
        return "c_QAbstractItemView__setSelectionModel_QItemSelectionModel";
      case 1314:
        return "c_QAbstractItemView__setVisible_bool";
      case 5226:
        return "c_QAbstractItemView__setupViewport_QWidget";
      case 1323:
        return "c_QAbstractItemView__sharedPainter";
      case 1331:
        return "c_QAbstractItemView__sizeHint";
      case 5463:
        return "c_QAbstractItemView__sizeHintForColumn_int";
      case 5465:
        return "c_QAbstractItemView__sizeHintForRow_int";
      case 5471:
        return "c_QAbstractItemView__updateEditorData";
      case 5472:
        return "c_QAbstractItemView__updateEditorGeometries";
      case 5473:
        return "c_QAbstractItemView__updateGeometries";
      case 5474:
        return "c_QAbstractItemView__verticalOffset";
      case 5475:
        return "c_QAbstractItemView__verticalScrollbarAction_int";
      case 5476:
        return "c_QAbstractItemView__verticalScrollbarValueChanged_int";
      case 5229:
        return "c_QAbstractItemView__viewportEvent_QEvent";
      case 5230:
        return "c_QAbstractItemView__viewportSizeHint";
      case 5479:
        return "c_QAbstractItemView__visualRect_QModelIndex";
      case 5480:
        return "c_QAbstractItemView__visualRegionForSelection_QItemSelection";
    }
    return super.cFunctionSymbolName(methodId);
  }

  static String methodNameFromId(int methodId) {
    switch (methodId) {
      case 1128:
        return "changeEvent";
      case 5397:
        return "commitData";
      case 5399:
        return "currentChanged";
      case 946:
        return "customEvent";
      case 5401:
        return "dataChanged";
      case 1145:
        return "devType";
      case 5404:
        return "doItemsLayout";
      case 5409:
        return "editorDestroyed";
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
      case 5413:
        return "horizontalOffset";
      case 5414:
        return "horizontalScrollbarAction";
      case 5415:
        return "horizontalScrollbarValueChanged";
      case 5418:
        return "indexAt";
      case 1176:
        return "initPainter";
      case 5420:
        return "isIndexHidden";
      case 5422:
        return "keyboardSearch";
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
      case 5425:
        return "moveCursor";
      case 1235:
        return "paintEvent";
      case 5428:
        return "reset";
      case 5432:
        return "rowsAboutToBeRemoved";
      case 5433:
        return "rowsInserted";
      case 5218:
        return "scrollContentsBy";
      case 5436:
        return "scrollTo";
      case 5439:
        return "selectAll";
      case 5440:
        return "selectedIndexes";
      case 5441:
        return "selectionChanged";
      case 5442:
        return "selectionCommand";
      case 5455:
        return "setModel";
      case 5456:
        return "setRootIndex";
      case 5457:
        return "setSelection";
      case 5458:
        return "setSelectionModel";
      case 1314:
        return "setVisible";
      case 5226:
        return "setupViewport";
      case 1323:
        return "sharedPainter";
      case 1331:
        return "sizeHint";
      case 5463:
        return "sizeHintForColumn";
      case 5465:
        return "sizeHintForRow";
      case 5471:
        return "updateEditorData";
      case 5472:
        return "updateEditorGeometries";
      case 5473:
        return "updateGeometries";
      case 5474:
        return "verticalOffset";
      case 5475:
        return "verticalScrollbarAction";
      case 5476:
        return "verticalScrollbarValueChanged";
      case 5229:
        return "viewportEvent";
      case 5230:
        return "viewportSizeHint";
      case 5479:
        return "visualRect";
      case 5480:
        return "visualRegionForSelection";
    }
    throw Error();
  }

  void registerCallbacks() {
    assert(thisCpp != null);
    final RegisterMethodIsReimplementedCallback registerCallback = _dylib
        .lookup<ffi.NativeFunction<RegisterMethodIsReimplementedCallback_FFI>>(
            'c_QAbstractItemView__registerVirtualMethodCallback')
        .asFunction();
    final callback1128 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QFrame.changeEvent_calledFromC);
    registerCallback(thisCpp, callback1128, 1128);
    final callback5397 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.commitData_calledFromC);
    registerCallback(thisCpp, callback5397, 5397);
    final callback5399 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_voidstar_FFI>(
            QAbstractItemView.currentChanged_calledFromC);
    registerCallback(thisCpp, callback5399, 5399);
    final callback946 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QObject.customEvent_calledFromC);
    registerCallback(thisCpp, callback946, 946);
    final callback5401 = ffi.Pointer.fromFunction<
            void_Func_voidstar_voidstar_voidstar_voidstar_FFI>(
        QAbstractItemView.dataChanged_calledFromC);
    registerCallback(thisCpp, callback5401, 5401);
    const callbackExcept1145 = 0;
    final callback1145 = ffi.Pointer.fromFunction<int_Func_voidstar_FFI>(
        QWidget.devType_calledFromC, callbackExcept1145);
    registerCallback(thisCpp, callback1145, 1145);
    final callback5404 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QAbstractItemView.doItemsLayout_calledFromC);
    registerCallback(thisCpp, callback5404, 5404);
    final callback5409 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.editorDestroyed_calledFromC);
    registerCallback(thisCpp, callback5409, 5409);
    const callbackExcept956 = 0;
    final callback956 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.event_calledFromC, callbackExcept956);
    registerCallback(thisCpp, callback956, 956);
    const callbackExcept957 = 0;
    final callback957 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_voidstar_FFI>(
            QAbstractItemView.eventFilter_calledFromC, callbackExcept957);
    registerCallback(thisCpp, callback957, 957);
    const callbackExcept1155 = 0;
    final callback1155 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_ffi_Int8_FFI>(
            QAbstractItemView.focusNextPrevChild_calledFromC,
            callbackExcept1155);
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
    const callbackExcept5413 = 0;
    final callback5413 = ffi.Pointer.fromFunction<int_Func_voidstar_FFI>(
        QAbstractItemView.horizontalOffset_calledFromC, callbackExcept5413);
    registerCallback(thisCpp, callback5413, 5413);
    final callback5414 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_FFI>(
            QAbstractItemView.horizontalScrollbarAction_calledFromC);
    registerCallback(thisCpp, callback5414, 5414);
    final callback5415 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_FFI>(
            QAbstractItemView.horizontalScrollbarValueChanged_calledFromC);
    registerCallback(thisCpp, callback5415, 5415);
    final callback5418 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.indexAt_calledFromC);
    registerCallback(thisCpp, callback5418, 5418);
    final callback1176 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWidget.initPainter_calledFromC);
    registerCallback(thisCpp, callback1176, 1176);
    const callbackExcept5420 = 0;
    final callback5420 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.isIndexHidden_calledFromC, callbackExcept5420);
    registerCallback(thisCpp, callback5420, 5420);
    final callback5422 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.keyboardSearch_calledFromC);
    registerCallback(thisCpp, callback5422, 5422);
    final callback1202 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWidget.leaveEvent_calledFromC);
    registerCallback(thisCpp, callback1202, 1202);
    final callback1222 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QAbstractScrollArea.minimumSizeHint_calledFromC);
    registerCallback(thisCpp, callback1222, 1222);
    final callback1224 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.mouseDoubleClickEvent_calledFromC);
    registerCallback(thisCpp, callback1224, 1224);
    final callback1226 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.mouseMoveEvent_calledFromC);
    registerCallback(thisCpp, callback1226, 1226);
    final callback1227 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.mousePressEvent_calledFromC);
    registerCallback(thisCpp, callback1227, 1227);
    final callback1228 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.mouseReleaseEvent_calledFromC);
    registerCallback(thisCpp, callback1228, 1228);
    final callback5425 = ffi.Pointer.fromFunction<
            voidstar_Func_voidstar_ffi_Int32_ffi_Int32_FFI>(
        QAbstractItemView.moveCursor_calledFromC);
    registerCallback(thisCpp, callback5425, 5425);
    final callback1235 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractScrollArea.paintEvent_calledFromC);
    registerCallback(thisCpp, callback1235, 1235);
    final callback5428 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QAbstractItemView.reset_calledFromC);
    registerCallback(thisCpp, callback5428, 5428);
    final callback5432 = ffi.Pointer.fromFunction<
            void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>(
        QAbstractItemView.rowsAboutToBeRemoved_calledFromC);
    registerCallback(thisCpp, callback5432, 5432);
    final callback5433 = ffi.Pointer.fromFunction<
            void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>(
        QAbstractItemView.rowsInserted_calledFromC);
    registerCallback(thisCpp, callback5433, 5433);
    final callback5218 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>(
            QAbstractScrollArea.scrollContentsBy_calledFromC);
    registerCallback(thisCpp, callback5218, 5218);
    final callback5436 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>(
            QAbstractItemView.scrollTo_calledFromC);
    registerCallback(thisCpp, callback5436, 5436);
    final callback5439 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QAbstractItemView.selectAll_calledFromC);
    registerCallback(thisCpp, callback5439, 5439);
    final callback5440 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QAbstractItemView.selectedIndexes_calledFromC);
    registerCallback(thisCpp, callback5440, 5440);
    final callback5441 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_voidstar_FFI>(
            QAbstractItemView.selectionChanged_calledFromC);
    registerCallback(thisCpp, callback5441, 5441);
    const callbackExcept5442 = 0;
    final callback5442 =
        ffi.Pointer.fromFunction<int_Func_voidstar_voidstar_voidstar_FFI>(
            QAbstractItemView.selectionCommand_calledFromC, callbackExcept5442);
    registerCallback(thisCpp, callback5442, 5442);
    final callback5455 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.setModel_calledFromC);
    registerCallback(thisCpp, callback5455, 5455);
    final callback5456 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.setRootIndex_calledFromC);
    registerCallback(thisCpp, callback5456, 5456);
    final callback5457 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>(
            QAbstractItemView.setSelection_calledFromC);
    registerCallback(thisCpp, callback5457, 5457);
    final callback5458 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.setSelectionModel_calledFromC);
    registerCallback(thisCpp, callback5458, 5458);
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
    const callbackExcept5463 = 0;
    final callback5463 =
        ffi.Pointer.fromFunction<int_Func_voidstar_ffi_Int32_FFI>(
            QAbstractItemView.sizeHintForColumn_calledFromC,
            callbackExcept5463);
    registerCallback(thisCpp, callback5463, 5463);
    const callbackExcept5465 = 0;
    final callback5465 =
        ffi.Pointer.fromFunction<int_Func_voidstar_ffi_Int32_FFI>(
            QAbstractItemView.sizeHintForRow_calledFromC, callbackExcept5465);
    registerCallback(thisCpp, callback5465, 5465);
    final callback5471 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QAbstractItemView.updateEditorData_calledFromC);
    registerCallback(thisCpp, callback5471, 5471);
    final callback5472 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QAbstractItemView.updateEditorGeometries_calledFromC);
    registerCallback(thisCpp, callback5472, 5472);
    final callback5473 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QAbstractItemView.updateGeometries_calledFromC);
    registerCallback(thisCpp, callback5473, 5473);
    const callbackExcept5474 = 0;
    final callback5474 = ffi.Pointer.fromFunction<int_Func_voidstar_FFI>(
        QAbstractItemView.verticalOffset_calledFromC, callbackExcept5474);
    registerCallback(thisCpp, callback5474, 5474);
    final callback5475 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_FFI>(
            QAbstractItemView.verticalScrollbarAction_calledFromC);
    registerCallback(thisCpp, callback5475, 5475);
    final callback5476 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_FFI>(
            QAbstractItemView.verticalScrollbarValueChanged_calledFromC);
    registerCallback(thisCpp, callback5476, 5476);
    const callbackExcept5229 = 0;
    final callback5229 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.viewportEvent_calledFromC, callbackExcept5229);
    registerCallback(thisCpp, callback5229, 5229);
    final callback5230 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QAbstractItemView.viewportSizeHint_calledFromC);
    registerCallback(thisCpp, callback5230, 5230);
    final callback5479 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.visualRect_calledFromC);
    registerCallback(thisCpp, callback5479, 5479);
    final callback5480 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.visualRegionForSelection_calledFromC);
    registerCallback(thisCpp, callback5480, 5480);
  }
}
