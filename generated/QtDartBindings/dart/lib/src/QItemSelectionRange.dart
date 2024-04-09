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

class QItemSelectionRange implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QItemSelectionRange>();
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

  factory QItemSelectionRange.fromCache(var cppPointer,
      [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
            QItemSelectionRange.fromCppPointer(cppPointer, needsAutoDelete))
        as QItemSelectionRange;
  }
  QItemSelectionRange.fromCppPointer(var cppPointer,
      [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QItemSelectionRange.init() {}
  String getFinalizerName() {
    return "c_QItemSelectionRange_Finalizer";
  } //QItemSelectionRange()

  QItemSelectionRange() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QItemSelectionRange__constructor')
        .asFunction();
    thisCpp = func();
    QItemSelectionRange.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QItemSelectionRange(const QModelIndex & index)
  QItemSelectionRange.ctor2(QModelIndex index) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QItemSelectionRange__constructor_QModelIndex')
        .asFunction();
    thisCpp = func(index == null ? ffi.nullptr : index.thisCpp);
    QItemSelectionRange.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QItemSelectionRange(const QModelIndex & topL, const QModelIndex & bottomR)
  QItemSelectionRange.ctor3(QModelIndex topL, QModelIndex bottomR) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QItemSelectionRange__constructor_QModelIndex_QModelIndex')
        .asFunction();
    thisCpp = func(topL == null ? ffi.nullptr : topL.thisCpp,
        bottomR == null ? ffi.nullptr : bottomR.thisCpp);
    QItemSelectionRange.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } // bottom() const
  int bottom() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QItemSelectionRange__bottom')
        .asFunction();
    return func(thisCpp);
  } // contains(const QModelIndex & index) const

  bool contains(QModelIndex index) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QItemSelectionRange__contains_QModelIndex')
        .asFunction();
    return func(thisCpp, index == null ? ffi.nullptr : index.thisCpp) != 0;
  } // contains(int row, int column, const QModelIndex & parentIndex) const

  bool contains_2(int row, int column, QModelIndex parentIndex) {
    final bool_Func_voidstar_int_int_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    bool_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>>(
            'c_QItemSelectionRange__contains_int_int_QModelIndex')
        .asFunction();
    return func(thisCpp, row, column,
            parentIndex == null ? ffi.nullptr : parentIndex.thisCpp) !=
        0;
  } // height() const

  int height() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QItemSelectionRange__height')
        .asFunction();
    return func(thisCpp);
  } // indexes() const

  QList indexes() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QItemSelectionRange__indexes')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QList<QModelIndex>.fromCppPointer(result, true);
  } // intersected(const QItemSelectionRange & other) const

  QItemSelectionRange intersected(QItemSelectionRange? other) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QItemSelectionRange__intersected_QItemSelectionRange')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, other == null ? ffi.nullptr : other.thisCpp);
    return QItemSelectionRange.fromCppPointer(result, true);
  } // intersects(const QItemSelectionRange & other) const

  bool intersects(QItemSelectionRange? other) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QItemSelectionRange__intersects_QItemSelectionRange')
        .asFunction();
    return func(thisCpp, other == null ? ffi.nullptr : other.thisCpp) != 0;
  } // isEmpty() const

  bool isEmpty() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QItemSelectionRange__isEmpty')
        .asFunction();
    return func(thisCpp) != 0;
  } // isValid() const

  bool isValid() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QItemSelectionRange__isValid')
        .asFunction();
    return func(thisCpp) != 0;
  } // left() const

  int left() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QItemSelectionRange__left')
        .asFunction();
    return func(thisCpp);
  } // model() const

  QAbstractItemModel model() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QItemSelectionRange__model')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QAbstractItemModel.fromCppPointer(result, false);
  } // parent() const

  QModelIndex parent() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QItemSelectionRange__parent')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QModelIndex.fromCppPointer(result, true);
  } // right() const

  int right() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QItemSelectionRange__right')
        .asFunction();
    return func(thisCpp);
  } // top() const

  int top() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QItemSelectionRange__top')
        .asFunction();
    return func(thisCpp);
  } // width() const

  int width() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QItemSelectionRange__width')
        .asFunction();
    return func(thisCpp);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QItemSelectionRange__destructor')
        .asFunction();
    func(thisCpp);
  }
}
