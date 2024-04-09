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

class QItemSelection implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QItemSelection>();
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

  factory QItemSelection.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
            QItemSelection.fromCppPointer(cppPointer, needsAutoDelete))
        as QItemSelection;
  }
  QItemSelection.fromCppPointer(var cppPointer,
      [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QItemSelection.init() {}
  String getFinalizerName() {
    return "c_QItemSelection_Finalizer";
  } //QItemSelection(const QModelIndex & topLeft, const QModelIndex & bottomRight)

  QItemSelection(QModelIndex topLeft, QModelIndex bottomRight) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QItemSelection__constructor_QModelIndex_QModelIndex')
        .asFunction();
    thisCpp = func(topLeft == null ? ffi.nullptr : topLeft.thisCpp,
        bottomRight == null ? ffi.nullptr : bottomRight.thisCpp);
    QItemSelection.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } // append(const QList<QItemSelectionRange > & l)
  append(QList? l) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QItemSelection__append_QList_QItemSelectionRange')
        .asFunction();
    func(thisCpp, l == null ? ffi.nullptr : l.thisCpp);
  } // at(qsizetype i) const

  QItemSelectionRange at(int i) {
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            'c_QItemSelection__at_qsizetype')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, i);
    return QItemSelectionRange.fromCppPointer(result, false);
  } // back()

  QItemSelectionRange back() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QItemSelection__back')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QItemSelectionRange.fromCppPointer(result, false);
  } // capacity() const

  int capacity() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QItemSelection__capacity')
        .asFunction();
    return func(thisCpp);
  } // clear()

  clear() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QItemSelection__clear')
        .asFunction();
    func(thisCpp);
  } // constData() const

  QItemSelectionRange constData() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QItemSelection__constData')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QItemSelectionRange.fromCppPointer(result, false);
  } // constFirst() const

  QItemSelectionRange constFirst() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QItemSelection__constFirst')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QItemSelectionRange.fromCppPointer(result, false);
  } // constLast() const

  QItemSelectionRange constLast() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QItemSelection__constLast')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QItemSelectionRange.fromCppPointer(result, false);
  } // contains(const QModelIndex & index) const

  bool contains(QModelIndex index) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QItemSelection__contains_QModelIndex')
        .asFunction();
    return func(thisCpp, index == null ? ffi.nullptr : index.thisCpp) != 0;
  } // count() const

  int count() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QItemSelection__count')
        .asFunction();
    return func(thisCpp);
  } // data()

  QItemSelectionRange data() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QItemSelection__data')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QItemSelectionRange.fromCppPointer(result, false);
  } // detach()

  detach() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QItemSelection__detach')
        .asFunction();
    func(thisCpp);
  } // empty() const

  bool empty() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QItemSelection__empty')
        .asFunction();
    return func(thisCpp) != 0;
  } // first()

  QItemSelectionRange first() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QItemSelection__first')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QItemSelectionRange.fromCppPointer(result, false);
  } // first(qsizetype n) const

  QList first_2(int n) {
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            'c_QItemSelection__first_qsizetype')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, n);
    return QList<QItemSelectionRange>.fromCppPointer(result, true);
  }

  static // fromList(const QList<QItemSelectionRange > & list)
      QList fromList(QList? list) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_static_QItemSelection__fromList_QList_QItemSelectionRange')
        .asFunction();
    ffi.Pointer<void> result = func(list == null ? ffi.nullptr : list.thisCpp);
    return QList<QItemSelectionRange>.fromCppPointer(result, true);
  }

  static // fromVector(const QList<QItemSelectionRange > & vector)
      QList fromVector(QList? vector) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_static_QItemSelection__fromVector_QList_QItemSelectionRange')
        .asFunction();
    ffi.Pointer<void> result =
        func(vector == null ? ffi.nullptr : vector.thisCpp);
    return QList<QItemSelectionRange>.fromCppPointer(result, true);
  } // front()

  QItemSelectionRange front() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QItemSelection__front')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QItemSelectionRange.fromCppPointer(result, false);
  } // indexes() const

  QList indexes() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QItemSelection__indexes')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QList<QModelIndex>.fromCppPointer(result, true);
  } // isDetached() const

  bool isDetached() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QItemSelection__isDetached')
        .asFunction();
    return func(thisCpp) != 0;
  } // isEmpty() const

  bool isEmpty() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QItemSelection__isEmpty')
        .asFunction();
    return func(thisCpp) != 0;
  } // isSharedWith(const QList<QItemSelectionRange > & other) const

  bool isSharedWith(QList? other) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QItemSelection__isSharedWith_QList_QItemSelectionRange')
        .asFunction();
    return func(thisCpp, other == null ? ffi.nullptr : other.thisCpp) != 0;
  } // last()

  QItemSelectionRange last() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QItemSelection__last')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QItemSelectionRange.fromCppPointer(result, false);
  } // last(qsizetype n) const

  QList last_2(int n) {
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            'c_QItemSelection__last_qsizetype')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, n);
    return QList<QItemSelectionRange>.fromCppPointer(result, true);
  } // length() const

  int length() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QItemSelection__length')
        .asFunction();
    return func(thisCpp);
  } // merge(const QItemSelection & other, QFlags<QItemSelectionModel::SelectionFlag> command)

  merge(QItemSelection other, int command) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'c_QItemSelection__merge_QItemSelection_SelectionFlags')
        .asFunction();
    func(thisCpp, other == null ? ffi.nullptr : other.thisCpp, command);
  } // mid(qsizetype pos, qsizetype len) const

  QList mid(int pos, {int len = -1}) {
    final voidstar_Func_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QItemSelection__mid_qsizetype_qsizetype')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, pos, len);
    return QList<QItemSelectionRange>.fromCppPointer(result, true);
  } // move(qsizetype from, qsizetype to)

  move(int from, int to) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QItemSelection__move_qsizetype_qsizetype')
        .asFunction();
    func(thisCpp, from, to);
  } // pop_back()

  pop_back() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QItemSelection__pop_back')
        .asFunction();
    func(thisCpp);
  } // pop_front()

  pop_front() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QItemSelection__pop_front')
        .asFunction();
    func(thisCpp);
  } // remove(qsizetype i, qsizetype n)

  remove(int i, {int n = 1}) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QItemSelection__remove_qsizetype_qsizetype')
        .asFunction();
    func(thisCpp, i, n);
  } // removeAt(qsizetype i)

  removeAt(int i) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QItemSelection__removeAt_qsizetype')
        .asFunction();
    func(thisCpp, i);
  } // removeFirst()

  removeFirst() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QItemSelection__removeFirst')
        .asFunction();
    func(thisCpp);
  } // removeLast()

  removeLast() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QItemSelection__removeLast')
        .asFunction();
    func(thisCpp);
  } // reserve(qsizetype size)

  reserve(int size) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QItemSelection__reserve_qsizetype')
        .asFunction();
    func(thisCpp, size);
  } // resize(qsizetype size)

  resize(int size) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QItemSelection__resize_qsizetype')
        .asFunction();
    func(thisCpp, size);
  } // resize_internal(qsizetype i)

  resize_internal(int i) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QItemSelection__resize_internal_qsizetype')
        .asFunction();
    func(thisCpp, i);
  } // select(const QModelIndex & topLeft, const QModelIndex & bottomRight)

  select(QModelIndex topLeft, QModelIndex bottomRight) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QItemSelection__select_QModelIndex_QModelIndex')
        .asFunction();
    func(thisCpp, topLeft == null ? ffi.nullptr : topLeft.thisCpp,
        bottomRight == null ? ffi.nullptr : bottomRight.thisCpp);
  } // shrink_to_fit()

  shrink_to_fit() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QItemSelection__shrink_to_fit')
        .asFunction();
    func(thisCpp);
  } // size() const

  int size() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QItemSelection__size')
        .asFunction();
    return func(thisCpp);
  } // sliced(qsizetype pos) const

  QList sliced(int pos) {
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            'c_QItemSelection__sliced_qsizetype')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, pos);
    return QList<QItemSelectionRange>.fromCppPointer(result, true);
  } // sliced(qsizetype pos, qsizetype n) const

  QList sliced_2(int pos, int n) {
    final voidstar_Func_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QItemSelection__sliced_qsizetype_qsizetype')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, pos, n);
    return QList<QItemSelectionRange>.fromCppPointer(result, true);
  }

  static // split(const QItemSelectionRange & range, const QItemSelectionRange & other, QItemSelection * result)
      split(QItemSelectionRange? range, QItemSelectionRange? other,
          QItemSelection? result) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_static_QItemSelection__split_QItemSelectionRange_QItemSelectionRange_QItemSelection')
        .asFunction();
    func(
        range == null ? ffi.nullptr : range.thisCpp,
        other == null ? ffi.nullptr : other.thisCpp,
        result == null ? ffi.nullptr : result.thisCpp);
  } // squeeze()

  squeeze() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QItemSelection__squeeze')
        .asFunction();
    func(thisCpp);
  } // swapItemsAt(qsizetype i, qsizetype j)

  swapItemsAt(int i, int j) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QItemSelection__swapItemsAt_qsizetype_qsizetype')
        .asFunction();
    func(thisCpp, i, j);
  } // takeAt(qsizetype i)

  QItemSelectionRange takeAt(int i) {
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            'c_QItemSelection__takeAt_qsizetype')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, i);
    return QItemSelectionRange.fromCppPointer(result, true);
  } // toList() const

  QList toList() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QItemSelection__toList')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QList<QItemSelectionRange>.fromCppPointer(result, true);
  } // toVector() const

  QList toVector() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QItemSelection__toVector')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QList<QItemSelectionRange>.fromCppPointer(result, true);
  } // value(qsizetype i) const

  QItemSelectionRange value(int i) {
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            'c_QItemSelection__value_qsizetype')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, i);
    return QItemSelectionRange.fromCppPointer(result, true);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QItemSelection__destructor')
        .asFunction();
    func(thisCpp);
  }
}
