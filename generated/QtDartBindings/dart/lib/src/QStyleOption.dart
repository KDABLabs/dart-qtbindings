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

class QStyleOption_OptionType {
  static const SO_Default = 0;
  static const SO_FocusRect = 1;
  static const SO_Button = 2;
  static const SO_Tab = 3;
  static const SO_MenuItem = 4;
  static const SO_Frame = 5;
  static const SO_ProgressBar = 6;
  static const SO_ToolBox = 7;
  static const SO_Header = 8;
  static const SO_DockWidget = 9;
  static const SO_ViewItem = 10;
  static const SO_TabWidgetFrame = 11;
  static const SO_TabBarBase = 12;
  static const SO_RubberBand = 13;
  static const SO_ToolBar = 14;
  static const SO_GraphicsItem = 15;
  static const SO_Complex = 983040;
  static const SO_Slider = 983041;
  static const SO_SpinBox = 983042;
  static const SO_ToolButton = 983043;
  static const SO_ComboBox = 983044;
  static const SO_TitleBar = 983045;
  static const SO_GroupBox = 983046;
  static const SO_SizeGrip = 983047;
  static const SO_CustomBase = 3840;
  static const SO_ComplexCustomBase = 251658240;
}

class QStyleOption_StyleOptionType {
  static const Type = 0;
}

class QStyleOption_StyleOptionVersion {
  static const Version = 1;
}

class QStyleOption implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QStyleOption>();
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

  factory QStyleOption.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
            QStyleOption.fromCppPointer(cppPointer, needsAutoDelete))
        as QStyleOption;
  }
  QStyleOption.fromCppPointer(var cppPointer, [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QStyleOption.init() {}
  String getFinalizerName() {
    return "c_QStyleOption_Finalizer";
  }

  int get version {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QStyleOption___get_version')
        .asFunction();
    return func(thisCpp);
  }

  set version(int version_) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QStyleOption___set_version_int')
        .asFunction();
    func(thisCpp, version_);
  }

  int get type {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QStyleOption___get_type')
        .asFunction();
    return func(thisCpp);
  }

  set type(int type_) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QStyleOption___set_type_int')
        .asFunction();
    func(thisCpp, type_);
  } //QStyleOption(int version, int type)

  QStyleOption(
      {int version = QStyleOption_StyleOptionVersion.Version,
      int type = QStyleOption_OptionType.SO_Default}) {
    final voidstar_Func_int_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_ffi_Int32_ffi_Int32_FFI>>(
            'c_QStyleOption__constructor_int_int')
        .asFunction();
    thisCpp = func(version, type);
    QStyleOption.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } // initFrom(const QWidget * w)
  initFrom(QWidget? w) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QStyleOption__initFrom_QWidget')
        .asFunction();
    func(thisCpp, w == null ? ffi.nullptr : w.thisCpp);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QStyleOption__destructor')
        .asFunction();
    func(thisCpp);
  }
}
