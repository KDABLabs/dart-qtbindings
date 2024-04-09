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

class QKeySequence_StandardKey {
  static const UnknownKey = 0;
  static const HelpContents = 1;
  static const WhatsThis = 2;
  static const Open = 3;
  static const Close = 4;
  static const Save = 5;
  static const New = 6;
  static const Delete = 7;
  static const Cut = 8;
  static const Copy = 9;
  static const Paste = 10;
  static const Undo = 11;
  static const Redo = 12;
  static const Back = 13;
  static const Forward = 14;
  static const Refresh = 15;
  static const ZoomIn = 16;
  static const ZoomOut = 17;
  static const Print = 18;
  static const AddTab = 19;
  static const NextChild = 20;
  static const PreviousChild = 21;
  static const Find = 22;
  static const FindNext = 23;
  static const FindPrevious = 24;
  static const Replace = 25;
  static const SelectAll = 26;
  static const Bold = 27;
  static const Italic = 28;
  static const Underline = 29;
  static const MoveToNextChar = 30;
  static const MoveToPreviousChar = 31;
  static const MoveToNextWord = 32;
  static const MoveToPreviousWord = 33;
  static const MoveToNextLine = 34;
  static const MoveToPreviousLine = 35;
  static const MoveToNextPage = 36;
  static const MoveToPreviousPage = 37;
  static const MoveToStartOfLine = 38;
  static const MoveToEndOfLine = 39;
  static const MoveToStartOfBlock = 40;
  static const MoveToEndOfBlock = 41;
  static const MoveToStartOfDocument = 42;
  static const MoveToEndOfDocument = 43;
  static const SelectNextChar = 44;
  static const SelectPreviousChar = 45;
  static const SelectNextWord = 46;
  static const SelectPreviousWord = 47;
  static const SelectNextLine = 48;
  static const SelectPreviousLine = 49;
  static const SelectNextPage = 50;
  static const SelectPreviousPage = 51;
  static const SelectStartOfLine = 52;
  static const SelectEndOfLine = 53;
  static const SelectStartOfBlock = 54;
  static const SelectEndOfBlock = 55;
  static const SelectStartOfDocument = 56;
  static const SelectEndOfDocument = 57;
  static const DeleteStartOfWord = 58;
  static const DeleteEndOfWord = 59;
  static const DeleteEndOfLine = 60;
  static const InsertParagraphSeparator = 61;
  static const InsertLineSeparator = 62;
  static const SaveAs = 63;
  static const Preferences = 64;
  static const Quit = 65;
  static const FullScreen = 66;
  static const Deselect = 67;
  static const DeleteCompleteLine = 68;
  static const Backspace = 69;
  static const Cancel = 70;
}

class QKeySequence implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QKeySequence>();
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

  factory QKeySequence.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
            QKeySequence.fromCppPointer(cppPointer, needsAutoDelete))
        as QKeySequence;
  }
  QKeySequence.fromCppPointer(var cppPointer, [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QKeySequence.init() {}
  String getFinalizerName() {
    return "c_QKeySequence_Finalizer";
  } //QKeySequence()

  QKeySequence() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QKeySequence__constructor')
        .asFunction();
    thisCpp = func();
    QKeySequence.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QKeySequence(QKeySequence::StandardKey key)
  QKeySequence.ctor2(int key) {
    final voidstar_Func_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_ffi_Int32_FFI>>(
            'c_QKeySequence__constructor_StandardKey')
        .asFunction();
    thisCpp = func(key);
    QKeySequence.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QKeySequence(const QString & key)
  QKeySequence.ctor3(String? key) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QKeySequence__constructor_QString')
        .asFunction();
    thisCpp = func(key?.toNativeUtf8() ?? ffi.nullptr);
    QKeySequence.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QKeySequence(int k1, int k2, int k3, int k4)
  QKeySequence.ctor4(int k1, {int k2 = 0, int k3 = 0, int k4 = 0}) {
    final voidstar_Func_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QKeySequence__constructor_int_int_int_int')
        .asFunction();
    thisCpp = func(k1, k2, k3, k4);
    QKeySequence.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } // assign(const QString & str)
  int assign(String? str) {
    final int_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_voidstar_FFI>>(
            'c_QKeySequence__assign_QString')
        .asFunction();
    return func(thisCpp, str?.toNativeUtf8() ?? ffi.nullptr);
  } // count() const

  int count() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QKeySequence__count')
        .asFunction();
    return func(thisCpp);
  }

  static // decodeString(const QString & ks)
      int decodeString(String? ks) {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_static_QKeySequence__decodeString_QString')
        .asFunction();
    return func(ks?.toNativeUtf8() ?? ffi.nullptr);
  }

  static // encodeString(int key)
      QString encodeString(int key) {
    final voidstar_Func_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_ffi_Int32_FFI>>(
            'c_static_QKeySequence__encodeString_int')
        .asFunction();
    ffi.Pointer<void> result = func(key);
    return QString.fromCppPointer(result, true);
  }

  static // fromString(const QString & str)
      QKeySequence fromString(String? str) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_static_QKeySequence__fromString_QString')
        .asFunction();
    ffi.Pointer<void> result = func(str?.toNativeUtf8() ?? ffi.nullptr);
    return QKeySequence.fromCppPointer(result, true);
  } // isDetached() const

  bool isDetached() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QKeySequence__isDetached')
        .asFunction();
    return func(thisCpp) != 0;
  } // isEmpty() const

  bool isEmpty() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QKeySequence__isEmpty')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static // keyBindings(QKeySequence::StandardKey key)
      QList keyBindings(int key) {
    final voidstar_Func_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_ffi_Int32_FFI>>(
            'c_static_QKeySequence__keyBindings_StandardKey')
        .asFunction();
    ffi.Pointer<void> result = func(key);
    return QList<QKeySequence>.fromCppPointer(result, true);
  }

  static // listFromString(const QString & str)
      QList listFromString(String? str) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_static_QKeySequence__listFromString_QString')
        .asFunction();
    ffi.Pointer<void> result = func(str?.toNativeUtf8() ?? ffi.nullptr);
    return QList<QKeySequence>.fromCppPointer(result, true);
  }

  static // listToString(const QList<QKeySequence > & list)
      QString listToString(QList? list) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_static_QKeySequence__listToString_QList_QKeySequence')
        .asFunction();
    ffi.Pointer<void> result = func(list == null ? ffi.nullptr : list.thisCpp);
    return QString.fromCppPointer(result, true);
  }

  static // mnemonic(const QString & text)
      QKeySequence mnemonic(String? text) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_static_QKeySequence__mnemonic_QString')
        .asFunction();
    ffi.Pointer<void> result = func(text?.toNativeUtf8() ?? ffi.nullptr);
    return QKeySequence.fromCppPointer(result, true);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QKeySequence__destructor')
        .asFunction();
    func(thisCpp);
  }
}
