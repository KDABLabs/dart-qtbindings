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

class QBrush implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QBrush>();
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

  factory QBrush.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
        QBrush.fromCppPointer(cppPointer, needsAutoDelete)) as QBrush;
  }
  QBrush.fromCppPointer(var cppPointer, [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QBrush.init() {}
  String getFinalizerName() {
    return "c_QBrush_Finalizer";
  } //QBrush()

  QBrush() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QBrush__constructor')
        .asFunction();
    thisCpp = func();
    QBrush.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QBrush(const QColor & color)
  QBrush.ctor2(QColor? color) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QBrush__constructor_QColor')
        .asFunction();
    thisCpp = func(color == null ? ffi.nullptr : color.thisCpp);
    QBrush.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QBrush(const QColor & color, const QPixmap & pixmap)
  QBrush.ctor3(QColor? color, QPixmap pixmap) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QBrush__constructor_QColor_QPixmap')
        .asFunction();
    thisCpp = func(color == null ? ffi.nullptr : color.thisCpp,
        pixmap == null ? ffi.nullptr : pixmap.thisCpp);
    QBrush.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QBrush(const QPixmap & pixmap)
  QBrush.ctor4(QPixmap pixmap) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QBrush__constructor_QPixmap')
        .asFunction();
    thisCpp = func(pixmap == null ? ffi.nullptr : pixmap.thisCpp);
    QBrush.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } // color() const
  QColor color() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QBrush__color')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QColor.fromCppPointer(result, false);
  } // isDetached() const

  bool isDetached() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QBrush__isDetached')
        .asFunction();
    return func(thisCpp) != 0;
  } // isOpaque() const

  bool isOpaque() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QBrush__isOpaque')
        .asFunction();
    return func(thisCpp) != 0;
  } // setColor(const QColor & color)

  setColor(QColor? color) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QBrush__setColor_QColor')
        .asFunction();
    func(thisCpp, color == null ? ffi.nullptr : color.thisCpp);
  } // setTexture(const QPixmap & pixmap)

  setTexture(QPixmap pixmap) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QBrush__setTexture_QPixmap')
        .asFunction();
    func(thisCpp, pixmap == null ? ffi.nullptr : pixmap.thisCpp);
  } // texture() const

  QPixmap texture() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QBrush__texture')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPixmap.fromCppPointer(result, true);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QBrush__destructor')
        .asFunction();
    func(thisCpp);
  }
}
