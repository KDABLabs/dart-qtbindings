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

class QItemSelectionModel_SelectionFlag {
  static const NoUpdate = 0;
  static const Clear = 1;
  static const Select = 2;
  static const Deselect = 4;
  static const Toggle = 8;
  static const Current = 16;
  static const Rows = 32;
  static const Columns = 64;
  static const SelectCurrent = 18;
  static const ToggleCurrent = 24;
  static const ClearAndSelect = 3;
}

class QItemSelectionModel extends QObject {
  QItemSelectionModel.fromCppPointer(var cppPointer,
      [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QItemSelectionModel.init() : super.init() {}
  factory QItemSelectionModel.fromCache(var cppPointer,
      [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QItemSelectionModel;
    }
    return QItemSelectionModel.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QItemSelectionModel_Finalizer";
  } //QItemSelectionModel(QAbstractItemModel * model)

  QItemSelectionModel({required QAbstractItemModel? model}) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QItemSelectionModel__constructor_QAbstractItemModel')
        .asFunction();
    thisCpp = func(model == null ? ffi.nullptr : model.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } //QItemSelectionModel(QAbstractItemModel * model, QObject * parent)
  QItemSelectionModel.ctor2(QAbstractItemModel? model, QObject? parent)
      : super.init() {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QItemSelectionModel__constructor_QAbstractItemModel_QObject')
        .asFunction();
    thisCpp = func(model == null ? ffi.nullptr : model.thisCpp,
        parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } // clear()
  clear() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            cFunctionSymbolName(3298))
        .asFunction();
    func(thisCpp);
  }

  static void clear_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QItemSelectionModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QItemSelectionModel::clear()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.clear();
  } // clearCurrentIndex()

  clearCurrentIndex() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            cFunctionSymbolName(3299))
        .asFunction();
    func(thisCpp);
  }

  static void clearCurrentIndex_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QItemSelectionModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QItemSelectionModel::clearCurrentIndex()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.clearCurrentIndex();
  } // clearSelection()

  clearSelection() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QItemSelectionModel__clearSelection')
        .asFunction();
    func(thisCpp);
  } // columnIntersectsSelection(int column, const QModelIndex & parent) const

  bool columnIntersectsSelection(int column, {required QModelIndex parent}) {
    final bool_Func_voidstar_int_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_ffi_Int32_voidstar_FFI>>(
            'c_QItemSelectionModel__columnIntersectsSelection_int_QModelIndex')
        .asFunction();
    return func(
            thisCpp, column, parent == null ? ffi.nullptr : parent.thisCpp) !=
        0;
  } // currentChanged(const QModelIndex & current, const QModelIndex & previous)

  currentChanged(QModelIndex current, QModelIndex previous) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QItemSelectionModel__currentChanged_QModelIndex_QModelIndex')
        .asFunction();
    func(thisCpp, current == null ? ffi.nullptr : current.thisCpp,
        previous == null ? ffi.nullptr : previous.thisCpp);
  }

  void onCurrentChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QItemSelectionModel__onCurrentChanged_QModelIndex_QModelIndex')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onCurrentChanged_callback);
    final callbackMethod = onCurrentChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onCurrentChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QItemSelectionModel;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onCurrentChanged_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // currentColumnChanged(const QModelIndex & current, const QModelIndex & previous)

  currentColumnChanged(QModelIndex current, QModelIndex previous) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QItemSelectionModel__currentColumnChanged_QModelIndex_QModelIndex')
        .asFunction();
    func(thisCpp, current == null ? ffi.nullptr : current.thisCpp,
        previous == null ? ffi.nullptr : previous.thisCpp);
  }

  void onCurrentColumnChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QItemSelectionModel__onCurrentColumnChanged_QModelIndex_QModelIndex')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onCurrentColumnChanged_callback);
    final callbackMethod = onCurrentColumnChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onCurrentColumnChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QItemSelectionModel;
    final signalHandlers = dartInstance
            .signalHandlerersBySignal[onCurrentColumnChanged_callback] ??
        [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // currentIndex() const

  QModelIndex currentIndex() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QItemSelectionModel__currentIndex')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QModelIndex.fromCppPointer(result, true);
  } // currentRowChanged(const QModelIndex & current, const QModelIndex & previous)

  currentRowChanged(QModelIndex current, QModelIndex previous) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QItemSelectionModel__currentRowChanged_QModelIndex_QModelIndex')
        .asFunction();
    func(thisCpp, current == null ? ffi.nullptr : current.thisCpp,
        previous == null ? ffi.nullptr : previous.thisCpp);
  }

  void onCurrentRowChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QItemSelectionModel__onCurrentRowChanged_QModelIndex_QModelIndex')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onCurrentRowChanged_callback);
    final callbackMethod = onCurrentRowChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onCurrentRowChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QItemSelectionModel;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onCurrentRowChanged_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QItemSelectionModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QItemSelectionModel::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  } // emitSelectionChanged(const QItemSelection & newSelection, const QItemSelection & oldSelection)

  emitSelectionChanged(
      QItemSelection newSelection, QItemSelection oldSelection) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QItemSelectionModel__emitSelectionChanged_QItemSelection_QItemSelection')
        .asFunction();
    func(thisCpp, newSelection == null ? ffi.nullptr : newSelection.thisCpp,
        oldSelection == null ? ffi.nullptr : oldSelection.thisCpp);
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QItemSelectionModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QItemSelectionModel::event(QEvent * event)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QItemSelectionModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QItemSelectionModel::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
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
  } // hasSelection() const

  bool hasSelection() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QItemSelectionModel__hasSelection')
        .asFunction();
    return func(thisCpp) != 0;
  } // isColumnSelected(int column, const QModelIndex & parent) const

  bool isColumnSelected(int column, {required QModelIndex parent}) {
    final bool_Func_voidstar_int_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_ffi_Int32_voidstar_FFI>>(
            'c_QItemSelectionModel__isColumnSelected_int_QModelIndex')
        .asFunction();
    return func(
            thisCpp, column, parent == null ? ffi.nullptr : parent.thisCpp) !=
        0;
  } // isRowSelected(int row, const QModelIndex & parent) const

  bool isRowSelected(int row, {required QModelIndex parent}) {
    final bool_Func_voidstar_int_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_ffi_Int32_voidstar_FFI>>(
            'c_QItemSelectionModel__isRowSelected_int_QModelIndex')
        .asFunction();
    return func(thisCpp, row, parent == null ? ffi.nullptr : parent.thisCpp) !=
        0;
  } // isSelected(const QModelIndex & index) const

  bool isSelected(QModelIndex index) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QItemSelectionModel__isSelected_QModelIndex')
        .asFunction();
    return func(thisCpp, index == null ? ffi.nullptr : index.thisCpp) != 0;
  } // model()

  QAbstractItemModel model() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QItemSelectionModel__model')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QAbstractItemModel.fromCppPointer(result, false);
  } // modelChanged(QAbstractItemModel * model)

  modelChanged(QAbstractItemModel? model) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QItemSelectionModel__modelChanged_QAbstractItemModel')
        .asFunction();
    func(thisCpp, model == null ? ffi.nullptr : model.thisCpp);
  }

  void onModelChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QItemSelectionModel__onModelChanged_QAbstractItemModel')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onModelChanged_callback);
    final callbackMethod = onModelChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onModelChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QItemSelectionModel;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onModelChanged_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // reset()

  reset() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            cFunctionSymbolName(3334))
        .asFunction();
    func(thisCpp);
  }

  static void reset_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QItemSelectionModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QItemSelectionModel::reset()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.reset();
  } // rowIntersectsSelection(int row, const QModelIndex & parent) const

  bool rowIntersectsSelection(int row, {required QModelIndex parent}) {
    final bool_Func_voidstar_int_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_ffi_Int32_voidstar_FFI>>(
            'c_QItemSelectionModel__rowIntersectsSelection_int_QModelIndex')
        .asFunction();
    return func(thisCpp, row, parent == null ? ffi.nullptr : parent.thisCpp) !=
        0;
  } // select(const QItemSelection & selection, QFlags<QItemSelectionModel::SelectionFlag> command)

  select(QItemSelection selection, int command) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(3336))
        .asFunction();
    func(thisCpp, selection == null ? ffi.nullptr : selection.thisCpp, command);
  }

  static void select_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> selection, int command) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QItemSelectionModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QItemSelectionModel::select(const QItemSelection & selection, QFlags<QItemSelectionModel::SelectionFlag> command)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.select(QItemSelection.fromCppPointer(selection), command);
  } // select(const QModelIndex & index, QFlags<QItemSelectionModel::SelectionFlag> command)

  selectIndex(QModelIndex index, int command) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(3337))
        .asFunction();
    func(thisCpp, index == null ? ffi.nullptr : index.thisCpp, command);
  }

  static void selectIndex_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index, int command) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QItemSelectionModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QItemSelectionModel::select(const QModelIndex & index, QFlags<QItemSelectionModel::SelectionFlag> command)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.selectIndex(QModelIndex.fromCppPointer(index), command);
  } // selectedColumns(int row) const

  QList selectedColumns({int row = 0}) {
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            'c_QItemSelectionModel__selectedColumns_int')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, row);
    return QList<QModelIndex>.fromCppPointer(result, true);
  } // selectedIndexes() const

  QList selectedIndexes() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QItemSelectionModel__selectedIndexes')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QList<QModelIndex>.fromCppPointer(result, true);
  } // selectedRows(int column) const

  QList selectedRows({int column = 0}) {
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            'c_QItemSelectionModel__selectedRows_int')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, column);
    return QList<QModelIndex>.fromCppPointer(result, true);
  } // selection() const

  QItemSelection selection() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QItemSelectionModel__selection')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QItemSelection.fromCppPointer(result, true);
  } // selectionChanged(const QItemSelection & selected, const QItemSelection & deselected)

  selectionChanged(QItemSelection selected, QItemSelection deselected) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QItemSelectionModel__selectionChanged_QItemSelection_QItemSelection')
        .asFunction();
    func(thisCpp, selected == null ? ffi.nullptr : selected.thisCpp,
        deselected == null ? ffi.nullptr : deselected.thisCpp);
  }

  void onSelectionChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QItemSelectionModel__onSelectionChanged_QItemSelection_QItemSelection')
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QItemSelectionModel;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onSelectionChanged_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // setCurrentIndex(const QModelIndex & index, QFlags<QItemSelectionModel::SelectionFlag> command)

  setCurrentIndex(QModelIndex index, int command) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(3345))
        .asFunction();
    func(thisCpp, index == null ? ffi.nullptr : index.thisCpp, command);
  }

  static void setCurrentIndex_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index, int command) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QItemSelectionModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QItemSelectionModel::setCurrentIndex(const QModelIndex & index, QFlags<QItemSelectionModel::SelectionFlag> command)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setCurrentIndex(QModelIndex.fromCppPointer(index), command);
  } // setModel(QAbstractItemModel * model)

  setModel(QAbstractItemModel? model) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QItemSelectionModel__setModel_QAbstractItemModel')
        .asFunction();
    func(thisCpp, model == null ? ffi.nullptr : model.thisCpp);
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QItemSelectionModel__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QItemSelectionModel__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 3298:
        return "c_QItemSelectionModel__clear";
      case 3299:
        return "c_QItemSelectionModel__clearCurrentIndex";
      case 946:
        return "c_QItemSelectionModel__customEvent_QEvent";
      case 956:
        return "c_QItemSelectionModel__event_QEvent";
      case 957:
        return "c_QItemSelectionModel__eventFilter_QObject_QEvent";
      case 3334:
        return "c_QItemSelectionModel__reset";
      case 3336:
        return "c_QItemSelectionModel__select_QItemSelection_SelectionFlags";
      case 3337:
        return "c_QItemSelectionModel__selectIndex_QModelIndex_SelectionFlags";
      case 3345:
        return "c_QItemSelectionModel__setCurrentIndex_QModelIndex_SelectionFlags";
    }
    return super.cFunctionSymbolName(methodId);
  }

  static String methodNameFromId(int methodId) {
    switch (methodId) {
      case 3298:
        return "clear";
      case 3299:
        return "clearCurrentIndex";
      case 946:
        return "customEvent";
      case 956:
        return "event";
      case 957:
        return "eventFilter";
      case 3334:
        return "reset";
      case 3336:
        return "select";
      case 3337:
        return "selectIndex";
      case 3345:
        return "setCurrentIndex";
    }
    throw Error();
  }

  void registerCallbacks() {
    assert(thisCpp != null);
    final RegisterMethodIsReimplementedCallback registerCallback = _dylib
        .lookup<ffi.NativeFunction<RegisterMethodIsReimplementedCallback_FFI>>(
            'c_QItemSelectionModel__registerVirtualMethodCallback')
        .asFunction();
    final callback3298 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QItemSelectionModel.clear_calledFromC);
    registerCallback(thisCpp, callback3298, 3298);
    final callback3299 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QItemSelectionModel.clearCurrentIndex_calledFromC);
    registerCallback(thisCpp, callback3299, 3299);
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
    final callback3334 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QItemSelectionModel.reset_calledFromC);
    registerCallback(thisCpp, callback3334, 3334);
    final callback3336 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>(
            QItemSelectionModel.select_calledFromC);
    registerCallback(thisCpp, callback3336, 3336);
    final callback3337 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>(
            QItemSelectionModel.selectIndex_calledFromC);
    registerCallback(thisCpp, callback3337, 3337);
    final callback3345 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>(
            QItemSelectionModel.setCurrentIndex_calledFromC);
    registerCallback(thisCpp, callback3345, 3345);
  }
}
