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
final _finalizerFunc = (String name) {
  return _dylib
      .lookup<ffi.NativeFunction<ffi.Void Function(ffi.Pointer)>>(name);
};

Map<String, ffi.NativeFinalizer> _finalizers = {};

class QModelIndex implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QModelIndex>();
  var _thisCpp = null;
  bool _needsAutoDelete = true;
  get thisCpp => _thisCpp;
  set thisCpp(var ptr) {
    _thisCpp = ptr;
    ffi.Pointer<ffi.Void> ptrvoid = ptr.cast<ffi.Void>();
    if (_needsAutoDelete) {
      final String finalizerName = getFinalizerName();
      if (!_finalizers.keys.contains(runtimeType)) {
        _finalizers[finalizerName] =
            ffi.NativeFinalizer(_finalizerFunc(finalizerName).cast());
      }
      _finalizers[finalizerName]!.attach(this, ptrvoid);
    }
  }

  static bool isCached(var cppPointer) {
    return s_dartInstanceByCppPtr.containsKey(cppPointer.address);
  }

  factory QModelIndex.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
        QModelIndex.fromCppPointer(cppPointer, needsAutoDelete)) as QModelIndex;
  }
  QModelIndex.fromCppPointer(var cppPointer, [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QModelIndex.init() {}
  String getFinalizerName() {
    return "c_QModelIndex_Finalizer";
  } //QModelIndex()

  QModelIndex() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QModelIndex__constructor')
        .asFunction();
    thisCpp = func();
    QModelIndex.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } // column() const
  int column() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QModelIndex__column')
        .asFunction();
    return func(thisCpp);
  } // data(int role) const

  QVariant data({int role = Qt_ItemDataRole.DisplayRole}) {
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            'c_QModelIndex__data_int')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, role);
    return QVariant.fromCppPointer(result, true);
  } // isValid() const

  bool isValid() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QModelIndex__isValid')
        .asFunction();
    return func(thisCpp) != 0;
  } // model() const

  QAbstractItemModel model() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QModelIndex__model')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QAbstractItemModel.fromCppPointer(result, false);
  } // parent() const

  QModelIndex parent() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QModelIndex__parent')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QModelIndex.fromCppPointer(result, true);
  } // row() const

  int row() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QModelIndex__row')
        .asFunction();
    return func(thisCpp);
  } // sibling(int row, int column) const

  QModelIndex sibling(int row, int column) {
    final voidstar_Func_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QModelIndex__sibling_int_int')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, row, column);
    return QModelIndex.fromCppPointer(result, true);
  } // siblingAtColumn(int column) const

  QModelIndex siblingAtColumn(int column) {
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            'c_QModelIndex__siblingAtColumn_int')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, column);
    return QModelIndex.fromCppPointer(result, true);
  } // siblingAtRow(int row) const

  QModelIndex siblingAtRow(int row) {
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            'c_QModelIndex__siblingAtRow_int')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, row);
    return QModelIndex.fromCppPointer(result, true);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QModelIndex__destructor')
        .asFunction();
    func(thisCpp);
  }
}
