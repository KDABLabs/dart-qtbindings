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

class QFileInfo implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QFileInfo>();
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

  factory QFileInfo.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
        QFileInfo.fromCppPointer(cppPointer, needsAutoDelete)) as QFileInfo;
  }
  QFileInfo.fromCppPointer(var cppPointer, [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QFileInfo.init() {}
  String getFinalizerName() {
    return "c_QFileInfo_Finalizer";
  } //QFileInfo()

  QFileInfo() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QFileInfo__constructor')
        .asFunction();
    thisCpp = func();
    QFileInfo.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QFileInfo(const QString & file)
  QFileInfo.ctor2(String? file) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QFileInfo__constructor_QString')
        .asFunction();
    thisCpp = func(file?.toNativeUtf8() ?? ffi.nullptr);
    QFileInfo.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } // absoluteFilePath() const
  QString absoluteFilePath() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QFileInfo__absoluteFilePath')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // absolutePath() const

  QString absolutePath() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QFileInfo__absolutePath')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // baseName() const

  QString baseName() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QFileInfo__baseName')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // bundleName() const

  QString bundleName() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QFileInfo__bundleName')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // caching() const

  bool caching() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QFileInfo__caching')
        .asFunction();
    return func(thisCpp) != 0;
  } // canonicalFilePath() const

  QString canonicalFilePath() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QFileInfo__canonicalFilePath')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // canonicalPath() const

  QString canonicalPath() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QFileInfo__canonicalPath')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // completeBaseName() const

  QString completeBaseName() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QFileInfo__completeBaseName')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // completeSuffix() const

  QString completeSuffix() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QFileInfo__completeSuffix')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // exists() const

  bool exists() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QFileInfo__exists')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static // exists(const QString & file)
      bool exists_2(String? file) {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_static_QFileInfo__exists_QString')
        .asFunction();
    return func(file?.toNativeUtf8() ?? ffi.nullptr) != 0;
  } // fileName() const

  QString fileName() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QFileInfo__fileName')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // filePath() const

  QString filePath() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QFileInfo__filePath')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // group() const

  QString group() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QFileInfo__group')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // isAbsolute() const

  bool isAbsolute() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QFileInfo__isAbsolute')
        .asFunction();
    return func(thisCpp) != 0;
  } // isAlias() const

  bool isAlias() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QFileInfo__isAlias')
        .asFunction();
    return func(thisCpp) != 0;
  } // isBundle() const

  bool isBundle() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QFileInfo__isBundle')
        .asFunction();
    return func(thisCpp) != 0;
  } // isDir() const

  bool isDir() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QFileInfo__isDir')
        .asFunction();
    return func(thisCpp) != 0;
  } // isExecutable() const

  bool isExecutable() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QFileInfo__isExecutable')
        .asFunction();
    return func(thisCpp) != 0;
  } // isFile() const

  bool isFile() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QFileInfo__isFile')
        .asFunction();
    return func(thisCpp) != 0;
  } // isHidden() const

  bool isHidden() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QFileInfo__isHidden')
        .asFunction();
    return func(thisCpp) != 0;
  } // isJunction() const

  bool isJunction() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QFileInfo__isJunction')
        .asFunction();
    return func(thisCpp) != 0;
  } // isNativePath() const

  bool isNativePath() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QFileInfo__isNativePath')
        .asFunction();
    return func(thisCpp) != 0;
  } // isReadable() const

  bool isReadable() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QFileInfo__isReadable')
        .asFunction();
    return func(thisCpp) != 0;
  } // isRelative() const

  bool isRelative() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QFileInfo__isRelative')
        .asFunction();
    return func(thisCpp) != 0;
  } // isRoot() const

  bool isRoot() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QFileInfo__isRoot')
        .asFunction();
    return func(thisCpp) != 0;
  } // isShortcut() const

  bool isShortcut() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QFileInfo__isShortcut')
        .asFunction();
    return func(thisCpp) != 0;
  } // isSymLink() const

  bool isSymLink() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QFileInfo__isSymLink')
        .asFunction();
    return func(thisCpp) != 0;
  } // isSymbolicLink() const

  bool isSymbolicLink() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QFileInfo__isSymbolicLink')
        .asFunction();
    return func(thisCpp) != 0;
  } // isWritable() const

  bool isWritable() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QFileInfo__isWritable')
        .asFunction();
    return func(thisCpp) != 0;
  } // junctionTarget() const

  QString junctionTarget() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QFileInfo__junctionTarget')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // makeAbsolute()

  bool makeAbsolute() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QFileInfo__makeAbsolute')
        .asFunction();
    return func(thisCpp) != 0;
  } // owner() const

  QString owner() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QFileInfo__owner')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // path() const

  QString path() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QFileInfo__path')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // refresh()

  refresh() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QFileInfo__refresh')
        .asFunction();
    func(thisCpp);
  } // setCaching(bool on)

  setCaching(bool on) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QFileInfo__setCaching_bool')
        .asFunction();
    func(thisCpp, on ? 1 : 0);
  } // setFile(const QString & file)

  setFile(String? file) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QFileInfo__setFile_QString')
        .asFunction();
    func(thisCpp, file?.toNativeUtf8() ?? ffi.nullptr);
  } // stat()

  stat() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QFileInfo__stat')
        .asFunction();
    func(thisCpp);
  } // suffix() const

  QString suffix() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QFileInfo__suffix')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // symLinkTarget() const

  QString symLinkTarget() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QFileInfo__symLinkTarget')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QFileInfo__destructor')
        .asFunction();
    func(thisCpp);
  }
}
