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

class QIcon_Mode {
  static const Normal = 0;
  static const Disabled = 1;
  static const Active = 2;
  static const Selected = 3;
}

class QIcon_State {
  static const On = 0;
  static const Off = 1;
}

class QIcon implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QIcon>();
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

  factory QIcon.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
        QIcon.fromCppPointer(cppPointer, needsAutoDelete)) as QIcon;
  }
  QIcon.fromCppPointer(var cppPointer, [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QIcon.init() {}
  String getFinalizerName() {
    return "c_QIcon_Finalizer";
  } //QIcon()

  QIcon() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QIcon__constructor')
        .asFunction();
    thisCpp = func();
    QIcon.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QIcon(const QPixmap & pixmap)
  QIcon.ctor2(QPixmap pixmap) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QIcon__constructor_QPixmap')
        .asFunction();
    thisCpp = func(pixmap == null ? ffi.nullptr : pixmap.thisCpp);
    QIcon.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QIcon(const QString & fileName)
  QIcon.ctor3(String? fileName) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QIcon__constructor_QString')
        .asFunction();
    thisCpp = func(fileName?.toNativeUtf8() ?? ffi.nullptr);
    QIcon.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } // actualSize(const QSize & size, QIcon::Mode mode, QIcon::State state) const
  QSize actualSize(QSize? size,
      {int mode = QIcon_Mode.Normal, int state = QIcon_State.Off}) {
    final voidstar_Func_voidstar_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QIcon__actualSize_QSize_Mode_State')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, size == null ? ffi.nullptr : size.thisCpp, mode, state);
    return QSize.fromCppPointer(result, true);
  } // addFile(const QString & fileName, const QSize & size, QIcon::Mode mode, QIcon::State state)

  addFile(String? fileName,
      {required QSize? size,
      int mode = QIcon_Mode.Normal,
      int state = QIcon_State.Off}) {
    final void_Func_voidstar_voidstar_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QIcon__addFile_QString_QSize_Mode_State')
        .asFunction();
    func(thisCpp, fileName?.toNativeUtf8() ?? ffi.nullptr,
        size == null ? ffi.nullptr : size.thisCpp, mode, state);
  } // addPixmap(const QPixmap & pixmap, QIcon::Mode mode, QIcon::State state)

  addPixmap(QPixmap pixmap,
      {int mode = QIcon_Mode.Normal, int state = QIcon_State.Off}) {
    final void_Func_voidstar_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QIcon__addPixmap_QPixmap_Mode_State')
        .asFunction();
    func(thisCpp, pixmap == null ? ffi.nullptr : pixmap.thisCpp, mode, state);
  } // availableSizes(QIcon::Mode mode, QIcon::State state) const

  QList availableSizes(
      {int mode = QIcon_Mode.Normal, int state = QIcon_State.Off}) {
    final voidstar_Func_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QIcon__availableSizes_Mode_State')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, mode, state);
    return QList<QSize>.fromCppPointer(result, true);
  } // detach()

  detach() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QIcon__detach')
        .asFunction();
    func(thisCpp);
  }

  static // fallbackSearchPaths()
      QList fallbackSearchPaths() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QIcon__fallbackSearchPaths')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QList<QString>.fromCppPointer(result, true);
  }

  static // fallbackThemeName()
      QString fallbackThemeName() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QIcon__fallbackThemeName')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QString.fromCppPointer(result, true);
  }

  static // fromTheme(const QString & name)
      QIcon fromTheme(String? name) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_static_QIcon__fromTheme_QString')
        .asFunction();
    ffi.Pointer<void> result = func(name?.toNativeUtf8() ?? ffi.nullptr);
    return QIcon.fromCppPointer(result, true);
  }

  static // fromTheme(const QString & name, const QIcon & fallback)
      QIcon fromTheme_2(String? name, QIcon fallback) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_static_QIcon__fromTheme_QString_QIcon')
        .asFunction();
    ffi.Pointer<void> result = func(name?.toNativeUtf8() ?? ffi.nullptr,
        fallback == null ? ffi.nullptr : fallback.thisCpp);
    return QIcon.fromCppPointer(result, true);
  }

  static // hasThemeIcon(const QString & name)
      bool hasThemeIcon(String? name) {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_static_QIcon__hasThemeIcon_QString')
        .asFunction();
    return func(name?.toNativeUtf8() ?? ffi.nullptr) != 0;
  } // isDetached() const

  bool isDetached() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QIcon__isDetached')
        .asFunction();
    return func(thisCpp) != 0;
  } // isMask() const

  bool isMask() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>('c_QIcon__isMask')
        .asFunction();
    return func(thisCpp) != 0;
  } // isNull() const

  bool isNull() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>('c_QIcon__isNull')
        .asFunction();
    return func(thisCpp) != 0;
  } // name() const

  QString name() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>('c_QIcon__name')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // paint(QPainter * painter, const QRect & rect) const

  paint(QPainter? painter, QRect? rect) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QIcon__paint_QPainter_QRect')
        .asFunction();
    func(thisCpp, painter == null ? ffi.nullptr : painter.thisCpp,
        rect == null ? ffi.nullptr : rect.thisCpp);
  } // paint(QPainter * painter, int x, int y, int w, int h) const

  paint_2(QPainter? painter, int x, int y, int w, int h) {
    final void_Func_voidstar_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QIcon__paint_QPainter_int_int_int_int')
        .asFunction();
    func(thisCpp, painter == null ? ffi.nullptr : painter.thisCpp, x, y, w, h);
  } // pixmap(const QSize & size, QIcon::Mode mode, QIcon::State state) const

  QPixmap pixmap(QSize? size,
      {int mode = QIcon_Mode.Normal, int state = QIcon_State.Off}) {
    final voidstar_Func_voidstar_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QIcon__pixmap_QSize_Mode_State')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, size == null ? ffi.nullptr : size.thisCpp, mode, state);
    return QPixmap.fromCppPointer(result, true);
  } // pixmap(const QSize & size, qreal devicePixelRatio, QIcon::Mode mode, QIcon::State state) const

  QPixmap pixmap_2(QSize? size, double devicePixelRatio,
      {int mode = QIcon_Mode.Normal, int state = QIcon_State.Off}) {
    final voidstar_Func_voidstar_voidstar_double_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_voidstar_ffi_Double_ffi_Int32_ffi_Int32_FFI>>(
            'c_QIcon__pixmap_QSize_qreal_Mode_State')
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        size == null ? ffi.nullptr : size.thisCpp,
        devicePixelRatio,
        mode,
        state);
    return QPixmap.fromCppPointer(result, true);
  } // pixmap(int extent, QIcon::Mode mode, QIcon::State state) const

  QPixmap pixmap_3(int extent,
      {int mode = QIcon_Mode.Normal, int state = QIcon_State.Off}) {
    final voidstar_Func_voidstar_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QIcon__pixmap_int_Mode_State')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, extent, mode, state);
    return QPixmap.fromCppPointer(result, true);
  } // pixmap(int w, int h, QIcon::Mode mode, QIcon::State state) const

  QPixmap pixmap_4(int w, int h,
      {int mode = QIcon_Mode.Normal, int state = QIcon_State.Off}) {
    final voidstar_Func_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QIcon__pixmap_int_int_Mode_State')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, w, h, mode, state);
    return QPixmap.fromCppPointer(result, true);
  }

  static // setFallbackSearchPaths(const QList<QString > & paths)
      setFallbackSearchPaths(QList? paths) {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_static_QIcon__setFallbackSearchPaths_QList_QString')
        .asFunction();
    func(paths == null ? ffi.nullptr : paths.thisCpp);
  }

  static // setFallbackThemeName(const QString & name)
      setFallbackThemeName(String? name) {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_static_QIcon__setFallbackThemeName_QString')
        .asFunction();
    func(name?.toNativeUtf8() ?? ffi.nullptr);
  } // setIsMask(bool isMask)

  setIsMask(bool isMask) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QIcon__setIsMask_bool')
        .asFunction();
    func(thisCpp, isMask ? 1 : 0);
  }

  static // setThemeName(const QString & path)
      setThemeName(String? path) {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_static_QIcon__setThemeName_QString')
        .asFunction();
    func(path?.toNativeUtf8() ?? ffi.nullptr);
  }

  static // setThemeSearchPaths(const QList<QString > & searchpath)
      setThemeSearchPaths(QList? searchpath) {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_static_QIcon__setThemeSearchPaths_QList_QString')
        .asFunction();
    func(searchpath == null ? ffi.nullptr : searchpath.thisCpp);
  }

  static // themeName()
      QString themeName() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QIcon__themeName')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QString.fromCppPointer(result, true);
  }

  static // themeSearchPaths()
      QList themeSearchPaths() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QIcon__themeSearchPaths')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QList<QString>.fromCppPointer(result, true);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QIcon__destructor')
        .asFunction();
    func(thisCpp);
  }
}
