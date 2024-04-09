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

class QAbstractItemModel extends QObject {
  QAbstractItemModel.fromCppPointer(var cppPointer,
      [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QAbstractItemModel.init() : super.init() {}
  factory QAbstractItemModel.fromCache(var cppPointer,
      [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QAbstractItemModel;
    }
    return QAbstractItemModel.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QAbstractItemModel_Finalizer";
  } //QAbstractItemModel(QObject * parent)

  QAbstractItemModel({required QObject? parent}) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAbstractItemModel__constructor_QObject')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } // beginInsertColumns(const QModelIndex & parent, int first, int last)
  beginInsertColumns(QModelIndex parent, int first, int last) {
    final void_Func_voidstar_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QAbstractItemModel__beginInsertColumns_QModelIndex_int_int')
        .asFunction();
    func(thisCpp, parent == null ? ffi.nullptr : parent.thisCpp, first, last);
  } // beginInsertRows(const QModelIndex & parent, int first, int last)

  beginInsertRows(QModelIndex parent, int first, int last) {
    final void_Func_voidstar_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QAbstractItemModel__beginInsertRows_QModelIndex_int_int')
        .asFunction();
    func(thisCpp, parent == null ? ffi.nullptr : parent.thisCpp, first, last);
  } // beginMoveColumns(const QModelIndex & sourceParent, int sourceFirst, int sourceLast, const QModelIndex & destinationParent, int destinationColumn)

  bool beginMoveColumns(QModelIndex sourceParent, int sourceFirst,
      int sourceLast, QModelIndex destinationParent, int destinationColumn) {
    final bool_Func_voidstar_voidstar_int_int_voidstar_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    bool_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_voidstar_ffi_Int32_FFI>>(
            'c_QAbstractItemModel__beginMoveColumns_QModelIndex_int_int_QModelIndex_int')
        .asFunction();
    return func(
            thisCpp,
            sourceParent == null ? ffi.nullptr : sourceParent.thisCpp,
            sourceFirst,
            sourceLast,
            destinationParent == null ? ffi.nullptr : destinationParent.thisCpp,
            destinationColumn) !=
        0;
  } // beginMoveRows(const QModelIndex & sourceParent, int sourceFirst, int sourceLast, const QModelIndex & destinationParent, int destinationRow)

  bool beginMoveRows(QModelIndex sourceParent, int sourceFirst, int sourceLast,
      QModelIndex destinationParent, int destinationRow) {
    final bool_Func_voidstar_voidstar_int_int_voidstar_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    bool_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_voidstar_ffi_Int32_FFI>>(
            'c_QAbstractItemModel__beginMoveRows_QModelIndex_int_int_QModelIndex_int')
        .asFunction();
    return func(
            thisCpp,
            sourceParent == null ? ffi.nullptr : sourceParent.thisCpp,
            sourceFirst,
            sourceLast,
            destinationParent == null ? ffi.nullptr : destinationParent.thisCpp,
            destinationRow) !=
        0;
  } // beginRemoveColumns(const QModelIndex & parent, int first, int last)

  beginRemoveColumns(QModelIndex parent, int first, int last) {
    final void_Func_voidstar_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QAbstractItemModel__beginRemoveColumns_QModelIndex_int_int')
        .asFunction();
    func(thisCpp, parent == null ? ffi.nullptr : parent.thisCpp, first, last);
  } // beginRemoveRows(const QModelIndex & parent, int first, int last)

  beginRemoveRows(QModelIndex parent, int first, int last) {
    final void_Func_voidstar_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QAbstractItemModel__beginRemoveRows_QModelIndex_int_int')
        .asFunction();
    func(thisCpp, parent == null ? ffi.nullptr : parent.thisCpp, first, last);
  } // beginResetModel()

  beginResetModel() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractItemModel__beginResetModel')
        .asFunction();
    func(thisCpp);
  } // buddy(const QModelIndex & index) const

  QModelIndex buddy(QModelIndex index) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5771))
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, index == null ? ffi.nullptr : index.thisCpp);
    return QModelIndex.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> buddy_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::buddy(const QModelIndex & index) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.buddy(QModelIndex.fromCppPointer(index));
    return result.thisCpp;
  } // canFetchMore(const QModelIndex & parent) const

  bool canFetchMore(QModelIndex parent) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5772))
        .asFunction();
    return func(thisCpp, parent == null ? ffi.nullptr : parent.thisCpp) != 0;
  }

  static int canFetchMore_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> parent) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::canFetchMore(const QModelIndex & parent) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.canFetchMore(QModelIndex.fromCppPointer(parent));
    return result ? 1 : 0;
  } // changePersistentIndex(const QModelIndex & from, const QModelIndex & to)

  changePersistentIndex(QModelIndex from, QModelIndex to) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QAbstractItemModel__changePersistentIndex_QModelIndex_QModelIndex')
        .asFunction();
    func(thisCpp, from == null ? ffi.nullptr : from.thisCpp,
        to == null ? ffi.nullptr : to.thisCpp);
  } // changePersistentIndexList(const QList<QModelIndex > & from, const QList<QModelIndex > & to)

  changePersistentIndexList(QList? from, QList? to) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QAbstractItemModel__changePersistentIndexList_QList_QModelIndex_QList_QModelIndex')
        .asFunction();
    func(thisCpp, from == null ? ffi.nullptr : from.thisCpp,
        to == null ? ffi.nullptr : to.thisCpp);
  } // checkIndex(const QModelIndex & index) const

  bool checkIndex(QModelIndex index) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QAbstractItemModel__checkIndex_QModelIndex')
        .asFunction();
    return func(thisCpp, index == null ? ffi.nullptr : index.thisCpp) != 0;
  } // clearItemData(const QModelIndex & index)

  bool clearItemData(QModelIndex index) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5777))
        .asFunction();
    return func(thisCpp, index == null ? ffi.nullptr : index.thisCpp) != 0;
  }

  static int clearItemData_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::clearItemData(const QModelIndex & index)! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.clearItemData(QModelIndex.fromCppPointer(index));
    return result ? 1 : 0;
  } // columnCount(const QModelIndex & parent) const

  int columnCount({required QModelIndex parent}) {
    final int_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5778))
        .asFunction();
    return func(thisCpp, parent == null ? ffi.nullptr : parent.thisCpp);
  }

  static int columnCount_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> parent) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::columnCount(const QModelIndex & parent) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.columnCount(parent: QModelIndex.fromCppPointer(parent));
    return result;
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  } // data(const QModelIndex & index, int role) const

  QVariant data(QModelIndex index, {int role = Qt_ItemDataRole.DisplayRole}) {
    final voidstar_Func_voidstar_voidstar_int func = _dylib
        .lookup<
                ffi
                .NativeFunction<voidstar_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(5780))
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, index == null ? ffi.nullptr : index.thisCpp, role);
    return QVariant.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> data_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index, int role) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::data(const QModelIndex & index, int role) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.data(QModelIndex.fromCppPointer(index), role: role);
    return result.thisCpp;
  } // dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight, const QList<int > & roles)

  dataChanged(QModelIndex topLeft, QModelIndex bottomRight,
      {required QList? roles}) {
    final void_Func_voidstar_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_voidstar_voidstar_FFI>>(
            'c_QAbstractItemModel__dataChanged_QModelIndex_QModelIndex_QList_int')
        .asFunction();
    func(
        thisCpp,
        topLeft == null ? ffi.nullptr : topLeft.thisCpp,
        bottomRight == null ? ffi.nullptr : bottomRight.thisCpp,
        roles == null ? ffi.nullptr : roles.thisCpp);
  }

  void onDataChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QAbstractItemModel__onDataChanged_QModelIndex_QModelIndex_QList_int')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onDataChanged_callback);
    final callbackMethod = onDataChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onDataChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onDataChanged_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // endInsertColumns()

  endInsertColumns() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractItemModel__endInsertColumns')
        .asFunction();
    func(thisCpp);
  } // endInsertRows()

  endInsertRows() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractItemModel__endInsertRows')
        .asFunction();
    func(thisCpp);
  } // endMoveColumns()

  endMoveColumns() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractItemModel__endMoveColumns')
        .asFunction();
    func(thisCpp);
  } // endMoveRows()

  endMoveRows() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractItemModel__endMoveRows')
        .asFunction();
    func(thisCpp);
  } // endRemoveColumns()

  endRemoveColumns() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractItemModel__endRemoveColumns')
        .asFunction();
    func(thisCpp);
  } // endRemoveRows()

  endRemoveRows() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractItemModel__endRemoveRows')
        .asFunction();
    func(thisCpp);
  } // endResetModel()

  endResetModel() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractItemModel__endResetModel')
        .asFunction();
    func(thisCpp);
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::event(QEvent * event)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
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
  } // fetchMore(const QModelIndex & parent)

  fetchMore(QModelIndex parent) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5798))
        .asFunction();
    func(thisCpp, parent == null ? ffi.nullptr : parent.thisCpp);
  }

  static void fetchMore_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> parent) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::fetchMore(const QModelIndex & parent)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.fetchMore(QModelIndex.fromCppPointer(parent));
  } // hasChildren(const QModelIndex & parent) const

  bool hasChildren({required QModelIndex parent}) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5799))
        .asFunction();
    return func(thisCpp, parent == null ? ffi.nullptr : parent.thisCpp) != 0;
  }

  static int hasChildren_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> parent) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::hasChildren(const QModelIndex & parent) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.hasChildren(parent: QModelIndex.fromCppPointer(parent));
    return result ? 1 : 0;
  } // hasIndex(int row, int column, const QModelIndex & parent) const

  bool hasIndex(int row, int column, {required QModelIndex parent}) {
    final bool_Func_voidstar_int_int_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    bool_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>>(
            'c_QAbstractItemModel__hasIndex_int_int_QModelIndex')
        .asFunction();
    return func(thisCpp, row, column,
            parent == null ? ffi.nullptr : parent.thisCpp) !=
        0;
  } // headerData(int section, Qt::Orientation orientation, int role) const

  QVariant headerData(int section, int orientation,
      {int role = Qt_ItemDataRole.DisplayRole}) {
    final voidstar_Func_voidstar_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            cFunctionSymbolName(5801))
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, section, orientation, role);
    return QVariant.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> headerData_calledFromC(
      ffi.Pointer<void> thisCpp, int section, int orientation, int role) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::headerData(int section, Qt::Orientation orientation, int role) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.headerData(section, orientation, role: role);
    return result.thisCpp;
  } // headerDataChanged(Qt::Orientation orientation, int first, int last)

  headerDataChanged(int orientation, int first, int last) {
    final void_Func_voidstar_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QAbstractItemModel__headerDataChanged_Orientation_int_int')
        .asFunction();
    func(thisCpp, orientation, first, last);
  }

  void onHeaderDataChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QAbstractItemModel__onHeaderDataChanged_Orientation_int_int')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onHeaderDataChanged_callback);
    final callbackMethod = onHeaderDataChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onHeaderDataChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onHeaderDataChanged_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // index(int row, int column, const QModelIndex & parent) const

  QModelIndex index(int row, int column, {required QModelIndex parent}) {
    final voidstar_Func_voidstar_int_int_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>>(
            cFunctionSymbolName(5803))
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp, row, column, parent == null ? ffi.nullptr : parent.thisCpp);
    return QModelIndex.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> index_calledFromC(ffi.Pointer<void> thisCpp, int row,
      int column, ffi.Pointer<void> parent) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::index(int row, int column, const QModelIndex & parent) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.index(row, column,
        parent: QModelIndex.fromCppPointer(parent));
    return result.thisCpp;
  } // insertColumns(int column, int count, const QModelIndex & parent)

  bool insertColumns(int column, int count, {required QModelIndex parent}) {
    final bool_Func_voidstar_int_int_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    bool_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>>(
            cFunctionSymbolName(5806))
        .asFunction();
    return func(thisCpp, column, count,
            parent == null ? ffi.nullptr : parent.thisCpp) !=
        0;
  }

  static int insertColumns_calledFromC(ffi.Pointer<void> thisCpp, int column,
      int count, ffi.Pointer<void> parent) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::insertColumns(int column, int count, const QModelIndex & parent)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.insertColumns(column, count,
        parent: QModelIndex.fromCppPointer(parent));
    return result ? 1 : 0;
  } // insertRows(int row, int count, const QModelIndex & parent)

  bool insertRows(int row, int count, {required QModelIndex parent}) {
    final bool_Func_voidstar_int_int_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    bool_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>>(
            cFunctionSymbolName(5808))
        .asFunction();
    return func(thisCpp, row, count,
            parent == null ? ffi.nullptr : parent.thisCpp) !=
        0;
  }

  static int insertRows_calledFromC(
      ffi.Pointer<void> thisCpp, int row, int count, ffi.Pointer<void> parent) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::insertRows(int row, int count, const QModelIndex & parent)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.insertRows(row, count,
        parent: QModelIndex.fromCppPointer(parent));
    return result ? 1 : 0;
  } // layoutAboutToBeChanged()

  layoutAboutToBeChanged() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractItemModel__layoutAboutToBeChanged')
        .asFunction();
    func(thisCpp);
  }

  void onLayoutAboutToBeChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QAbstractItemModel__onLayoutAboutToBeChanged')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onLayoutAboutToBeChanged_callback);
    final callbackMethod = onLayoutAboutToBeChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onLayoutAboutToBeChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    final signalHandlers = dartInstance
            .signalHandlerersBySignal[onLayoutAboutToBeChanged_callback] ??
        [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // layoutChanged()

  layoutChanged() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractItemModel__layoutChanged')
        .asFunction();
    func(thisCpp);
  }

  void onLayoutChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QAbstractItemModel__onLayoutChanged')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onLayoutChanged_callback);
    final callbackMethod = onLayoutChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onLayoutChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onLayoutChanged_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // mimeTypes() const

  QList mimeTypes() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            cFunctionSymbolName(5816))
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QList<QString>.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> mimeTypes_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::mimeTypes() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.mimeTypes();
    return result.thisCpp;
  } // moveColumn(const QModelIndex & sourceParent, int sourceColumn, const QModelIndex & destinationParent, int destinationChild)

  bool moveColumn(QModelIndex sourceParent, int sourceColumn,
      QModelIndex destinationParent, int destinationChild) {
    final bool_Func_voidstar_voidstar_int_voidstar_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    bool_Func_voidstar_voidstar_ffi_Int32_voidstar_ffi_Int32_FFI>>(
            'c_QAbstractItemModel__moveColumn_QModelIndex_int_QModelIndex_int')
        .asFunction();
    return func(
            thisCpp,
            sourceParent == null ? ffi.nullptr : sourceParent.thisCpp,
            sourceColumn,
            destinationParent == null ? ffi.nullptr : destinationParent.thisCpp,
            destinationChild) !=
        0;
  } // moveColumns(const QModelIndex & sourceParent, int sourceColumn, int count, const QModelIndex & destinationParent, int destinationChild)

  bool moveColumns(QModelIndex sourceParent, int sourceColumn, int count,
      QModelIndex destinationParent, int destinationChild) {
    final bool_Func_voidstar_voidstar_int_int_voidstar_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    bool_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(5818))
        .asFunction();
    return func(
            thisCpp,
            sourceParent == null ? ffi.nullptr : sourceParent.thisCpp,
            sourceColumn,
            count,
            destinationParent == null ? ffi.nullptr : destinationParent.thisCpp,
            destinationChild) !=
        0;
  }

  static int moveColumns_calledFromC(
      ffi.Pointer<void> thisCpp,
      ffi.Pointer<void> sourceParent,
      int sourceColumn,
      int count,
      ffi.Pointer<void> destinationParent,
      int destinationChild) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::moveColumns(const QModelIndex & sourceParent, int sourceColumn, int count, const QModelIndex & destinationParent, int destinationChild)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.moveColumns(
        QModelIndex.fromCppPointer(sourceParent),
        sourceColumn,
        count,
        QModelIndex.fromCppPointer(destinationParent),
        destinationChild);
    return result ? 1 : 0;
  } // moveRow(const QModelIndex & sourceParent, int sourceRow, const QModelIndex & destinationParent, int destinationChild)

  bool moveRow(QModelIndex sourceParent, int sourceRow,
      QModelIndex destinationParent, int destinationChild) {
    final bool_Func_voidstar_voidstar_int_voidstar_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    bool_Func_voidstar_voidstar_ffi_Int32_voidstar_ffi_Int32_FFI>>(
            'c_QAbstractItemModel__moveRow_QModelIndex_int_QModelIndex_int')
        .asFunction();
    return func(
            thisCpp,
            sourceParent == null ? ffi.nullptr : sourceParent.thisCpp,
            sourceRow,
            destinationParent == null ? ffi.nullptr : destinationParent.thisCpp,
            destinationChild) !=
        0;
  } // moveRows(const QModelIndex & sourceParent, int sourceRow, int count, const QModelIndex & destinationParent, int destinationChild)

  bool moveRows(QModelIndex sourceParent, int sourceRow, int count,
      QModelIndex destinationParent, int destinationChild) {
    final bool_Func_voidstar_voidstar_int_int_voidstar_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    bool_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(5820))
        .asFunction();
    return func(
            thisCpp,
            sourceParent == null ? ffi.nullptr : sourceParent.thisCpp,
            sourceRow,
            count,
            destinationParent == null ? ffi.nullptr : destinationParent.thisCpp,
            destinationChild) !=
        0;
  }

  static int moveRows_calledFromC(
      ffi.Pointer<void> thisCpp,
      ffi.Pointer<void> sourceParent,
      int sourceRow,
      int count,
      ffi.Pointer<void> destinationParent,
      int destinationChild) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::moveRows(const QModelIndex & sourceParent, int sourceRow, int count, const QModelIndex & destinationParent, int destinationChild)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.moveRows(
        QModelIndex.fromCppPointer(sourceParent),
        sourceRow,
        count,
        QModelIndex.fromCppPointer(destinationParent),
        destinationChild);
    return result ? 1 : 0;
  } // parent(const QModelIndex & child) const

  QModelIndex parentIndex(QModelIndex child) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5822))
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, child == null ? ffi.nullptr : child.thisCpp);
    return QModelIndex.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> parentIndex_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> child) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::parent(const QModelIndex & child) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.parentIndex(QModelIndex.fromCppPointer(child));
    return result.thisCpp;
  } // persistentIndexList() const

  QList persistentIndexList() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAbstractItemModel__persistentIndexList')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QList<QModelIndex>.fromCppPointer(result, true);
  } // removeColumn(int column, const QModelIndex & parent)

  bool removeColumn(int column, {required QModelIndex parent}) {
    final bool_Func_voidstar_int_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_ffi_Int32_voidstar_FFI>>(
            'c_QAbstractItemModel__removeColumn_int_QModelIndex')
        .asFunction();
    return func(
            thisCpp, column, parent == null ? ffi.nullptr : parent.thisCpp) !=
        0;
  } // removeColumns(int column, int count, const QModelIndex & parent)

  bool removeColumns(int column, int count, {required QModelIndex parent}) {
    final bool_Func_voidstar_int_int_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    bool_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>>(
            cFunctionSymbolName(5827))
        .asFunction();
    return func(thisCpp, column, count,
            parent == null ? ffi.nullptr : parent.thisCpp) !=
        0;
  }

  static int removeColumns_calledFromC(ffi.Pointer<void> thisCpp, int column,
      int count, ffi.Pointer<void> parent) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::removeColumns(int column, int count, const QModelIndex & parent)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.removeColumns(column, count,
        parent: QModelIndex.fromCppPointer(parent));
    return result ? 1 : 0;
  } // removeRow(int row, const QModelIndex & parent)

  bool removeRow(int row, {required QModelIndex parent}) {
    final bool_Func_voidstar_int_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_ffi_Int32_voidstar_FFI>>(
            'c_QAbstractItemModel__removeRow_int_QModelIndex')
        .asFunction();
    return func(thisCpp, row, parent == null ? ffi.nullptr : parent.thisCpp) !=
        0;
  } // removeRows(int row, int count, const QModelIndex & parent)

  bool removeRows(int row, int count, {required QModelIndex parent}) {
    final bool_Func_voidstar_int_int_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    bool_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>>(
            cFunctionSymbolName(5830))
        .asFunction();
    return func(thisCpp, row, count,
            parent == null ? ffi.nullptr : parent.thisCpp) !=
        0;
  }

  static int removeRows_calledFromC(
      ffi.Pointer<void> thisCpp, int row, int count, ffi.Pointer<void> parent) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::removeRows(int row, int count, const QModelIndex & parent)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.removeRows(row, count,
        parent: QModelIndex.fromCppPointer(parent));
    return result ? 1 : 0;
  } // resetInternalData()

  resetInternalData() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            cFunctionSymbolName(5831))
        .asFunction();
    func(thisCpp);
  }

  static void resetInternalData_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::resetInternalData()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.resetInternalData();
  } // revert()

  revert() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            cFunctionSymbolName(5832))
        .asFunction();
    func(thisCpp);
  }

  static void revert_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::revert()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.revert();
  } // rowCount(const QModelIndex & parent) const

  int rowCount({required QModelIndex parent}) {
    final int_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5833))
        .asFunction();
    return func(thisCpp, parent == null ? ffi.nullptr : parent.thisCpp);
  }

  static int rowCount_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> parent) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::rowCount(const QModelIndex & parent) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.rowCount(parent: QModelIndex.fromCppPointer(parent));
    return result;
  } // setData(const QModelIndex & index, const QVariant & value, int role)

  bool setData(QModelIndex index, QVariant value,
      {int role = Qt_ItemDataRole.EditRole}) {
    final bool_Func_voidstar_voidstar_voidstar_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    bool_Func_voidstar_voidstar_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(5836))
        .asFunction();
    return func(thisCpp, index == null ? ffi.nullptr : index.thisCpp,
            value == null ? ffi.nullptr : value.thisCpp, role) !=
        0;
  }

  static int setData_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void> index, ffi.Pointer<void> value, int role) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::setData(const QModelIndex & index, const QVariant & value, int role)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.setData(
        QModelIndex.fromCppPointer(index), QVariant.fromCppPointer(value),
        role: role);
    return result ? 1 : 0;
  } // setHeaderData(int section, Qt::Orientation orientation, const QVariant & value, int role)

  bool setHeaderData(int section, int orientation, QVariant value,
      {int role = Qt_ItemDataRole.EditRole}) {
    final bool_Func_voidstar_int_int_voidstar_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    bool_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(5837))
        .asFunction();
    return func(thisCpp, section, orientation,
            value == null ? ffi.nullptr : value.thisCpp, role) !=
        0;
  }

  static int setHeaderData_calledFromC(ffi.Pointer<void> thisCpp, int section,
      int orientation, ffi.Pointer<void> value, int role) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::setHeaderData(int section, Qt::Orientation orientation, const QVariant & value, int role)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.setHeaderData(
        section, orientation, QVariant.fromCppPointer(value),
        role: role);
    return result ? 1 : 0;
  } // sibling(int row, int column, const QModelIndex & idx) const

  QModelIndex sibling(int row, int column, QModelIndex idx) {
    final voidstar_Func_voidstar_int_int_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>>(
            cFunctionSymbolName(5840))
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, row, column, idx == null ? ffi.nullptr : idx.thisCpp);
    return QModelIndex.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> sibling_calledFromC(
      ffi.Pointer<void> thisCpp, int row, int column, ffi.Pointer<void> idx) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::sibling(int row, int column, const QModelIndex & idx) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.sibling(row, column, QModelIndex.fromCppPointer(idx));
    return result.thisCpp;
  } // sort(int column, Qt::SortOrder order)

  sort(int column, {int order = Qt_SortOrder.AscendingOrder}) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            cFunctionSymbolName(5842))
        .asFunction();
    func(thisCpp, column, order);
  }

  static void sort_calledFromC(
      ffi.Pointer<void> thisCpp, int column, int order) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::sort(int column, Qt::SortOrder order)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.sort(column, order: order);
  } // span(const QModelIndex & index) const

  QSize span(QModelIndex index) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5843))
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, index == null ? ffi.nullptr : index.thisCpp);
    return QSize.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> span_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::span(const QModelIndex & index) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.span(QModelIndex.fromCppPointer(index));
    return result.thisCpp;
  } // submit()

  bool submit() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            cFunctionSymbolName(5845))
        .asFunction();
    return func(thisCpp) != 0;
  }

  static int submit_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractItemModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractItemModel::submit()! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.submit();
    return result ? 1 : 0;
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QAbstractItemModel__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractItemModel__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 5771:
        return "c_QAbstractItemModel__buddy_QModelIndex";
      case 5772:
        return "c_QAbstractItemModel__canFetchMore_QModelIndex";
      case 5777:
        return "c_QAbstractItemModel__clearItemData_QModelIndex";
      case 5778:
        return "c_QAbstractItemModel__columnCount_QModelIndex";
      case 946:
        return "c_QAbstractItemModel__customEvent_QEvent";
      case 5780:
        return "c_QAbstractItemModel__data_QModelIndex_int";
      case 956:
        return "c_QAbstractItemModel__event_QEvent";
      case 957:
        return "c_QAbstractItemModel__eventFilter_QObject_QEvent";
      case 5798:
        return "c_QAbstractItemModel__fetchMore_QModelIndex";
      case 5799:
        return "c_QAbstractItemModel__hasChildren_QModelIndex";
      case 5801:
        return "c_QAbstractItemModel__headerData_int_Orientation_int";
      case 5803:
        return "c_QAbstractItemModel__index_int_int_QModelIndex";
      case 5806:
        return "c_QAbstractItemModel__insertColumns_int_int_QModelIndex";
      case 5808:
        return "c_QAbstractItemModel__insertRows_int_int_QModelIndex";
      case 5816:
        return "c_QAbstractItemModel__mimeTypes";
      case 5818:
        return "c_QAbstractItemModel__moveColumns_QModelIndex_int_int_QModelIndex_int";
      case 5820:
        return "c_QAbstractItemModel__moveRows_QModelIndex_int_int_QModelIndex_int";
      case 5822:
        return "c_QAbstractItemModel__parentIndex_QModelIndex";
      case 5827:
        return "c_QAbstractItemModel__removeColumns_int_int_QModelIndex";
      case 5830:
        return "c_QAbstractItemModel__removeRows_int_int_QModelIndex";
      case 5831:
        return "c_QAbstractItemModel__resetInternalData";
      case 5832:
        return "c_QAbstractItemModel__revert";
      case 5833:
        return "c_QAbstractItemModel__rowCount_QModelIndex";
      case 5836:
        return "c_QAbstractItemModel__setData_QModelIndex_QVariant_int";
      case 5837:
        return "c_QAbstractItemModel__setHeaderData_int_Orientation_QVariant_int";
      case 5840:
        return "c_QAbstractItemModel__sibling_int_int_QModelIndex";
      case 5842:
        return "c_QAbstractItemModel__sort_int_SortOrder";
      case 5843:
        return "c_QAbstractItemModel__span_QModelIndex";
      case 5845:
        return "c_QAbstractItemModel__submit";
    }
    return super.cFunctionSymbolName(methodId);
  }

  static String methodNameFromId(int methodId) {
    switch (methodId) {
      case 5771:
        return "buddy";
      case 5772:
        return "canFetchMore";
      case 5777:
        return "clearItemData";
      case 5778:
        return "columnCount";
      case 946:
        return "customEvent";
      case 5780:
        return "data";
      case 956:
        return "event";
      case 957:
        return "eventFilter";
      case 5798:
        return "fetchMore";
      case 5799:
        return "hasChildren";
      case 5801:
        return "headerData";
      case 5803:
        return "index";
      case 5806:
        return "insertColumns";
      case 5808:
        return "insertRows";
      case 5816:
        return "mimeTypes";
      case 5818:
        return "moveColumns";
      case 5820:
        return "moveRows";
      case 5822:
        return "parentIndex";
      case 5827:
        return "removeColumns";
      case 5830:
        return "removeRows";
      case 5831:
        return "resetInternalData";
      case 5832:
        return "revert";
      case 5833:
        return "rowCount";
      case 5836:
        return "setData";
      case 5837:
        return "setHeaderData";
      case 5840:
        return "sibling";
      case 5842:
        return "sort";
      case 5843:
        return "span";
      case 5845:
        return "submit";
    }
    throw Error();
  }

  void registerCallbacks() {
    assert(thisCpp != null);
    final RegisterMethodIsReimplementedCallback registerCallback = _dylib
        .lookup<ffi.NativeFunction<RegisterMethodIsReimplementedCallback_FFI>>(
            'c_QAbstractItemModel__registerVirtualMethodCallback')
        .asFunction();
    final callback5771 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            QAbstractItemModel.buddy_calledFromC);
    registerCallback(thisCpp, callback5771, 5771);
    const callbackExcept5772 = 0;
    final callback5772 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QAbstractItemModel.canFetchMore_calledFromC, callbackExcept5772);
    registerCallback(thisCpp, callback5772, 5772);
    const callbackExcept5777 = 0;
    final callback5777 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QAbstractItemModel.clearItemData_calledFromC, callbackExcept5777);
    registerCallback(thisCpp, callback5777, 5777);
    const callbackExcept5778 = 0;
    final callback5778 =
        ffi.Pointer.fromFunction<int_Func_voidstar_voidstar_FFI>(
            QAbstractItemModel.columnCount_calledFromC, callbackExcept5778);
    registerCallback(thisCpp, callback5778, 5778);
    final callback946 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QObject.customEvent_calledFromC);
    registerCallback(thisCpp, callback946, 946);
    final callback5780 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_ffi_Int32_FFI>(
            QAbstractItemModel.data_calledFromC);
    registerCallback(thisCpp, callback5780, 5780);
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
    final callback5798 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractItemModel.fetchMore_calledFromC);
    registerCallback(thisCpp, callback5798, 5798);
    const callbackExcept5799 = 0;
    final callback5799 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QAbstractItemModel.hasChildren_calledFromC, callbackExcept5799);
    registerCallback(thisCpp, callback5799, 5799);
    final callback5801 = ffi.Pointer.fromFunction<
            voidstar_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_FFI>(
        QAbstractItemModel.headerData_calledFromC);
    registerCallback(thisCpp, callback5801, 5801);
    final callback5803 = ffi.Pointer.fromFunction<
            voidstar_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>(
        QAbstractItemModel.index_calledFromC);
    registerCallback(thisCpp, callback5803, 5803);
    const callbackExcept5806 = 0;
    final callback5806 = ffi.Pointer.fromFunction<
            bool_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>(
        QAbstractItemModel.insertColumns_calledFromC, callbackExcept5806);
    registerCallback(thisCpp, callback5806, 5806);
    const callbackExcept5808 = 0;
    final callback5808 = ffi.Pointer.fromFunction<
            bool_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>(
        QAbstractItemModel.insertRows_calledFromC, callbackExcept5808);
    registerCallback(thisCpp, callback5808, 5808);
    final callback5816 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QAbstractItemModel.mimeTypes_calledFromC);
    registerCallback(thisCpp, callback5816, 5816);
    const callbackExcept5818 = 0;
    final callback5818 = ffi.Pointer.fromFunction<
            bool_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_voidstar_ffi_Int32_FFI>(
        QAbstractItemModel.moveColumns_calledFromC, callbackExcept5818);
    registerCallback(thisCpp, callback5818, 5818);
    const callbackExcept5820 = 0;
    final callback5820 = ffi.Pointer.fromFunction<
            bool_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_voidstar_ffi_Int32_FFI>(
        QAbstractItemModel.moveRows_calledFromC, callbackExcept5820);
    registerCallback(thisCpp, callback5820, 5820);
    final callback5822 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            QAbstractItemModel.parentIndex_calledFromC);
    registerCallback(thisCpp, callback5822, 5822);
    const callbackExcept5827 = 0;
    final callback5827 = ffi.Pointer.fromFunction<
            bool_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>(
        QAbstractItemModel.removeColumns_calledFromC, callbackExcept5827);
    registerCallback(thisCpp, callback5827, 5827);
    const callbackExcept5830 = 0;
    final callback5830 = ffi.Pointer.fromFunction<
            bool_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>(
        QAbstractItemModel.removeRows_calledFromC, callbackExcept5830);
    registerCallback(thisCpp, callback5830, 5830);
    final callback5831 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QAbstractItemModel.resetInternalData_calledFromC);
    registerCallback(thisCpp, callback5831, 5831);
    final callback5832 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QAbstractItemModel.revert_calledFromC);
    registerCallback(thisCpp, callback5832, 5832);
    const callbackExcept5833 = 0;
    final callback5833 =
        ffi.Pointer.fromFunction<int_Func_voidstar_voidstar_FFI>(
            QAbstractItemModel.rowCount_calledFromC, callbackExcept5833);
    registerCallback(thisCpp, callback5833, 5833);
    const callbackExcept5836 = 0;
    final callback5836 = ffi.Pointer.fromFunction<
            bool_Func_voidstar_voidstar_voidstar_ffi_Int32_FFI>(
        QAbstractItemModel.setData_calledFromC, callbackExcept5836);
    registerCallback(thisCpp, callback5836, 5836);
    const callbackExcept5837 = 0;
    final callback5837 = ffi.Pointer.fromFunction<
            bool_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_ffi_Int32_FFI>(
        QAbstractItemModel.setHeaderData_calledFromC, callbackExcept5837);
    registerCallback(thisCpp, callback5837, 5837);
    final callback5840 = ffi.Pointer.fromFunction<
            voidstar_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>(
        QAbstractItemModel.sibling_calledFromC);
    registerCallback(thisCpp, callback5840, 5840);
    final callback5842 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>(
            QAbstractItemModel.sort_calledFromC);
    registerCallback(thisCpp, callback5842, 5842);
    final callback5843 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            QAbstractItemModel.span_calledFromC);
    registerCallback(thisCpp, callback5843, 5843);
    const callbackExcept5845 = 0;
    final callback5845 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        QAbstractItemModel.submit_calledFromC, callbackExcept5845);
    registerCallback(thisCpp, callback5845, 5845);
  }
}
