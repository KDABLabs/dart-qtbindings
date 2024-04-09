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

class QPixmap implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QPixmap>();
  var _thisCpp = null;
  bool _needsAutoDelete = false;
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

  factory QPixmap.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
        QPixmap.fromCppPointer(cppPointer, needsAutoDelete)) as QPixmap;
  }
  QPixmap.fromCppPointer(var cppPointer, [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QPixmap.init() {}
  String getFinalizerName() {
    return "c_QPixmap_Finalizer";
  } //QPixmap()

  QPixmap() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QPixmap__constructor')
        .asFunction();
    thisCpp = func();
    QPixmap.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } //QPixmap(const QSize & arg__1)
  QPixmap.ctor2(QSize? arg__1) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPixmap__constructor_QSize')
        .asFunction();
    thisCpp = func(arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
    QPixmap.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } //QPixmap(const QString & fileName, const char * format)
  QPixmap.ctor3(String? fileName, {String? format}) {
    final voidstar_Func_voidstar_string func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_string_FFI>>(
            'c_QPixmap__constructor_QString_char')
        .asFunction();
    thisCpp = func(fileName?.toNativeUtf8() ?? ffi.nullptr,
        format?.toNativeUtf8() ?? ffi.nullptr);
    QPixmap.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } //QPixmap(int w, int h)
  QPixmap.ctor4(int w, int h) {
    final voidstar_Func_int_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPixmap__constructor_int_int')
        .asFunction();
    thisCpp = func(w, h);
    QPixmap.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } // copy(const QRect & rect) const
  QPixmap copy({required QRect? rect}) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QPixmap__copy_QRect')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, rect == null ? ffi.nullptr : rect.thisCpp);
    return QPixmap.fromCppPointer(result, true);
  } // copy(int x, int y, int width, int height) const

  QPixmap copy_2(int x, int y, int width, int height) {
    final voidstar_Func_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPixmap__copy_int_int_int_int')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, x, y, width, height);
    return QPixmap.fromCppPointer(result, true);
  }

  static // defaultDepth()
      int defaultDepth() {
    final int_Func_void func = _dylib
        .lookup<ffi.NativeFunction<int_Func_void_FFI>>(
            'c_static_QPixmap__defaultDepth')
        .asFunction();
    return func();
  } // depth() const

  int depth() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QPixmap__depth')
        .asFunction();
    return func(thisCpp);
  } // detach()

  detach() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QPixmap__detach')
        .asFunction();
    func(thisCpp);
  } // devType() const

  int devType() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            cFunctionSymbolName(695))
        .asFunction();
    return func(thisCpp);
  }

  static int devType_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance = QPixmap.s_dartInstanceByCppPtr[thisCpp.address];
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPixmap::devType() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.devType();
    return result;
  } // deviceIndependentSize() const

  QSizeF deviceIndependentSize() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPixmap__deviceIndependentSize')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSizeF.fromCppPointer(result, true);
  } // devicePixelRatio() const

  double devicePixelRatio() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QPixmap__devicePixelRatio')
        .asFunction();
    return func(thisCpp);
  } // doInit(int arg__1, int arg__2, int arg__3)

  doInit(int arg__1, int arg__2, int arg__3) {
    final void_Func_voidstar_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPixmap__doInit_int_int_int')
        .asFunction();
    func(thisCpp, arg__1, arg__2, arg__3);
  } // fill(const QColor & fillColor)

  fill({required QColor? fillColor}) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPixmap__fill_QColor')
        .asFunction();
    func(thisCpp, fillColor == null ? ffi.nullptr : fillColor.thisCpp);
  } // hasAlpha() const

  bool hasAlpha() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QPixmap__hasAlpha')
        .asFunction();
    return func(thisCpp) != 0;
  } // hasAlphaChannel() const

  bool hasAlphaChannel() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QPixmap__hasAlphaChannel')
        .asFunction();
    return func(thisCpp) != 0;
  } // height() const

  int height() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QPixmap__height')
        .asFunction();
    return func(thisCpp);
  } // isDetached() const

  bool isDetached() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QPixmap__isDetached')
        .asFunction();
    return func(thisCpp) != 0;
  } // isNull() const

  bool isNull() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>('c_QPixmap__isNull')
        .asFunction();
    return func(thisCpp) != 0;
  } // isQBitmap() const

  bool isQBitmap() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QPixmap__isQBitmap')
        .asFunction();
    return func(thisCpp) != 0;
  } // load(const QString & fileName, const char * format)

  bool load(String? fileName, {String? format}) {
    final bool_Func_voidstar_voidstar_string func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_string_FFI>>(
            'c_QPixmap__load_QString_char')
        .asFunction();
    return func(thisCpp, fileName?.toNativeUtf8() ?? ffi.nullptr,
            format?.toNativeUtf8() ?? ffi.nullptr) !=
        0;
  } // loadFromData(const QByteArray & data, const char * format)

  bool loadFromData(QByteArray? data, {String? format}) {
    final bool_Func_voidstar_voidstar_string func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_string_FFI>>(
            'c_QPixmap__loadFromData_QByteArray_char')
        .asFunction();
    return func(thisCpp, data == null ? ffi.nullptr : data.thisCpp,
            format?.toNativeUtf8() ?? ffi.nullptr) !=
        0;
  } // rect() const

  QRect rect() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPixmap__rect')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRect.fromCppPointer(result, true);
  } // save(QIODevice * device, const char * format, int quality) const

  bool save(QIODevice? device, {String? format, int quality = -1}) {
    final bool_Func_voidstar_voidstar_string_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    bool_Func_voidstar_voidstar_string_ffi_Int32_FFI>>(
            'c_QPixmap__save_QIODevice_char_int')
        .asFunction();
    return func(thisCpp, device == null ? ffi.nullptr : device.thisCpp,
            format?.toNativeUtf8() ?? ffi.nullptr, quality) !=
        0;
  } // save(const QString & fileName, const char * format, int quality) const

  bool save_2(String? fileName, {String? format, int quality = -1}) {
    final bool_Func_voidstar_voidstar_string_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    bool_Func_voidstar_voidstar_string_ffi_Int32_FFI>>(
            'c_QPixmap__save_QString_char_int')
        .asFunction();
    return func(thisCpp, fileName?.toNativeUtf8() ?? ffi.nullptr,
            format?.toNativeUtf8() ?? ffi.nullptr, quality) !=
        0;
  } // scaled(const QSize & s) const

  QPixmap scaled(QSize? s) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QPixmap__scaled_QSize')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, s == null ? ffi.nullptr : s.thisCpp);
    return QPixmap.fromCppPointer(result, true);
  } // scaled(int w, int h) const

  QPixmap scaled_2(int w, int h) {
    final voidstar_Func_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPixmap__scaled_int_int')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, w, h);
    return QPixmap.fromCppPointer(result, true);
  } // scaledToHeight(int h) const

  QPixmap scaledToHeight(int h) {
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            'c_QPixmap__scaledToHeight_int')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, h);
    return QPixmap.fromCppPointer(result, true);
  } // scaledToWidth(int w) const

  QPixmap scaledToWidth(int w) {
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            'c_QPixmap__scaledToWidth_int')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, w);
    return QPixmap.fromCppPointer(result, true);
  } // scroll(int dx, int dy, const QRect & rect, QRegion * exposed)

  scroll(int dx, int dy, QRect? rect, {QRegion? exposed}) {
    final void_Func_voidstar_int_int_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_voidstar_FFI>>(
            'c_QPixmap__scroll_int_int_QRect_QRegion')
        .asFunction();
    func(thisCpp, dx, dy, rect == null ? ffi.nullptr : rect.thisCpp,
        exposed == null ? ffi.nullptr : exposed.thisCpp);
  } // scroll(int dx, int dy, int x, int y, int width, int height, QRegion * exposed)

  scroll_2(int dx, int dy, int x, int y, int width, int height,
      {QRegion? exposed}) {
    final void_Func_voidstar_int_int_int_int_int_int_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_voidstar_FFI>>(
            'c_QPixmap__scroll_int_int_int_int_int_int_QRegion')
        .asFunction();
    func(thisCpp, dx, dy, x, y, width, height,
        exposed == null ? ffi.nullptr : exposed.thisCpp);
  } // setDevicePixelRatio(qreal scaleFactor)

  setDevicePixelRatio(double scaleFactor) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QPixmap__setDevicePixelRatio_qreal')
        .asFunction();
    func(thisCpp, scaleFactor);
  } // size() const

  QSize size() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPixmap__size')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  } // width() const

  int width() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QPixmap__width')
        .asFunction();
    return func(thisCpp);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPixmap__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 695:
        return "c_QPixmap__devType";
    }
    return "";
  }

  static String methodNameFromId(int methodId) {
    switch (methodId) {
      case 695:
        return "devType";
    }
    throw Error();
  }

  void registerCallbacks() {
    assert(thisCpp != null);
    final RegisterMethodIsReimplementedCallback registerCallback = _dylib
        .lookup<ffi.NativeFunction<RegisterMethodIsReimplementedCallback_FFI>>(
            'c_QPixmap__registerVirtualMethodCallback')
        .asFunction();
    const callbackExcept695 = 0;
    final callback695 = ffi.Pointer.fromFunction<int_Func_voidstar_FFI>(
        QPixmap.devType_calledFromC, callbackExcept695);
    registerCallback(thisCpp, callback695, 695);
  }
}
