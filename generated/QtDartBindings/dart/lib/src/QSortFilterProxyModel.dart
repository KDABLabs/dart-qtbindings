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

class QSortFilterProxyModel extends QAbstractProxyModel {
  QSortFilterProxyModel.fromCppPointer(var cppPointer,
      [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QSortFilterProxyModel.init() : super.init() {}
  factory QSortFilterProxyModel.fromCache(var cppPointer,
      [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QSortFilterProxyModel;
    }
    return QSortFilterProxyModel.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QSortFilterProxyModel_Finalizer";
  } //QSortFilterProxyModel(QObject * parent)

  QSortFilterProxyModel({required QObject? parent}) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QSortFilterProxyModel__constructor_QObject')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } // autoAcceptChildRows() const
  bool autoAcceptChildRows() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QSortFilterProxyModel__autoAcceptChildRows')
        .asFunction();
    return func(thisCpp) != 0;
  } // autoAcceptChildRowsChanged(bool autoAcceptChildRows)

  autoAcceptChildRowsChanged(bool autoAcceptChildRows) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QSortFilterProxyModel__autoAcceptChildRowsChanged_bool')
        .asFunction();
    func(thisCpp, autoAcceptChildRows ? 1 : 0);
  }

  void onAutoAcceptChildRowsChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QSortFilterProxyModel__onAutoAcceptChildRowsChanged_bool')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onAutoAcceptChildRowsChanged_callback);
    final callbackMethod = onAutoAcceptChildRowsChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onAutoAcceptChildRowsChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    final signalHandlers = dartInstance
            .signalHandlerersBySignal[onAutoAcceptChildRowsChanged_callback] ??
        [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static ffi.Pointer<void> buddy_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::buddy(const QModelIndex & index) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.buddy(QModelIndex.fromCppPointer(index));
    return result.thisCpp;
  }

  static int canFetchMore_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> parent) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::canFetchMore(const QModelIndex & parent) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.canFetchMore(QModelIndex.fromCppPointer(parent));
    return result ? 1 : 0;
  }

  static int clearItemData_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::clearItemData(const QModelIndex & index)! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.clearItemData(QModelIndex.fromCppPointer(index));
    return result ? 1 : 0;
  }

  static int columnCount_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> parent) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::columnCount(const QModelIndex & parent) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.columnCount(parent: QModelIndex.fromCppPointer(parent));
    return result;
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static ffi.Pointer<void> data_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index, int role) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::data(const QModelIndex & index, int role) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.data(QModelIndex.fromCppPointer(index), role: role);
    return result.thisCpp;
  } // dynamicSortFilter() const

  bool dynamicSortFilter() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QSortFilterProxyModel__dynamicSortFilter')
        .asFunction();
    return func(thisCpp) != 0;
  } // dynamicSortFilterChanged(bool dynamicSortFilter)

  dynamicSortFilterChanged(bool dynamicSortFilter) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QSortFilterProxyModel__dynamicSortFilterChanged_bool')
        .asFunction();
    func(thisCpp, dynamicSortFilter ? 1 : 0);
  }

  void onDynamicSortFilterChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QSortFilterProxyModel__onDynamicSortFilterChanged_bool')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onDynamicSortFilterChanged_callback);
    final callbackMethod = onDynamicSortFilterChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onDynamicSortFilterChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    final signalHandlers = dartInstance
            .signalHandlerersBySignal[onDynamicSortFilterChanged_callback] ??
        [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::event(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.event((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
    return result ? 1 : 0;
  }

  static int eventFilter_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void>? watched, ffi.Pointer<void>? event) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
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

  static void fetchMore_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> parent) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::fetchMore(const QModelIndex & parent)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.fetchMore(QModelIndex.fromCppPointer(parent));
  } // filterAcceptsColumn(int source_column, const QModelIndex & source_parent) const

  bool filterAcceptsColumn(int source_column, QModelIndex source_parent) {
    final bool_Func_voidstar_int_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_ffi_Int32_voidstar_FFI>>(
            cFunctionSymbolName(5955))
        .asFunction();
    return func(thisCpp, source_column,
            source_parent == null ? ffi.nullptr : source_parent.thisCpp) !=
        0;
  }

  static int filterAcceptsColumn_calledFromC(ffi.Pointer<void> thisCpp,
      int source_column, ffi.Pointer<void> source_parent) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::filterAcceptsColumn(int source_column, const QModelIndex & source_parent) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.filterAcceptsColumn(
        source_column, QModelIndex.fromCppPointer(source_parent));
    return result ? 1 : 0;
  } // filterAcceptsRow(int source_row, const QModelIndex & source_parent) const

  bool filterAcceptsRow(int source_row, QModelIndex source_parent) {
    final bool_Func_voidstar_int_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_ffi_Int32_voidstar_FFI>>(
            cFunctionSymbolName(5956))
        .asFunction();
    return func(thisCpp, source_row,
            source_parent == null ? ffi.nullptr : source_parent.thisCpp) !=
        0;
  }

  static int filterAcceptsRow_calledFromC(ffi.Pointer<void> thisCpp,
      int source_row, ffi.Pointer<void> source_parent) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::filterAcceptsRow(int source_row, const QModelIndex & source_parent) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.filterAcceptsRow(
        source_row, QModelIndex.fromCppPointer(source_parent));
    return result ? 1 : 0;
  } // filterKeyColumn() const

  int filterKeyColumn() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QSortFilterProxyModel__filterKeyColumn')
        .asFunction();
    return func(thisCpp);
  } // filterRole() const

  int filterRole() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QSortFilterProxyModel__filterRole')
        .asFunction();
    return func(thisCpp);
  } // filterRoleChanged(int filterRole)

  filterRoleChanged(int filterRole) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QSortFilterProxyModel__filterRoleChanged_int')
        .asFunction();
    func(thisCpp, filterRole);
  }

  void onFilterRoleChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QSortFilterProxyModel__onFilterRoleChanged_int')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onFilterRoleChanged_callback);
    final callbackMethod = onFilterRoleChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onFilterRoleChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onFilterRoleChanged_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static int hasChildren_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> parent) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::hasChildren(const QModelIndex & parent) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.hasChildren(parent: QModelIndex.fromCppPointer(parent));
    return result ? 1 : 0;
  }

  static ffi.Pointer<void> headerData_calledFromC(
      ffi.Pointer<void> thisCpp, int section, int orientation, int role) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::headerData(int section, Qt::Orientation orientation, int role) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.headerData(section, orientation, role: role);
    return result.thisCpp;
  }

  static ffi.Pointer<void> index_calledFromC(ffi.Pointer<void> thisCpp, int row,
      int column, ffi.Pointer<void> parent) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::index(int row, int column, const QModelIndex & parent) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.index(row, column,
        parent: QModelIndex.fromCppPointer(parent));
    return result.thisCpp;
  }

  static int insertColumns_calledFromC(ffi.Pointer<void> thisCpp, int column,
      int count, ffi.Pointer<void> parent) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::insertColumns(int column, int count, const QModelIndex & parent)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.insertColumns(column, count,
        parent: QModelIndex.fromCppPointer(parent));
    return result ? 1 : 0;
  }

  static int insertRows_calledFromC(
      ffi.Pointer<void> thisCpp, int row, int count, ffi.Pointer<void> parent) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::insertRows(int row, int count, const QModelIndex & parent)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.insertRows(row, count,
        parent: QModelIndex.fromCppPointer(parent));
    return result ? 1 : 0;
  } // invalidate()

  invalidate() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QSortFilterProxyModel__invalidate')
        .asFunction();
    func(thisCpp);
  } // invalidateColumnsFilter()

  invalidateColumnsFilter() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QSortFilterProxyModel__invalidateColumnsFilter')
        .asFunction();
    func(thisCpp);
  } // invalidateFilter()

  invalidateFilter() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QSortFilterProxyModel__invalidateFilter')
        .asFunction();
    func(thisCpp);
  } // invalidateRowsFilter()

  invalidateRowsFilter() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QSortFilterProxyModel__invalidateRowsFilter')
        .asFunction();
    func(thisCpp);
  } // isRecursiveFilteringEnabled() const

  bool isRecursiveFilteringEnabled() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QSortFilterProxyModel__isRecursiveFilteringEnabled')
        .asFunction();
    return func(thisCpp) != 0;
  } // isSortLocaleAware() const

  bool isSortLocaleAware() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QSortFilterProxyModel__isSortLocaleAware')
        .asFunction();
    return func(thisCpp) != 0;
  } // lessThan(const QModelIndex & source_left, const QModelIndex & source_right) const

  bool lessThan(QModelIndex source_left, QModelIndex source_right) {
    final bool_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5966))
        .asFunction();
    return func(
            thisCpp,
            source_left == null ? ffi.nullptr : source_left.thisCpp,
            source_right == null ? ffi.nullptr : source_right.thisCpp) !=
        0;
  }

  static int lessThan_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void> source_left, ffi.Pointer<void> source_right) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::lessThan(const QModelIndex & source_left, const QModelIndex & source_right) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.lessThan(
        QModelIndex.fromCppPointer(source_left),
        QModelIndex.fromCppPointer(source_right));
    return result ? 1 : 0;
  }

  static ffi.Pointer<void> mapFromSource_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> sourceIndex) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::mapFromSource(const QModelIndex & sourceIndex) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.mapFromSource(QModelIndex.fromCppPointer(sourceIndex));
    return result.thisCpp;
  }

  static ffi.Pointer<void> mapSelectionFromSource_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> sourceSelection) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::mapSelectionFromSource(const QItemSelection & sourceSelection) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance
        .mapSelectionFromSource(QItemSelection.fromCppPointer(sourceSelection));
    return result.thisCpp;
  }

  static ffi.Pointer<void> mapSelectionToSource_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> proxySelection) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::mapSelectionToSource(const QItemSelection & proxySelection) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance
        .mapSelectionToSource(QItemSelection.fromCppPointer(proxySelection));
    return result.thisCpp;
  }

  static ffi.Pointer<void> mapToSource_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> proxyIndex) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::mapToSource(const QModelIndex & proxyIndex) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.mapToSource(QModelIndex.fromCppPointer(proxyIndex));
    return result.thisCpp;
  }

  static ffi.Pointer<void> mimeTypes_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::mimeTypes() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.mimeTypes();
    return result.thisCpp;
  }

  static int moveColumns_calledFromC(
      ffi.Pointer<void> thisCpp,
      ffi.Pointer<void> sourceParent,
      int sourceColumn,
      int count,
      ffi.Pointer<void> destinationParent,
      int destinationChild) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::moveColumns(const QModelIndex & sourceParent, int sourceColumn, int count, const QModelIndex & destinationParent, int destinationChild)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.moveColumns(
        QModelIndex.fromCppPointer(sourceParent),
        sourceColumn,
        count,
        QModelIndex.fromCppPointer(destinationParent),
        destinationChild);
    return result ? 1 : 0;
  }

  static int moveRows_calledFromC(
      ffi.Pointer<void> thisCpp,
      ffi.Pointer<void> sourceParent,
      int sourceRow,
      int count,
      ffi.Pointer<void> destinationParent,
      int destinationChild) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::moveRows(const QModelIndex & sourceParent, int sourceRow, int count, const QModelIndex & destinationParent, int destinationChild)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.moveRows(
        QModelIndex.fromCppPointer(sourceParent),
        sourceRow,
        count,
        QModelIndex.fromCppPointer(destinationParent),
        destinationChild);
    return result ? 1 : 0;
  }

  static ffi.Pointer<void> parentIndex_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> child) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::parent(const QModelIndex & child) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.parentIndex(QModelIndex.fromCppPointer(child));
    return result.thisCpp;
  } // recursiveFilteringEnabledChanged(bool recursiveFilteringEnabled)

  recursiveFilteringEnabledChanged(bool recursiveFilteringEnabled) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QSortFilterProxyModel__recursiveFilteringEnabledChanged_bool')
        .asFunction();
    func(thisCpp, recursiveFilteringEnabled ? 1 : 0);
  }

  void onRecursiveFilteringEnabledChanged(Function callback,
      {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QSortFilterProxyModel__onRecursiveFilteringEnabledChanged_bool')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onRecursiveFilteringEnabledChanged_callback);
    final callbackMethod = onRecursiveFilteringEnabledChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onRecursiveFilteringEnabledChanged_callback(
      ffi.Pointer<void> thisCpp) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    final signalHandlers = dartInstance.signalHandlerersBySignal[
            onRecursiveFilteringEnabledChanged_callback] ??
        [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static int removeColumns_calledFromC(ffi.Pointer<void> thisCpp, int column,
      int count, ffi.Pointer<void> parent) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::removeColumns(int column, int count, const QModelIndex & parent)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.removeColumns(column, count,
        parent: QModelIndex.fromCppPointer(parent));
    return result ? 1 : 0;
  }

  static int removeRows_calledFromC(
      ffi.Pointer<void> thisCpp, int row, int count, ffi.Pointer<void> parent) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::removeRows(int row, int count, const QModelIndex & parent)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.removeRows(row, count,
        parent: QModelIndex.fromCppPointer(parent));
    return result ? 1 : 0;
  }

  static void resetInternalData_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::resetInternalData()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.resetInternalData();
  }

  static void revert_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::revert()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.revert();
  }

  static int rowCount_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> parent) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::rowCount(const QModelIndex & parent) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.rowCount(parent: QModelIndex.fromCppPointer(parent));
    return result;
  } // setAutoAcceptChildRows(bool accept)

  setAutoAcceptChildRows(bool accept) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QSortFilterProxyModel__setAutoAcceptChildRows_bool')
        .asFunction();
    func(thisCpp, accept ? 1 : 0);
  }

  static int setData_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void> index, ffi.Pointer<void> value, int role) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::setData(const QModelIndex & index, const QVariant & value, int role)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.setData(
        QModelIndex.fromCppPointer(index), QVariant.fromCppPointer(value),
        role: role);
    return result ? 1 : 0;
  } // setDynamicSortFilter(bool enable)

  setDynamicSortFilter(bool enable) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QSortFilterProxyModel__setDynamicSortFilter_bool')
        .asFunction();
    func(thisCpp, enable ? 1 : 0);
  } // setFilterFixedString(const QString & pattern)

  setFilterFixedString(String? pattern) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QSortFilterProxyModel__setFilterFixedString_QString')
        .asFunction();
    func(thisCpp, pattern?.toNativeUtf8() ?? ffi.nullptr);
  } // setFilterKeyColumn(int column)

  setFilterKeyColumn(int column) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QSortFilterProxyModel__setFilterKeyColumn_int')
        .asFunction();
    func(thisCpp, column);
  } // setFilterRegularExpression(const QString & pattern)

  setFilterRegularExpression(String? pattern) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QSortFilterProxyModel__setFilterRegularExpression_QString')
        .asFunction();
    func(thisCpp, pattern?.toNativeUtf8() ?? ffi.nullptr);
  } // setFilterRole(int role)

  setFilterRole(int role) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QSortFilterProxyModel__setFilterRole_int')
        .asFunction();
    func(thisCpp, role);
  } // setFilterWildcard(const QString & pattern)

  setFilterWildcard(String? pattern) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QSortFilterProxyModel__setFilterWildcard_QString')
        .asFunction();
    func(thisCpp, pattern?.toNativeUtf8() ?? ffi.nullptr);
  }

  static int setHeaderData_calledFromC(ffi.Pointer<void> thisCpp, int section,
      int orientation, ffi.Pointer<void> value, int role) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::setHeaderData(int section, Qt::Orientation orientation, const QVariant & value, int role)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.setHeaderData(
        section, orientation, QVariant.fromCppPointer(value),
        role: role);
    return result ? 1 : 0;
  } // setRecursiveFilteringEnabled(bool recursive)

  setRecursiveFilteringEnabled(bool recursive) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QSortFilterProxyModel__setRecursiveFilteringEnabled_bool')
        .asFunction();
    func(thisCpp, recursive ? 1 : 0);
  } // setSortLocaleAware(bool on)

  setSortLocaleAware(bool on) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QSortFilterProxyModel__setSortLocaleAware_bool')
        .asFunction();
    func(thisCpp, on ? 1 : 0);
  } // setSortRole(int role)

  setSortRole(int role) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QSortFilterProxyModel__setSortRole_int')
        .asFunction();
    func(thisCpp, role);
  }

  static void setSourceModel_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? sourceModel) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::setSourceModel(QAbstractItemModel * sourceModel)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setSourceModel(
        (sourceModel == null || sourceModel.address == 0)
            ? null
            : QAbstractItemModel.fromCppPointer(sourceModel));
  }

  static ffi.Pointer<void> sibling_calledFromC(
      ffi.Pointer<void> thisCpp, int row, int column, ffi.Pointer<void> idx) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::sibling(int row, int column, const QModelIndex & idx) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.sibling(row, column, QModelIndex.fromCppPointer(idx));
    return result.thisCpp;
  }

  static void sort_calledFromC(
      ffi.Pointer<void> thisCpp, int column, int order) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::sort(int column, Qt::SortOrder order)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.sort(column, order: order);
  } // sortColumn() const

  int sortColumn() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QSortFilterProxyModel__sortColumn')
        .asFunction();
    return func(thisCpp);
  } // sortLocaleAwareChanged(bool sortLocaleAware)

  sortLocaleAwareChanged(bool sortLocaleAware) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QSortFilterProxyModel__sortLocaleAwareChanged_bool')
        .asFunction();
    func(thisCpp, sortLocaleAware ? 1 : 0);
  }

  void onSortLocaleAwareChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QSortFilterProxyModel__onSortLocaleAwareChanged_bool')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onSortLocaleAwareChanged_callback);
    final callbackMethod = onSortLocaleAwareChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onSortLocaleAwareChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    final signalHandlers = dartInstance
            .signalHandlerersBySignal[onSortLocaleAwareChanged_callback] ??
        [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // sortOrder() const

  int sortOrder() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QSortFilterProxyModel__sortOrder')
        .asFunction();
    return func(thisCpp);
  } // sortRole() const

  int sortRole() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QSortFilterProxyModel__sortRole')
        .asFunction();
    return func(thisCpp);
  } // sortRoleChanged(int sortRole)

  sortRoleChanged(int sortRole) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QSortFilterProxyModel__sortRoleChanged_int')
        .asFunction();
    func(thisCpp, sortRole);
  }

  void onSortRoleChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QSortFilterProxyModel__onSortRoleChanged_int')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onSortRoleChanged_callback);
    final callbackMethod = onSortRoleChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onSortRoleChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onSortRoleChanged_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static ffi.Pointer<void> span_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::span(const QModelIndex & index) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.span(QModelIndex.fromCppPointer(index));
    return result.thisCpp;
  }

  static int submit_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address]
        as QSortFilterProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSortFilterProxyModel::submit()! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.submit();
    return result ? 1 : 0;
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QSortFilterProxyModel__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QSortFilterProxyModel__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 5771:
        return "c_QSortFilterProxyModel__buddy_QModelIndex";
      case 5772:
        return "c_QSortFilterProxyModel__canFetchMore_QModelIndex";
      case 5777:
        return "c_QSortFilterProxyModel__clearItemData_QModelIndex";
      case 5778:
        return "c_QSortFilterProxyModel__columnCount_QModelIndex";
      case 946:
        return "c_QSortFilterProxyModel__customEvent_QEvent";
      case 5780:
        return "c_QSortFilterProxyModel__data_QModelIndex_int";
      case 956:
        return "c_QSortFilterProxyModel__event_QEvent";
      case 957:
        return "c_QSortFilterProxyModel__eventFilter_QObject_QEvent";
      case 5798:
        return "c_QSortFilterProxyModel__fetchMore_QModelIndex";
      case 5955:
        return "c_QSortFilterProxyModel__filterAcceptsColumn_int_QModelIndex";
      case 5956:
        return "c_QSortFilterProxyModel__filterAcceptsRow_int_QModelIndex";
      case 5799:
        return "c_QSortFilterProxyModel__hasChildren_QModelIndex";
      case 5801:
        return "c_QSortFilterProxyModel__headerData_int_Orientation_int";
      case 5803:
        return "c_QSortFilterProxyModel__index_int_int_QModelIndex";
      case 5806:
        return "c_QSortFilterProxyModel__insertColumns_int_int_QModelIndex";
      case 5808:
        return "c_QSortFilterProxyModel__insertRows_int_int_QModelIndex";
      case 5966:
        return "c_QSortFilterProxyModel__lessThan_QModelIndex_QModelIndex";
      case 5937:
        return "c_QSortFilterProxyModel__mapFromSource_QModelIndex";
      case 5938:
        return "c_QSortFilterProxyModel__mapSelectionFromSource_QItemSelection";
      case 5939:
        return "c_QSortFilterProxyModel__mapSelectionToSource_QItemSelection";
      case 5940:
        return "c_QSortFilterProxyModel__mapToSource_QModelIndex";
      case 5816:
        return "c_QSortFilterProxyModel__mimeTypes";
      case 5818:
        return "c_QSortFilterProxyModel__moveColumns_QModelIndex_int_int_QModelIndex_int";
      case 5820:
        return "c_QSortFilterProxyModel__moveRows_QModelIndex_int_int_QModelIndex_int";
      case 5822:
        return "c_QSortFilterProxyModel__parentIndex_QModelIndex";
      case 5827:
        return "c_QSortFilterProxyModel__removeColumns_int_int_QModelIndex";
      case 5830:
        return "c_QSortFilterProxyModel__removeRows_int_int_QModelIndex";
      case 5831:
        return "c_QSortFilterProxyModel__resetInternalData";
      case 5832:
        return "c_QSortFilterProxyModel__revert";
      case 5833:
        return "c_QSortFilterProxyModel__rowCount_QModelIndex";
      case 5836:
        return "c_QSortFilterProxyModel__setData_QModelIndex_QVariant_int";
      case 5837:
        return "c_QSortFilterProxyModel__setHeaderData_int_Orientation_QVariant_int";
      case 5946:
        return "c_QSortFilterProxyModel__setSourceModel_QAbstractItemModel";
      case 5840:
        return "c_QSortFilterProxyModel__sibling_int_int_QModelIndex";
      case 5842:
        return "c_QSortFilterProxyModel__sort_int_SortOrder";
      case 5843:
        return "c_QSortFilterProxyModel__span_QModelIndex";
      case 5845:
        return "c_QSortFilterProxyModel__submit";
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
      case 5955:
        return "filterAcceptsColumn";
      case 5956:
        return "filterAcceptsRow";
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
      case 5966:
        return "lessThan";
      case 5937:
        return "mapFromSource";
      case 5938:
        return "mapSelectionFromSource";
      case 5939:
        return "mapSelectionToSource";
      case 5940:
        return "mapToSource";
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
      case 5946:
        return "setSourceModel";
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
            'c_QSortFilterProxyModel__registerVirtualMethodCallback')
        .asFunction();
    final callback5771 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            QSortFilterProxyModel.buddy_calledFromC);
    registerCallback(thisCpp, callback5771, 5771);
    const callbackExcept5772 = 0;
    final callback5772 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QSortFilterProxyModel.canFetchMore_calledFromC, callbackExcept5772);
    registerCallback(thisCpp, callback5772, 5772);
    const callbackExcept5777 = 0;
    final callback5777 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QAbstractProxyModel.clearItemData_calledFromC, callbackExcept5777);
    registerCallback(thisCpp, callback5777, 5777);
    const callbackExcept5778 = 0;
    final callback5778 =
        ffi.Pointer.fromFunction<int_Func_voidstar_voidstar_FFI>(
            QSortFilterProxyModel.columnCount_calledFromC, callbackExcept5778);
    registerCallback(thisCpp, callback5778, 5778);
    final callback946 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QObject.customEvent_calledFromC);
    registerCallback(thisCpp, callback946, 946);
    final callback5780 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_ffi_Int32_FFI>(
            QSortFilterProxyModel.data_calledFromC);
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
            QSortFilterProxyModel.fetchMore_calledFromC);
    registerCallback(thisCpp, callback5798, 5798);
    const callbackExcept5955 = 0;
    final callback5955 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_ffi_Int32_voidstar_FFI>(
            QSortFilterProxyModel.filterAcceptsColumn_calledFromC,
            callbackExcept5955);
    registerCallback(thisCpp, callback5955, 5955);
    const callbackExcept5956 = 0;
    final callback5956 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_ffi_Int32_voidstar_FFI>(
            QSortFilterProxyModel.filterAcceptsRow_calledFromC,
            callbackExcept5956);
    registerCallback(thisCpp, callback5956, 5956);
    const callbackExcept5799 = 0;
    final callback5799 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QSortFilterProxyModel.hasChildren_calledFromC, callbackExcept5799);
    registerCallback(thisCpp, callback5799, 5799);
    final callback5801 = ffi.Pointer.fromFunction<
            voidstar_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_FFI>(
        QSortFilterProxyModel.headerData_calledFromC);
    registerCallback(thisCpp, callback5801, 5801);
    final callback5803 = ffi.Pointer.fromFunction<
            voidstar_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>(
        QSortFilterProxyModel.index_calledFromC);
    registerCallback(thisCpp, callback5803, 5803);
    const callbackExcept5806 = 0;
    final callback5806 = ffi.Pointer.fromFunction<
            bool_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>(
        QSortFilterProxyModel.insertColumns_calledFromC, callbackExcept5806);
    registerCallback(thisCpp, callback5806, 5806);
    const callbackExcept5808 = 0;
    final callback5808 = ffi.Pointer.fromFunction<
            bool_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>(
        QSortFilterProxyModel.insertRows_calledFromC, callbackExcept5808);
    registerCallback(thisCpp, callback5808, 5808);
    const callbackExcept5966 = 0;
    final callback5966 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_voidstar_FFI>(
            QSortFilterProxyModel.lessThan_calledFromC, callbackExcept5966);
    registerCallback(thisCpp, callback5966, 5966);
    final callback5937 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            QSortFilterProxyModel.mapFromSource_calledFromC);
    registerCallback(thisCpp, callback5937, 5937);
    final callback5938 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            QSortFilterProxyModel.mapSelectionFromSource_calledFromC);
    registerCallback(thisCpp, callback5938, 5938);
    final callback5939 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            QSortFilterProxyModel.mapSelectionToSource_calledFromC);
    registerCallback(thisCpp, callback5939, 5939);
    final callback5940 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            QSortFilterProxyModel.mapToSource_calledFromC);
    registerCallback(thisCpp, callback5940, 5940);
    final callback5816 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QSortFilterProxyModel.mimeTypes_calledFromC);
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
            QSortFilterProxyModel.parentIndex_calledFromC);
    registerCallback(thisCpp, callback5822, 5822);
    const callbackExcept5827 = 0;
    final callback5827 = ffi.Pointer.fromFunction<
            bool_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>(
        QSortFilterProxyModel.removeColumns_calledFromC, callbackExcept5827);
    registerCallback(thisCpp, callback5827, 5827);
    const callbackExcept5830 = 0;
    final callback5830 = ffi.Pointer.fromFunction<
            bool_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>(
        QSortFilterProxyModel.removeRows_calledFromC, callbackExcept5830);
    registerCallback(thisCpp, callback5830, 5830);
    final callback5831 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QAbstractItemModel.resetInternalData_calledFromC);
    registerCallback(thisCpp, callback5831, 5831);
    final callback5832 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QAbstractProxyModel.revert_calledFromC);
    registerCallback(thisCpp, callback5832, 5832);
    const callbackExcept5833 = 0;
    final callback5833 =
        ffi.Pointer.fromFunction<int_Func_voidstar_voidstar_FFI>(
            QSortFilterProxyModel.rowCount_calledFromC, callbackExcept5833);
    registerCallback(thisCpp, callback5833, 5833);
    const callbackExcept5836 = 0;
    final callback5836 = ffi.Pointer.fromFunction<
            bool_Func_voidstar_voidstar_voidstar_ffi_Int32_FFI>(
        QSortFilterProxyModel.setData_calledFromC, callbackExcept5836);
    registerCallback(thisCpp, callback5836, 5836);
    const callbackExcept5837 = 0;
    final callback5837 = ffi.Pointer.fromFunction<
            bool_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_ffi_Int32_FFI>(
        QSortFilterProxyModel.setHeaderData_calledFromC, callbackExcept5837);
    registerCallback(thisCpp, callback5837, 5837);
    final callback5946 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QSortFilterProxyModel.setSourceModel_calledFromC);
    registerCallback(thisCpp, callback5946, 5946);
    final callback5840 = ffi.Pointer.fromFunction<
            voidstar_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>(
        QSortFilterProxyModel.sibling_calledFromC);
    registerCallback(thisCpp, callback5840, 5840);
    final callback5842 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>(
            QSortFilterProxyModel.sort_calledFromC);
    registerCallback(thisCpp, callback5842, 5842);
    final callback5843 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            QSortFilterProxyModel.span_calledFromC);
    registerCallback(thisCpp, callback5843, 5843);
    const callbackExcept5845 = 0;
    final callback5845 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        QAbstractProxyModel.submit_calledFromC, callbackExcept5845);
    registerCallback(thisCpp, callback5845, 5845);
  }
}
