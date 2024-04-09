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

class QAbstractProxyModel extends QAbstractItemModel {
  QAbstractProxyModel.fromCppPointer(var cppPointer,
      [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QAbstractProxyModel.init() : super.init() {}
  factory QAbstractProxyModel.fromCache(var cppPointer,
      [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QAbstractProxyModel;
    }
    return QAbstractProxyModel.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QAbstractProxyModel_Finalizer";
  } //QAbstractProxyModel(QObject * parent)

  QAbstractProxyModel({required QObject? parent}) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAbstractProxyModel__constructor_QObject')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  }
  static ffi.Pointer<void> buddy_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::buddy(const QModelIndex & index) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.buddy(QModelIndex.fromCppPointer(index));
    return result.thisCpp;
  }

  static int canFetchMore_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> parent) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::canFetchMore(const QModelIndex & parent) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.canFetchMore(QModelIndex.fromCppPointer(parent));
    return result ? 1 : 0;
  }

  static int clearItemData_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::clearItemData(const QModelIndex & index)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::columnCount(const QModelIndex & parent) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.columnCount(parent: QModelIndex.fromCppPointer(parent));
    return result;
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static ffi.Pointer<void> data_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> proxyIndex, int role) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::data(const QModelIndex & proxyIndex, int role) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.data(QModelIndex.fromCppPointer(proxyIndex), role: role);
    return result.thisCpp;
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::event(QEvent * event)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
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
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::fetchMore(const QModelIndex & parent)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.fetchMore(QModelIndex.fromCppPointer(parent));
  }

  static int hasChildren_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> parent) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::hasChildren(const QModelIndex & parent) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.hasChildren(parent: QModelIndex.fromCppPointer(parent));
    return result ? 1 : 0;
  }

  static ffi.Pointer<void> headerData_calledFromC(
      ffi.Pointer<void> thisCpp, int section, int orientation, int role) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::headerData(int section, Qt::Orientation orientation, int role) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.headerData(section, orientation, role: role);
    return result.thisCpp;
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::index(int row, int column, const QModelIndex & parent) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.index(row, column,
        parent: QModelIndex.fromCppPointer(parent));
    return result.thisCpp;
  }

  static int insertColumns_calledFromC(ffi.Pointer<void> thisCpp, int column,
      int count, ffi.Pointer<void> parent) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::insertColumns(int column, int count, const QModelIndex & parent)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.insertColumns(column, count,
        parent: QModelIndex.fromCppPointer(parent));
    return result ? 1 : 0;
  }

  static int insertRows_calledFromC(
      ffi.Pointer<void> thisCpp, int row, int count, ffi.Pointer<void> parent) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::insertRows(int row, int count, const QModelIndex & parent)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.insertRows(row, count,
        parent: QModelIndex.fromCppPointer(parent));
    return result ? 1 : 0;
  } // mapFromSource(const QModelIndex & sourceIndex) const

  QModelIndex mapFromSource(QModelIndex sourceIndex) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5937))
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, sourceIndex == null ? ffi.nullptr : sourceIndex.thisCpp);
    return QModelIndex.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> mapFromSource_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> sourceIndex) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::mapFromSource(const QModelIndex & sourceIndex) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.mapFromSource(QModelIndex.fromCppPointer(sourceIndex));
    return result.thisCpp;
  } // mapSelectionFromSource(const QItemSelection & selection) const

  QItemSelection mapSelectionFromSource(QItemSelection selection) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5938))
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, selection == null ? ffi.nullptr : selection.thisCpp);
    return QItemSelection.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> mapSelectionFromSource_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> selection) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::mapSelectionFromSource(const QItemSelection & selection) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance
        .mapSelectionFromSource(QItemSelection.fromCppPointer(selection));
    return result.thisCpp;
  } // mapSelectionToSource(const QItemSelection & selection) const

  QItemSelection mapSelectionToSource(QItemSelection selection) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5939))
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, selection == null ? ffi.nullptr : selection.thisCpp);
    return QItemSelection.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> mapSelectionToSource_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> selection) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::mapSelectionToSource(const QItemSelection & selection) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance
        .mapSelectionToSource(QItemSelection.fromCppPointer(selection));
    return result.thisCpp;
  } // mapToSource(const QModelIndex & proxyIndex) const

  QModelIndex mapToSource(QModelIndex proxyIndex) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5940))
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, proxyIndex == null ? ffi.nullptr : proxyIndex.thisCpp);
    return QModelIndex.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> mapToSource_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> proxyIndex) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::mapToSource(const QModelIndex & proxyIndex) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.mapToSource(QModelIndex.fromCppPointer(proxyIndex));
    return result.thisCpp;
  }

  static ffi.Pointer<void> mimeTypes_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::mimeTypes() const! (${thisCpp.address})");
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
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::moveColumns(const QModelIndex & sourceParent, int sourceColumn, int count, const QModelIndex & destinationParent, int destinationChild)! (${thisCpp.address})");
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
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::moveRows(const QModelIndex & sourceParent, int sourceRow, int count, const QModelIndex & destinationParent, int destinationChild)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::parent(const QModelIndex & child) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.parentIndex(QModelIndex.fromCppPointer(child));
    return result.thisCpp;
  }

  static int removeColumns_calledFromC(ffi.Pointer<void> thisCpp, int column,
      int count, ffi.Pointer<void> parent) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::removeColumns(int column, int count, const QModelIndex & parent)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.removeColumns(column, count,
        parent: QModelIndex.fromCppPointer(parent));
    return result ? 1 : 0;
  }

  static int removeRows_calledFromC(
      ffi.Pointer<void> thisCpp, int row, int count, ffi.Pointer<void> parent) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::removeRows(int row, int count, const QModelIndex & parent)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.removeRows(row, count,
        parent: QModelIndex.fromCppPointer(parent));
    return result ? 1 : 0;
  }

  static void resetInternalData_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::resetInternalData()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.resetInternalData();
  }

  static void revert_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::revert()! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::rowCount(const QModelIndex & parent) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.rowCount(parent: QModelIndex.fromCppPointer(parent));
    return result;
  }

  static int setData_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void> index, ffi.Pointer<void> value, int role) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::setData(const QModelIndex & index, const QVariant & value, int role)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.setData(
        QModelIndex.fromCppPointer(index), QVariant.fromCppPointer(value),
        role: role);
    return result ? 1 : 0;
  }

  static int setHeaderData_calledFromC(ffi.Pointer<void> thisCpp, int section,
      int orientation, ffi.Pointer<void> value, int role) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::setHeaderData(int section, Qt::Orientation orientation, const QVariant & value, int role)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.setHeaderData(
        section, orientation, QVariant.fromCppPointer(value),
        role: role);
    return result ? 1 : 0;
  } // setSourceModel(QAbstractItemModel * sourceModel)

  setSourceModel(QAbstractItemModel? sourceModel) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(5946))
        .asFunction();
    func(thisCpp, sourceModel == null ? ffi.nullptr : sourceModel.thisCpp);
  }

  static void setSourceModel_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? sourceModel) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::setSourceModel(QAbstractItemModel * sourceModel)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setSourceModel(
        (sourceModel == null || sourceModel.address == 0)
            ? null
            : QAbstractItemModel.fromCppPointer(sourceModel));
  }

  static ffi.Pointer<void> sibling_calledFromC(
      ffi.Pointer<void> thisCpp, int row, int column, ffi.Pointer<void> idx) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::sibling(int row, int column, const QModelIndex & idx) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.sibling(row, column, QModelIndex.fromCppPointer(idx));
    return result.thisCpp;
  }

  static void sort_calledFromC(
      ffi.Pointer<void> thisCpp, int column, int order) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::sort(int column, Qt::SortOrder order)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.sort(column, order: order);
  } // sourceModel() const

  QAbstractItemModel sourceModel() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAbstractProxyModel__sourceModel')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QAbstractItemModel.fromCppPointer(result, false);
  }

  static ffi.Pointer<void> span_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::span(const QModelIndex & index) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.span(QModelIndex.fromCppPointer(index));
    return result.thisCpp;
  }

  static int submit_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractProxyModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractProxyModel::submit()! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.submit();
    return result ? 1 : 0;
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QAbstractProxyModel__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractProxyModel__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 5771:
        return "c_QAbstractProxyModel__buddy_QModelIndex";
      case 5772:
        return "c_QAbstractProxyModel__canFetchMore_QModelIndex";
      case 5777:
        return "c_QAbstractProxyModel__clearItemData_QModelIndex";
      case 5778:
        return "c_QAbstractProxyModel__columnCount_QModelIndex";
      case 946:
        return "c_QAbstractProxyModel__customEvent_QEvent";
      case 5780:
        return "c_QAbstractProxyModel__data_QModelIndex_int";
      case 956:
        return "c_QAbstractProxyModel__event_QEvent";
      case 957:
        return "c_QAbstractProxyModel__eventFilter_QObject_QEvent";
      case 5798:
        return "c_QAbstractProxyModel__fetchMore_QModelIndex";
      case 5799:
        return "c_QAbstractProxyModel__hasChildren_QModelIndex";
      case 5801:
        return "c_QAbstractProxyModel__headerData_int_Orientation_int";
      case 5803:
        return "c_QAbstractProxyModel__index_int_int_QModelIndex";
      case 5806:
        return "c_QAbstractProxyModel__insertColumns_int_int_QModelIndex";
      case 5808:
        return "c_QAbstractProxyModel__insertRows_int_int_QModelIndex";
      case 5937:
        return "c_QAbstractProxyModel__mapFromSource_QModelIndex";
      case 5938:
        return "c_QAbstractProxyModel__mapSelectionFromSource_QItemSelection";
      case 5939:
        return "c_QAbstractProxyModel__mapSelectionToSource_QItemSelection";
      case 5940:
        return "c_QAbstractProxyModel__mapToSource_QModelIndex";
      case 5816:
        return "c_QAbstractProxyModel__mimeTypes";
      case 5818:
        return "c_QAbstractProxyModel__moveColumns_QModelIndex_int_int_QModelIndex_int";
      case 5820:
        return "c_QAbstractProxyModel__moveRows_QModelIndex_int_int_QModelIndex_int";
      case 5822:
        return "c_QAbstractProxyModel__parentIndex_QModelIndex";
      case 5827:
        return "c_QAbstractProxyModel__removeColumns_int_int_QModelIndex";
      case 5830:
        return "c_QAbstractProxyModel__removeRows_int_int_QModelIndex";
      case 5831:
        return "c_QAbstractProxyModel__resetInternalData";
      case 5832:
        return "c_QAbstractProxyModel__revert";
      case 5833:
        return "c_QAbstractProxyModel__rowCount_QModelIndex";
      case 5836:
        return "c_QAbstractProxyModel__setData_QModelIndex_QVariant_int";
      case 5837:
        return "c_QAbstractProxyModel__setHeaderData_int_Orientation_QVariant_int";
      case 5946:
        return "c_QAbstractProxyModel__setSourceModel_QAbstractItemModel";
      case 5840:
        return "c_QAbstractProxyModel__sibling_int_int_QModelIndex";
      case 5842:
        return "c_QAbstractProxyModel__sort_int_SortOrder";
      case 5843:
        return "c_QAbstractProxyModel__span_QModelIndex";
      case 5845:
        return "c_QAbstractProxyModel__submit";
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
            'c_QAbstractProxyModel__registerVirtualMethodCallback')
        .asFunction();
    final callback5771 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            QAbstractProxyModel.buddy_calledFromC);
    registerCallback(thisCpp, callback5771, 5771);
    const callbackExcept5772 = 0;
    final callback5772 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QAbstractProxyModel.canFetchMore_calledFromC, callbackExcept5772);
    registerCallback(thisCpp, callback5772, 5772);
    const callbackExcept5777 = 0;
    final callback5777 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QAbstractProxyModel.clearItemData_calledFromC, callbackExcept5777);
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
            QAbstractProxyModel.data_calledFromC);
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
            QAbstractProxyModel.fetchMore_calledFromC);
    registerCallback(thisCpp, callback5798, 5798);
    const callbackExcept5799 = 0;
    final callback5799 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QAbstractProxyModel.hasChildren_calledFromC, callbackExcept5799);
    registerCallback(thisCpp, callback5799, 5799);
    final callback5801 = ffi.Pointer.fromFunction<
            voidstar_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_FFI>(
        QAbstractProxyModel.headerData_calledFromC);
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
    final callback5937 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            QAbstractProxyModel.mapFromSource_calledFromC);
    registerCallback(thisCpp, callback5937, 5937);
    final callback5938 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            QAbstractProxyModel.mapSelectionFromSource_calledFromC);
    registerCallback(thisCpp, callback5938, 5938);
    final callback5939 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            QAbstractProxyModel.mapSelectionToSource_calledFromC);
    registerCallback(thisCpp, callback5939, 5939);
    final callback5940 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            QAbstractProxyModel.mapToSource_calledFromC);
    registerCallback(thisCpp, callback5940, 5940);
    final callback5816 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QAbstractProxyModel.mimeTypes_calledFromC);
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
        QAbstractProxyModel.revert_calledFromC);
    registerCallback(thisCpp, callback5832, 5832);
    const callbackExcept5833 = 0;
    final callback5833 =
        ffi.Pointer.fromFunction<int_Func_voidstar_voidstar_FFI>(
            QAbstractItemModel.rowCount_calledFromC, callbackExcept5833);
    registerCallback(thisCpp, callback5833, 5833);
    const callbackExcept5836 = 0;
    final callback5836 = ffi.Pointer.fromFunction<
            bool_Func_voidstar_voidstar_voidstar_ffi_Int32_FFI>(
        QAbstractProxyModel.setData_calledFromC, callbackExcept5836);
    registerCallback(thisCpp, callback5836, 5836);
    const callbackExcept5837 = 0;
    final callback5837 = ffi.Pointer.fromFunction<
            bool_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_ffi_Int32_FFI>(
        QAbstractProxyModel.setHeaderData_calledFromC, callbackExcept5837);
    registerCallback(thisCpp, callback5837, 5837);
    final callback5946 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractProxyModel.setSourceModel_calledFromC);
    registerCallback(thisCpp, callback5946, 5946);
    final callback5840 = ffi.Pointer.fromFunction<
            voidstar_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>(
        QAbstractProxyModel.sibling_calledFromC);
    registerCallback(thisCpp, callback5840, 5840);
    final callback5842 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>(
            QAbstractProxyModel.sort_calledFromC);
    registerCallback(thisCpp, callback5842, 5842);
    final callback5843 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            QAbstractProxyModel.span_calledFromC);
    registerCallback(thisCpp, callback5843, 5843);
    const callbackExcept5845 = 0;
    final callback5845 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        QAbstractProxyModel.submit_calledFromC, callbackExcept5845);
    registerCallback(thisCpp, callback5845, 5845);
  }
}
