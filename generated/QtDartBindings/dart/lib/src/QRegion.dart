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

class QRegion implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QRegion>();
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

  factory QRegion.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
        QRegion.fromCppPointer(cppPointer, needsAutoDelete)) as QRegion;
  }
  QRegion.fromCppPointer(var cppPointer, [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QRegion.init() {}
  String getFinalizerName() {
    return "c_QRegion_Finalizer";
  } //QRegion()

  QRegion() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QRegion__constructor')
        .asFunction();
    thisCpp = func();
    QRegion.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QRegion(const QRect & r)
  QRegion.ctor2(QRect? r) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QRegion__constructor_QRect')
        .asFunction();
    thisCpp = func(r == null ? ffi.nullptr : r.thisCpp);
    QRegion.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QRegion(int x, int y, int w, int h)
  QRegion.ctor3(int x, int y, int w, int h) {
    final voidstar_Func_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QRegion__constructor_int_int_int_int')
        .asFunction();
    thisCpp = func(x, y, w, h);
    QRegion.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } // begin() const
  QRect begin() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QRegion__begin')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRect.fromCppPointer(result, false);
  } // boundingRect() const

  QRect boundingRect() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QRegion__boundingRect')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRect.fromCppPointer(result, true);
  } // cbegin() const

  QRect cbegin() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QRegion__cbegin')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRect.fromCppPointer(result, false);
  } // cend() const

  QRect cend() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QRegion__cend')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRect.fromCppPointer(result, false);
  } // contains(const QPoint & p) const

  bool contains(QPoint? p) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QRegion__contains_QPoint')
        .asFunction();
    return func(thisCpp, p == null ? ffi.nullptr : p.thisCpp) != 0;
  } // contains(const QRect & r) const

  bool contains_2(QRect? r) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QRegion__contains_QRect')
        .asFunction();
    return func(thisCpp, r == null ? ffi.nullptr : r.thisCpp) != 0;
  } // copy() const

  QRegion copy() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QRegion__copy')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRegion.fromCppPointer(result, true);
  } // detach()

  detach() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QRegion__detach')
        .asFunction();
    func(thisCpp);
  } // end() const

  QRect end() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QRegion__end')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRect.fromCppPointer(result, false);
  } // exec(const QByteArray & ba, int ver)

  exec(QByteArray? ba, {int ver = 0}) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'c_QRegion__exec_QByteArray_int')
        .asFunction();
    func(thisCpp, ba == null ? ffi.nullptr : ba.thisCpp, ver);
  } // intersected(const QRect & r) const

  QRegion intersected(QRect? r) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QRegion__intersected_QRect')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, r == null ? ffi.nullptr : r.thisCpp);
    return QRegion.fromCppPointer(result, true);
  } // intersected(const QRegion & r) const

  QRegion intersected_2(QRegion r) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QRegion__intersected_QRegion')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, r == null ? ffi.nullptr : r.thisCpp);
    return QRegion.fromCppPointer(result, true);
  } // intersects(const QRect & r) const

  bool intersects(QRect? r) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QRegion__intersects_QRect')
        .asFunction();
    return func(thisCpp, r == null ? ffi.nullptr : r.thisCpp) != 0;
  } // intersects(const QRegion & r) const

  bool intersects_2(QRegion r) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QRegion__intersects_QRegion')
        .asFunction();
    return func(thisCpp, r == null ? ffi.nullptr : r.thisCpp) != 0;
  } // isEmpty() const

  bool isEmpty() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QRegion__isEmpty')
        .asFunction();
    return func(thisCpp) != 0;
  } // isNull() const

  bool isNull() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>('c_QRegion__isNull')
        .asFunction();
    return func(thisCpp) != 0;
  } // rectCount() const

  int rectCount() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QRegion__rectCount')
        .asFunction();
    return func(thisCpp);
  } // setRects(const QRect * rect, int num)

  setRects(QRect? rect, int num) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'c_QRegion__setRects_QRect_int')
        .asFunction();
    func(thisCpp, rect == null ? ffi.nullptr : rect.thisCpp, num);
  } // subtracted(const QRegion & r) const

  QRegion subtracted(QRegion r) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QRegion__subtracted_QRegion')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, r == null ? ffi.nullptr : r.thisCpp);
    return QRegion.fromCppPointer(result, true);
  } // translate(const QPoint & p)

  translate(QPoint? p) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QRegion__translate_QPoint')
        .asFunction();
    func(thisCpp, p == null ? ffi.nullptr : p.thisCpp);
  } // translate(int dx, int dy)

  translate_2(int dx, int dy) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QRegion__translate_int_int')
        .asFunction();
    func(thisCpp, dx, dy);
  } // translated(const QPoint & p) const

  QRegion translated(QPoint? p) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QRegion__translated_QPoint')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, p == null ? ffi.nullptr : p.thisCpp);
    return QRegion.fromCppPointer(result, true);
  } // translated(int dx, int dy) const

  QRegion translated_2(int dx, int dy) {
    final voidstar_Func_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QRegion__translated_int_int')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, dx, dy);
    return QRegion.fromCppPointer(result, true);
  } // united(const QRect & r) const

  QRegion united(QRect? r) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QRegion__united_QRect')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, r == null ? ffi.nullptr : r.thisCpp);
    return QRegion.fromCppPointer(result, true);
  } // united(const QRegion & r) const

  QRegion united_2(QRegion r) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QRegion__united_QRegion')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, r == null ? ffi.nullptr : r.thisCpp);
    return QRegion.fromCppPointer(result, true);
  } // xored(const QRegion & r) const

  QRegion xored(QRegion r) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QRegion__xored_QRegion')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, r == null ? ffi.nullptr : r.thisCpp);
    return QRegion.fromCppPointer(result, true);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QRegion__destructor')
        .asFunction();
    func(thisCpp);
  }
}
