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

class QAbstractListModel extends QAbstractItemModel {
  QAbstractListModel.fromCppPointer(var cppPointer,
      [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QAbstractListModel.init() : super.init() {}
  factory QAbstractListModel.fromCache(var cppPointer,
      [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QAbstractListModel;
    }
    return QAbstractListModel.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QAbstractListModel_Finalizer";
  } //QAbstractListModel(QObject * parent)

  QAbstractListModel({required QObject? parent}) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAbstractListModel__constructor_QObject')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  }
  static ffi.Pointer<void> buddy_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::buddy(const QModelIndex & index) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.buddy(QModelIndex.fromCppPointer(index));
    return result.thisCpp;
  }

  static int canFetchMore_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> parent) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::canFetchMore(const QModelIndex & parent) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.canFetchMore(QModelIndex.fromCppPointer(parent));
    return result ? 1 : 0;
  }

  static int clearItemData_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::clearItemData(const QModelIndex & index)! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.clearItemData(QModelIndex.fromCppPointer(index));
    return result ? 1 : 0;
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::customEvent(QEvent * event)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::data(const QModelIndex & index, int role) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.data(QModelIndex.fromCppPointer(index), role: role);
    return result.thisCpp;
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::event(QEvent * event)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::fetchMore(const QModelIndex & parent)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.fetchMore(QModelIndex.fromCppPointer(parent));
  }

  static ffi.Pointer<void> headerData_calledFromC(
      ffi.Pointer<void> thisCpp, int section, int orientation, int role) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::headerData(int section, Qt::Orientation orientation, int role) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.headerData(section, orientation, role: role);
    return result.thisCpp;
  }

  static int insertColumns_calledFromC(ffi.Pointer<void> thisCpp, int column,
      int count, ffi.Pointer<void> parent) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::insertColumns(int column, int count, const QModelIndex & parent)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.insertColumns(column, count,
        parent: QModelIndex.fromCppPointer(parent));
    return result ? 1 : 0;
  }

  static int insertRows_calledFromC(
      ffi.Pointer<void> thisCpp, int row, int count, ffi.Pointer<void> parent) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::insertRows(int row, int count, const QModelIndex & parent)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.insertRows(row, count,
        parent: QModelIndex.fromCppPointer(parent));
    return result ? 1 : 0;
  }

  static ffi.Pointer<void> mimeTypes_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::mimeTypes() const! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::moveColumns(const QModelIndex & sourceParent, int sourceColumn, int count, const QModelIndex & destinationParent, int destinationChild)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::moveRows(const QModelIndex & sourceParent, int sourceRow, int count, const QModelIndex & destinationParent, int destinationChild)! (${thisCpp.address})");
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
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::parent(const QModelIndex & child) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.parentIndex(QModelIndex.fromCppPointer(child));
    return result.thisCpp;
  }

  static int removeColumns_calledFromC(ffi.Pointer<void> thisCpp, int column,
      int count, ffi.Pointer<void> parent) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::removeColumns(int column, int count, const QModelIndex & parent)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.removeColumns(column, count,
        parent: QModelIndex.fromCppPointer(parent));
    return result ? 1 : 0;
  }

  static int removeRows_calledFromC(
      ffi.Pointer<void> thisCpp, int row, int count, ffi.Pointer<void> parent) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::removeRows(int row, int count, const QModelIndex & parent)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.removeRows(row, count,
        parent: QModelIndex.fromCppPointer(parent));
    return result ? 1 : 0;
  }

  static void resetInternalData_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::resetInternalData()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.resetInternalData();
  }

  static void revert_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::revert()! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::rowCount(const QModelIndex & parent) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.rowCount(parent: QModelIndex.fromCppPointer(parent));
    return result;
  }

  static int setData_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void> index, ffi.Pointer<void> value, int role) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::setData(const QModelIndex & index, const QVariant & value, int role)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::setHeaderData(int section, Qt::Orientation orientation, const QVariant & value, int role)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.setHeaderData(
        section, orientation, QVariant.fromCppPointer(value),
        role: role);
    return result ? 1 : 0;
  }

  static ffi.Pointer<void> sibling_calledFromC(
      ffi.Pointer<void> thisCpp, int row, int column, ffi.Pointer<void> idx) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::sibling(int row, int column, const QModelIndex & idx) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.sibling(row, column, QModelIndex.fromCppPointer(idx));
    return result.thisCpp;
  }

  static void sort_calledFromC(
      ffi.Pointer<void> thisCpp, int column, int order) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::sort(int column, Qt::SortOrder order)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.sort(column, order: order);
  }

  static ffi.Pointer<void> span_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::span(const QModelIndex & index) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.span(QModelIndex.fromCppPointer(index));
    return result.thisCpp;
  }

  static int submit_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractListModel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractListModel::submit()! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.submit();
    return result ? 1 : 0;
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QAbstractListModel__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractListModel__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 5771:
        return "c_QAbstractListModel__buddy_QModelIndex";
      case 5772:
        return "c_QAbstractListModel__canFetchMore_QModelIndex";
      case 5777:
        return "c_QAbstractListModel__clearItemData_QModelIndex";
      case 946:
        return "c_QAbstractListModel__customEvent_QEvent";
      case 5780:
        return "c_QAbstractListModel__data_QModelIndex_int";
      case 956:
        return "c_QAbstractListModel__event_QEvent";
      case 957:
        return "c_QAbstractListModel__eventFilter_QObject_QEvent";
      case 5798:
        return "c_QAbstractListModel__fetchMore_QModelIndex";
      case 5801:
        return "c_QAbstractListModel__headerData_int_Orientation_int";
      case 5806:
        return "c_QAbstractListModel__insertColumns_int_int_QModelIndex";
      case 5808:
        return "c_QAbstractListModel__insertRows_int_int_QModelIndex";
      case 5816:
        return "c_QAbstractListModel__mimeTypes";
      case 5818:
        return "c_QAbstractListModel__moveColumns_QModelIndex_int_int_QModelIndex_int";
      case 5820:
        return "c_QAbstractListModel__moveRows_QModelIndex_int_int_QModelIndex_int";
      case 5822:
        return "c_QAbstractListModel__parentIndex_QModelIndex";
      case 5827:
        return "c_QAbstractListModel__removeColumns_int_int_QModelIndex";
      case 5830:
        return "c_QAbstractListModel__removeRows_int_int_QModelIndex";
      case 5831:
        return "c_QAbstractListModel__resetInternalData";
      case 5832:
        return "c_QAbstractListModel__revert";
      case 5833:
        return "c_QAbstractListModel__rowCount_QModelIndex";
      case 5836:
        return "c_QAbstractListModel__setData_QModelIndex_QVariant_int";
      case 5837:
        return "c_QAbstractListModel__setHeaderData_int_Orientation_QVariant_int";
      case 5840:
        return "c_QAbstractListModel__sibling_int_int_QModelIndex";
      case 5842:
        return "c_QAbstractListModel__sort_int_SortOrder";
      case 5843:
        return "c_QAbstractListModel__span_QModelIndex";
      case 5845:
        return "c_QAbstractListModel__submit";
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
      case 5801:
        return "headerData";
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
            'c_QAbstractListModel__registerVirtualMethodCallback')
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
    final callback5801 = ffi.Pointer.fromFunction<
            voidstar_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_FFI>(
        QAbstractItemModel.headerData_calledFromC);
    registerCallback(thisCpp, callback5801, 5801);
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
            QAbstractListModel.parentIndex_calledFromC);
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
        QAbstractListModel.sibling_calledFromC);
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
