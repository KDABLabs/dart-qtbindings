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

class QSizePolicy_PolicyFlag {
  static const GrowFlag = 1;
  static const ExpandFlag = 2;
  static const ShrinkFlag = 4;
  static const IgnoreFlag = 8;
}

class QSizePolicy_Policy {
  static const Fixed = 0;
  static const Minimum = 1;
  static const Maximum = 4;
  static const Preferred = 5;
  static const MinimumExpanding = 3;
  static const Expanding = 7;
  static const Ignored = 13;
}

class QSizePolicy_ControlType {
  static const DefaultType = 1;
  static const ButtonBox = 2;
  static const CheckBox = 4;
  static const ComboBox = 8;
  static const Frame = 16;
  static const GroupBox = 32;
  static const Label = 64;
  static const Line = 128;
  static const LineEdit = 256;
  static const PushButton = 512;
  static const RadioButton = 1024;
  static const Slider = 2048;
  static const SpinBox = 4096;
  static const TabWidget = 8192;
  static const ToolButton = 16384;
}

class QSizePolicy implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QSizePolicy>();
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

  factory QSizePolicy.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
        QSizePolicy.fromCppPointer(cppPointer, needsAutoDelete)) as QSizePolicy;
  }
  QSizePolicy.fromCppPointer(var cppPointer, [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QSizePolicy.init() {}
  String getFinalizerName() {
    return "c_QSizePolicy_Finalizer";
  } //QSizePolicy()

  QSizePolicy() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QSizePolicy__constructor')
        .asFunction();
    thisCpp = func();
    QSizePolicy.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QSizePolicy(QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical, QSizePolicy::ControlType type)
  QSizePolicy.ctor2(int horizontal, int vertical,
      {int type = QSizePolicy_ControlType.DefaultType}) {
    final voidstar_Func_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QSizePolicy__constructor_Policy_Policy_ControlType')
        .asFunction();
    thisCpp = func(horizontal, vertical, type);
    QSizePolicy.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } // controlType() const
  int controlType() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QSizePolicy__controlType')
        .asFunction();
    return func(thisCpp);
  } // expandingDirections() const

  int expandingDirections() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QSizePolicy__expandingDirections')
        .asFunction();
    return func(thisCpp);
  } // hasHeightForWidth() const

  bool hasHeightForWidth() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QSizePolicy__hasHeightForWidth')
        .asFunction();
    return func(thisCpp) != 0;
  } // hasWidthForHeight() const

  bool hasWidthForHeight() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QSizePolicy__hasWidthForHeight')
        .asFunction();
    return func(thisCpp) != 0;
  } // horizontalPolicy() const

  int horizontalPolicy() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QSizePolicy__horizontalPolicy')
        .asFunction();
    return func(thisCpp);
  } // horizontalStretch() const

  int horizontalStretch() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QSizePolicy__horizontalStretch')
        .asFunction();
    return func(thisCpp);
  } // retainSizeWhenHidden() const

  bool retainSizeWhenHidden() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QSizePolicy__retainSizeWhenHidden')
        .asFunction();
    return func(thisCpp) != 0;
  } // setControlType(QSizePolicy::ControlType type)

  setControlType(int type) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QSizePolicy__setControlType_ControlType')
        .asFunction();
    func(thisCpp, type);
  } // setHeightForWidth(bool b)

  setHeightForWidth(bool b) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QSizePolicy__setHeightForWidth_bool')
        .asFunction();
    func(thisCpp, b ? 1 : 0);
  } // setHorizontalPolicy(QSizePolicy::Policy d)

  setHorizontalPolicy(int d) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QSizePolicy__setHorizontalPolicy_Policy')
        .asFunction();
    func(thisCpp, d);
  } // setHorizontalStretch(int stretchFactor)

  setHorizontalStretch(int stretchFactor) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QSizePolicy__setHorizontalStretch_int')
        .asFunction();
    func(thisCpp, stretchFactor);
  } // setRetainSizeWhenHidden(bool retainSize)

  setRetainSizeWhenHidden(bool retainSize) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QSizePolicy__setRetainSizeWhenHidden_bool')
        .asFunction();
    func(thisCpp, retainSize ? 1 : 0);
  } // setVerticalPolicy(QSizePolicy::Policy d)

  setVerticalPolicy(int d) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QSizePolicy__setVerticalPolicy_Policy')
        .asFunction();
    func(thisCpp, d);
  } // setVerticalStretch(int stretchFactor)

  setVerticalStretch(int stretchFactor) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QSizePolicy__setVerticalStretch_int')
        .asFunction();
    func(thisCpp, stretchFactor);
  } // setWidthForHeight(bool b)

  setWidthForHeight(bool b) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QSizePolicy__setWidthForHeight_bool')
        .asFunction();
    func(thisCpp, b ? 1 : 0);
  } // transpose()

  transpose() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QSizePolicy__transpose')
        .asFunction();
    func(thisCpp);
  } // transposed() const

  QSizePolicy transposed() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QSizePolicy__transposed')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSizePolicy.fromCppPointer(result, true);
  } // verticalPolicy() const

  int verticalPolicy() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QSizePolicy__verticalPolicy')
        .asFunction();
    return func(thisCpp);
  } // verticalStretch() const

  int verticalStretch() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QSizePolicy__verticalStretch')
        .asFunction();
    return func(thisCpp);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QSizePolicy__destructor')
        .asFunction();
    func(thisCpp);
  }
}
