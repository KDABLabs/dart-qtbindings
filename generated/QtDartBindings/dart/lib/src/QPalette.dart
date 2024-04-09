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

class QPalette_ColorGroup {
  static const Active = 0;
  static const Disabled = 1;
  static const Inactive = 2;
  static const NColorGroups = 3;
  static const Current = 4;
  static const All = 5;
  static const Normal = 0;
}

class QPalette_ColorRole {
  static const WindowText = 0;
  static const Button = 1;
  static const Light = 2;
  static const Midlight = 3;
  static const Dark = 4;
  static const Mid = 5;
  static const Text = 6;
  static const BrightText = 7;
  static const ButtonText = 8;
  static const Base = 9;
  static const Window = 10;
  static const Shadow = 11;
  static const Highlight = 12;
  static const HighlightedText = 13;
  static const Link = 14;
  static const LinkVisited = 15;
  static const AlternateBase = 16;
  static const NoRole = 17;
  static const ToolTipBase = 18;
  static const ToolTipText = 19;
  static const PlaceholderText = 20;
  static const NColorRoles = 21;
}

class QPalette implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QPalette>();
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

  factory QPalette.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
        QPalette.fromCppPointer(cppPointer, needsAutoDelete)) as QPalette;
  }
  QPalette.fromCppPointer(var cppPointer, [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QPalette.init() {}
  String getFinalizerName() {
    return "c_QPalette_Finalizer";
  } //QPalette()

  QPalette() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QPalette__constructor')
        .asFunction();
    thisCpp = func();
    QPalette.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QPalette(const QBrush & windowText, const QBrush & button, const QBrush & light, const QBrush & dark, const QBrush & mid, const QBrush & text, const QBrush & bright_text, const QBrush & base, const QBrush & window)
  QPalette.ctor2(QBrush windowText, QBrush button, QBrush light, QBrush dark,
      QBrush mid, QBrush text, QBrush bright_text, QBrush base, QBrush window) {
    final voidstar_Func_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar
        func = _dylib
            .lookup<
                    ffi.NativeFunction<
                        voidstar_Func_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_FFI>>(
                'c_QPalette__constructor_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush')
            .asFunction();
    thisCpp = func(
        windowText == null ? ffi.nullptr : windowText.thisCpp,
        button == null ? ffi.nullptr : button.thisCpp,
        light == null ? ffi.nullptr : light.thisCpp,
        dark == null ? ffi.nullptr : dark.thisCpp,
        mid == null ? ffi.nullptr : mid.thisCpp,
        text == null ? ffi.nullptr : text.thisCpp,
        bright_text == null ? ffi.nullptr : bright_text.thisCpp,
        base == null ? ffi.nullptr : base.thisCpp,
        window == null ? ffi.nullptr : window.thisCpp);
    QPalette.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QPalette(const QColor & button)
  QPalette.ctor3(QColor? button) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPalette__constructor_QColor')
        .asFunction();
    thisCpp = func(button == null ? ffi.nullptr : button.thisCpp);
    QPalette.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QPalette(const QColor & button, const QColor & window)
  QPalette.ctor4(QColor? button, QColor? window) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QPalette__constructor_QColor_QColor')
        .asFunction();
    thisCpp = func(button == null ? ffi.nullptr : button.thisCpp,
        window == null ? ffi.nullptr : window.thisCpp);
    QPalette.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QPalette(const QColor & windowText, const QColor & window, const QColor & light, const QColor & dark, const QColor & mid, const QColor & text, const QColor & base)
  QPalette.ctor5(QColor? windowText, QColor? window, QColor? light,
      QColor? dark, QColor? mid, QColor? text, QColor? base) {
    final voidstar_Func_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar
        func = _dylib
            .lookup<
                    ffi.NativeFunction<
                        voidstar_Func_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_FFI>>(
                'c_QPalette__constructor_QColor_QColor_QColor_QColor_QColor_QColor_QColor')
            .asFunction();
    thisCpp = func(
        windowText == null ? ffi.nullptr : windowText.thisCpp,
        window == null ? ffi.nullptr : window.thisCpp,
        light == null ? ffi.nullptr : light.thisCpp,
        dark == null ? ffi.nullptr : dark.thisCpp,
        mid == null ? ffi.nullptr : mid.thisCpp,
        text == null ? ffi.nullptr : text.thisCpp,
        base == null ? ffi.nullptr : base.thisCpp);
    QPalette.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } // alternateBase() const
  QBrush alternateBase() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPalette__alternateBase')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QBrush.fromCppPointer(result, false);
  } // base() const

  QBrush base() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPalette__base')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QBrush.fromCppPointer(result, false);
  } // brightText() const

  QBrush brightText() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPalette__brightText')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QBrush.fromCppPointer(result, false);
  } // brush(QPalette::ColorGroup cg, QPalette::ColorRole cr) const

  QBrush brush(int cg, int cr) {
    final voidstar_Func_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPalette__brush_ColorGroup_ColorRole')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, cg, cr);
    return QBrush.fromCppPointer(result, false);
  } // brush(QPalette::ColorRole cr) const

  QBrush brush_2(int cr) {
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            'c_QPalette__brush_ColorRole')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, cr);
    return QBrush.fromCppPointer(result, false);
  } // button() const

  QBrush button() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPalette__button')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QBrush.fromCppPointer(result, false);
  } // buttonText() const

  QBrush buttonText() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPalette__buttonText')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QBrush.fromCppPointer(result, false);
  } // color(QPalette::ColorGroup cg, QPalette::ColorRole cr) const

  QColor color(int cg, int cr) {
    final voidstar_Func_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPalette__color_ColorGroup_ColorRole')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, cg, cr);
    return QColor.fromCppPointer(result, false);
  } // color(QPalette::ColorRole cr) const

  QColor color_2(int cr) {
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            'c_QPalette__color_ColorRole')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, cr);
    return QColor.fromCppPointer(result, false);
  } // currentColorGroup() const

  int currentColorGroup() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QPalette__currentColorGroup')
        .asFunction();
    return func(thisCpp);
  } // dark() const

  QBrush dark() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPalette__dark')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QBrush.fromCppPointer(result, false);
  } // detach()

  detach() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPalette__detach')
        .asFunction();
    func(thisCpp);
  } // highlight() const

  QBrush highlight() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPalette__highlight')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QBrush.fromCppPointer(result, false);
  } // highlightedText() const

  QBrush highlightedText() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPalette__highlightedText')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QBrush.fromCppPointer(result, false);
  } // init()

  init() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QPalette__init')
        .asFunction();
    func(thisCpp);
  } // isBrushSet(QPalette::ColorGroup cg, QPalette::ColorRole cr) const

  bool isBrushSet(int cg, int cr) {
    final bool_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPalette__isBrushSet_ColorGroup_ColorRole')
        .asFunction();
    return func(thisCpp, cg, cr) != 0;
  } // isCopyOf(const QPalette & p) const

  bool isCopyOf(QPalette p) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QPalette__isCopyOf_QPalette')
        .asFunction();
    return func(thisCpp, p == null ? ffi.nullptr : p.thisCpp) != 0;
  } // isEqual(QPalette::ColorGroup cr1, QPalette::ColorGroup cr2) const

  bool isEqual(int cr1, int cr2) {
    final bool_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPalette__isEqual_ColorGroup_ColorGroup')
        .asFunction();
    return func(thisCpp, cr1, cr2) != 0;
  } // light() const

  QBrush light() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPalette__light')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QBrush.fromCppPointer(result, false);
  } // link() const

  QBrush link() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPalette__link')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QBrush.fromCppPointer(result, false);
  } // linkVisited() const

  QBrush linkVisited() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPalette__linkVisited')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QBrush.fromCppPointer(result, false);
  } // mid() const

  QBrush mid() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPalette__mid')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QBrush.fromCppPointer(result, false);
  } // midlight() const

  QBrush midlight() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPalette__midlight')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QBrush.fromCppPointer(result, false);
  } // placeholderText() const

  QBrush placeholderText() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPalette__placeholderText')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QBrush.fromCppPointer(result, false);
  } // resolve(const QPalette & other) const

  QPalette resolve(QPalette other) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QPalette__resolve_QPalette')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, other == null ? ffi.nullptr : other.thisCpp);
    return QPalette.fromCppPointer(result, true);
  } // setBrush(QPalette::ColorGroup cg, QPalette::ColorRole cr, const QBrush & brush)

  setBrush(int cg, int cr, QBrush brush) {
    final void_Func_voidstar_int_int_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>>(
            'c_QPalette__setBrush_ColorGroup_ColorRole_QBrush')
        .asFunction();
    func(thisCpp, cg, cr, brush == null ? ffi.nullptr : brush.thisCpp);
  } // setBrush(QPalette::ColorRole cr, const QBrush & brush)

  setBrush_2(int cr, QBrush brush) {
    final void_Func_voidstar_int_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_voidstar_FFI>>(
            'c_QPalette__setBrush_ColorRole_QBrush')
        .asFunction();
    func(thisCpp, cr, brush == null ? ffi.nullptr : brush.thisCpp);
  } // setColor(QPalette::ColorGroup cg, QPalette::ColorRole cr, const QColor & color)

  setColor(int cg, int cr, QColor? color) {
    final void_Func_voidstar_int_int_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>>(
            'c_QPalette__setColor_ColorGroup_ColorRole_QColor')
        .asFunction();
    func(thisCpp, cg, cr, color == null ? ffi.nullptr : color.thisCpp);
  } // setColor(QPalette::ColorRole cr, const QColor & color)

  setColor_2(int cr, QColor? color) {
    final void_Func_voidstar_int_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_voidstar_FFI>>(
            'c_QPalette__setColor_ColorRole_QColor')
        .asFunction();
    func(thisCpp, cr, color == null ? ffi.nullptr : color.thisCpp);
  } // setColorGroup(QPalette::ColorGroup cr, const QBrush & windowText, const QBrush & button, const QBrush & light, const QBrush & dark, const QBrush & mid, const QBrush & text, const QBrush & bright_text, const QBrush & base, const QBrush & alternate_base, const QBrush & window, const QBrush & midlight, const QBrush & button_text, const QBrush & shadow, const QBrush & highlight, const QBrush & highlighted_text, const QBrush & link, const QBrush & link_visited)

  setColorGroup(
      int cr,
      QBrush windowText,
      QBrush button,
      QBrush light,
      QBrush dark,
      QBrush mid,
      QBrush text,
      QBrush bright_text,
      QBrush base,
      QBrush alternate_base,
      QBrush window,
      QBrush midlight,
      QBrush button_text,
      QBrush shadow,
      QBrush highlight,
      QBrush highlighted_text,
      QBrush link,
      QBrush link_visited) {
    final void_Func_voidstar_int_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar
        func = _dylib
            .lookup<
                    ffi.NativeFunction<
                        void_Func_voidstar_ffi_Int32_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_FFI>>(
                'c_QPalette__setColorGroup_ColorGroup_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush')
            .asFunction();
    func(
        thisCpp,
        cr,
        windowText == null ? ffi.nullptr : windowText.thisCpp,
        button == null ? ffi.nullptr : button.thisCpp,
        light == null ? ffi.nullptr : light.thisCpp,
        dark == null ? ffi.nullptr : dark.thisCpp,
        mid == null ? ffi.nullptr : mid.thisCpp,
        text == null ? ffi.nullptr : text.thisCpp,
        bright_text == null ? ffi.nullptr : bright_text.thisCpp,
        base == null ? ffi.nullptr : base.thisCpp,
        alternate_base == null ? ffi.nullptr : alternate_base.thisCpp,
        window == null ? ffi.nullptr : window.thisCpp,
        midlight == null ? ffi.nullptr : midlight.thisCpp,
        button_text == null ? ffi.nullptr : button_text.thisCpp,
        shadow == null ? ffi.nullptr : shadow.thisCpp,
        highlight == null ? ffi.nullptr : highlight.thisCpp,
        highlighted_text == null ? ffi.nullptr : highlighted_text.thisCpp,
        link == null ? ffi.nullptr : link.thisCpp,
        link_visited == null ? ffi.nullptr : link_visited.thisCpp);
  } // setColorGroup(QPalette::ColorGroup cr, const QBrush & windowText, const QBrush & button, const QBrush & light, const QBrush & dark, const QBrush & mid, const QBrush & text, const QBrush & bright_text, const QBrush & base, const QBrush & alternate_base, const QBrush & window, const QBrush & midlight, const QBrush & button_text, const QBrush & shadow, const QBrush & highlight, const QBrush & highlighted_text, const QBrush & link, const QBrush & link_visited, const QBrush & toolTipBase, const QBrush & toolTipText)

  setColorGroup_2(
      int cr,
      QBrush windowText,
      QBrush button,
      QBrush light,
      QBrush dark,
      QBrush mid,
      QBrush text,
      QBrush bright_text,
      QBrush base,
      QBrush alternate_base,
      QBrush window,
      QBrush midlight,
      QBrush button_text,
      QBrush shadow,
      QBrush highlight,
      QBrush highlighted_text,
      QBrush link,
      QBrush link_visited,
      QBrush toolTipBase,
      QBrush toolTipText) {
    final void_Func_voidstar_int_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar
        func = _dylib
            .lookup<
                    ffi.NativeFunction<
                        void_Func_voidstar_ffi_Int32_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_FFI>>(
                'c_QPalette__setColorGroup_ColorGroup_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush')
            .asFunction();
    func(
        thisCpp,
        cr,
        windowText == null ? ffi.nullptr : windowText.thisCpp,
        button == null ? ffi.nullptr : button.thisCpp,
        light == null ? ffi.nullptr : light.thisCpp,
        dark == null ? ffi.nullptr : dark.thisCpp,
        mid == null ? ffi.nullptr : mid.thisCpp,
        text == null ? ffi.nullptr : text.thisCpp,
        bright_text == null ? ffi.nullptr : bright_text.thisCpp,
        base == null ? ffi.nullptr : base.thisCpp,
        alternate_base == null ? ffi.nullptr : alternate_base.thisCpp,
        window == null ? ffi.nullptr : window.thisCpp,
        midlight == null ? ffi.nullptr : midlight.thisCpp,
        button_text == null ? ffi.nullptr : button_text.thisCpp,
        shadow == null ? ffi.nullptr : shadow.thisCpp,
        highlight == null ? ffi.nullptr : highlight.thisCpp,
        highlighted_text == null ? ffi.nullptr : highlighted_text.thisCpp,
        link == null ? ffi.nullptr : link.thisCpp,
        link_visited == null ? ffi.nullptr : link_visited.thisCpp,
        toolTipBase == null ? ffi.nullptr : toolTipBase.thisCpp,
        toolTipText == null ? ffi.nullptr : toolTipText.thisCpp);
  } // setColorGroup(QPalette::ColorGroup cr, const QBrush & windowText, const QBrush & button, const QBrush & light, const QBrush & dark, const QBrush & mid, const QBrush & text, const QBrush & bright_text, const QBrush & base, const QBrush & window)

  setColorGroup_3(
      int cr,
      QBrush windowText,
      QBrush button,
      QBrush light,
      QBrush dark,
      QBrush mid,
      QBrush text,
      QBrush bright_text,
      QBrush base,
      QBrush window) {
    final void_Func_voidstar_int_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar
        func = _dylib
            .lookup<
                    ffi.NativeFunction<
                        void_Func_voidstar_ffi_Int32_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_voidstar_FFI>>(
                'c_QPalette__setColorGroup_ColorGroup_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush')
            .asFunction();
    func(
        thisCpp,
        cr,
        windowText == null ? ffi.nullptr : windowText.thisCpp,
        button == null ? ffi.nullptr : button.thisCpp,
        light == null ? ffi.nullptr : light.thisCpp,
        dark == null ? ffi.nullptr : dark.thisCpp,
        mid == null ? ffi.nullptr : mid.thisCpp,
        text == null ? ffi.nullptr : text.thisCpp,
        bright_text == null ? ffi.nullptr : bright_text.thisCpp,
        base == null ? ffi.nullptr : base.thisCpp,
        window == null ? ffi.nullptr : window.thisCpp);
  } // setCurrentColorGroup(QPalette::ColorGroup cg)

  setCurrentColorGroup(int cg) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QPalette__setCurrentColorGroup_ColorGroup')
        .asFunction();
    func(thisCpp, cg);
  } // shadow() const

  QBrush shadow() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPalette__shadow')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QBrush.fromCppPointer(result, false);
  } // text() const

  QBrush text() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPalette__text')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QBrush.fromCppPointer(result, false);
  } // toolTipBase() const

  QBrush toolTipBase() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPalette__toolTipBase')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QBrush.fromCppPointer(result, false);
  } // toolTipText() const

  QBrush toolTipText() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPalette__toolTipText')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QBrush.fromCppPointer(result, false);
  } // window() const

  QBrush window() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPalette__window')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QBrush.fromCppPointer(result, false);
  } // windowText() const

  QBrush windowText() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPalette__windowText')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QBrush.fromCppPointer(result, false);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPalette__destructor')
        .asFunction();
    func(thisCpp);
  }
}
