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

class QRectF implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QRectF>();
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

  factory QRectF.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
        QRectF.fromCppPointer(cppPointer, needsAutoDelete)) as QRectF;
  }
  QRectF.fromCppPointer(var cppPointer, [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QRectF.init() {}
  String getFinalizerName() {
    return "c_QRectF_Finalizer";
  } //QRectF()

  QRectF() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QRectF__constructor')
        .asFunction();
    thisCpp = func();
    QRectF.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QRectF(const QPointF & topleft, const QPointF & bottomRight)
  QRectF.ctor2(QPointF? topleft, QPointF? bottomRight) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QRectF__constructor_QPointF_QPointF')
        .asFunction();
    thisCpp = func(topleft == null ? ffi.nullptr : topleft.thisCpp,
        bottomRight == null ? ffi.nullptr : bottomRight.thisCpp);
    QRectF.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QRectF(const QPointF & topleft, const QSizeF & size)
  QRectF.ctor3(QPointF? topleft, QSizeF? size) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QRectF__constructor_QPointF_QSizeF')
        .asFunction();
    thisCpp = func(topleft == null ? ffi.nullptr : topleft.thisCpp,
        size == null ? ffi.nullptr : size.thisCpp);
    QRectF.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QRectF(const QRect & rect)
  QRectF.ctor4(QRect? rect) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QRectF__constructor_QRect')
        .asFunction();
    thisCpp = func(rect == null ? ffi.nullptr : rect.thisCpp);
    QRectF.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QRectF(qreal left, qreal top, qreal width, qreal height)
  QRectF.ctor5(double left, double top, double width, double height) {
    final voidstar_Func_double_double_double_double func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_ffi_Double_ffi_Double_ffi_Double_ffi_Double_FFI>>(
            'c_QRectF__constructor_qreal_qreal_qreal_qreal')
        .asFunction();
    thisCpp = func(left, top, width, height);
    QRectF.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } // adjust(qreal x1, qreal y1, qreal x2, qreal y2)
  adjust(double x1, double y1, double x2, double y2) {
    final void_Func_voidstar_double_double_double_double func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Double_ffi_Double_ffi_Double_ffi_Double_FFI>>(
            'c_QRectF__adjust_qreal_qreal_qreal_qreal')
        .asFunction();
    func(thisCpp, x1, y1, x2, y2);
  } // adjusted(qreal x1, qreal y1, qreal x2, qreal y2) const

  QRectF adjusted(double x1, double y1, double x2, double y2) {
    final voidstar_Func_voidstar_double_double_double_double func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Double_ffi_Double_ffi_Double_ffi_Double_FFI>>(
            'c_QRectF__adjusted_qreal_qreal_qreal_qreal')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, x1, y1, x2, y2);
    return QRectF.fromCppPointer(result, true);
  } // bottom() const

  double bottom() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QRectF__bottom')
        .asFunction();
    return func(thisCpp);
  } // bottomLeft() const

  QPointF bottomLeft() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QRectF__bottomLeft')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPointF.fromCppPointer(result, true);
  } // bottomRight() const

  QPointF bottomRight() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QRectF__bottomRight')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPointF.fromCppPointer(result, true);
  } // center() const

  QPointF center() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QRectF__center')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPointF.fromCppPointer(result, true);
  } // contains(const QPointF & p) const

  bool contains(QPointF? p) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QRectF__contains_QPointF')
        .asFunction();
    return func(thisCpp, p == null ? ffi.nullptr : p.thisCpp) != 0;
  } // contains(const QRectF & r) const

  bool contains_2(QRectF? r) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QRectF__contains_QRectF')
        .asFunction();
    return func(thisCpp, r == null ? ffi.nullptr : r.thisCpp) != 0;
  } // contains(qreal x, qreal y) const

  bool contains_3(double x, double y) {
    final bool_Func_voidstar_double_double func = _dylib
        .lookup<
                ffi
                .NativeFunction<bool_Func_voidstar_ffi_Double_ffi_Double_FFI>>(
            'c_QRectF__contains_qreal_qreal')
        .asFunction();
    return func(thisCpp, x, y) != 0;
  } // height() const

  double height() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QRectF__height')
        .asFunction();
    return func(thisCpp);
  } // intersected(const QRectF & other) const

  QRectF intersected(QRectF? other) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QRectF__intersected_QRectF')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, other == null ? ffi.nullptr : other.thisCpp);
    return QRectF.fromCppPointer(result, true);
  } // intersects(const QRectF & r) const

  bool intersects(QRectF? r) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QRectF__intersects_QRectF')
        .asFunction();
    return func(thisCpp, r == null ? ffi.nullptr : r.thisCpp) != 0;
  } // isEmpty() const

  bool isEmpty() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>('c_QRectF__isEmpty')
        .asFunction();
    return func(thisCpp) != 0;
  } // isNull() const

  bool isNull() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>('c_QRectF__isNull')
        .asFunction();
    return func(thisCpp) != 0;
  } // isValid() const

  bool isValid() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>('c_QRectF__isValid')
        .asFunction();
    return func(thisCpp) != 0;
  } // left() const

  double left() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>('c_QRectF__left')
        .asFunction();
    return func(thisCpp);
  } // moveBottom(qreal pos)

  moveBottom(double pos) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QRectF__moveBottom_qreal')
        .asFunction();
    func(thisCpp, pos);
  } // moveBottomLeft(const QPointF & p)

  moveBottomLeft(QPointF? p) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QRectF__moveBottomLeft_QPointF')
        .asFunction();
    func(thisCpp, p == null ? ffi.nullptr : p.thisCpp);
  } // moveBottomRight(const QPointF & p)

  moveBottomRight(QPointF? p) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QRectF__moveBottomRight_QPointF')
        .asFunction();
    func(thisCpp, p == null ? ffi.nullptr : p.thisCpp);
  } // moveCenter(const QPointF & p)

  moveCenter(QPointF? p) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QRectF__moveCenter_QPointF')
        .asFunction();
    func(thisCpp, p == null ? ffi.nullptr : p.thisCpp);
  } // moveLeft(qreal pos)

  moveLeft(double pos) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QRectF__moveLeft_qreal')
        .asFunction();
    func(thisCpp, pos);
  } // moveRight(qreal pos)

  moveRight(double pos) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QRectF__moveRight_qreal')
        .asFunction();
    func(thisCpp, pos);
  } // moveTo(const QPointF & p)

  moveTo(QPointF? p) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QRectF__moveTo_QPointF')
        .asFunction();
    func(thisCpp, p == null ? ffi.nullptr : p.thisCpp);
  } // moveTo(qreal x, qreal y)

  moveTo_2(double x, double y) {
    final void_Func_voidstar_double_double func = _dylib
        .lookup<
                ffi
                .NativeFunction<void_Func_voidstar_ffi_Double_ffi_Double_FFI>>(
            'c_QRectF__moveTo_qreal_qreal')
        .asFunction();
    func(thisCpp, x, y);
  } // moveTop(qreal pos)

  moveTop(double pos) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QRectF__moveTop_qreal')
        .asFunction();
    func(thisCpp, pos);
  } // moveTopLeft(const QPointF & p)

  moveTopLeft(QPointF? p) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QRectF__moveTopLeft_QPointF')
        .asFunction();
    func(thisCpp, p == null ? ffi.nullptr : p.thisCpp);
  } // moveTopRight(const QPointF & p)

  moveTopRight(QPointF? p) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QRectF__moveTopRight_QPointF')
        .asFunction();
    func(thisCpp, p == null ? ffi.nullptr : p.thisCpp);
  } // normalized() const

  QRectF normalized() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QRectF__normalized')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRectF.fromCppPointer(result, true);
  } // right() const

  double right() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>('c_QRectF__right')
        .asFunction();
    return func(thisCpp);
  } // setBottom(qreal pos)

  setBottom(double pos) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QRectF__setBottom_qreal')
        .asFunction();
    func(thisCpp, pos);
  } // setBottomLeft(const QPointF & p)

  setBottomLeft(QPointF? p) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QRectF__setBottomLeft_QPointF')
        .asFunction();
    func(thisCpp, p == null ? ffi.nullptr : p.thisCpp);
  } // setBottomRight(const QPointF & p)

  setBottomRight(QPointF? p) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QRectF__setBottomRight_QPointF')
        .asFunction();
    func(thisCpp, p == null ? ffi.nullptr : p.thisCpp);
  } // setCoords(qreal x1, qreal y1, qreal x2, qreal y2)

  setCoords(double x1, double y1, double x2, double y2) {
    final void_Func_voidstar_double_double_double_double func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Double_ffi_Double_ffi_Double_ffi_Double_FFI>>(
            'c_QRectF__setCoords_qreal_qreal_qreal_qreal')
        .asFunction();
    func(thisCpp, x1, y1, x2, y2);
  } // setHeight(qreal h)

  setHeight(double h) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QRectF__setHeight_qreal')
        .asFunction();
    func(thisCpp, h);
  } // setLeft(qreal pos)

  setLeft(double pos) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QRectF__setLeft_qreal')
        .asFunction();
    func(thisCpp, pos);
  } // setRect(qreal x, qreal y, qreal w, qreal h)

  setRect(double x, double y, double w, double h) {
    final void_Func_voidstar_double_double_double_double func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Double_ffi_Double_ffi_Double_ffi_Double_FFI>>(
            'c_QRectF__setRect_qreal_qreal_qreal_qreal')
        .asFunction();
    func(thisCpp, x, y, w, h);
  } // setRight(qreal pos)

  setRight(double pos) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QRectF__setRight_qreal')
        .asFunction();
    func(thisCpp, pos);
  } // setSize(const QSizeF & s)

  setSize(QSizeF? s) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QRectF__setSize_QSizeF')
        .asFunction();
    func(thisCpp, s == null ? ffi.nullptr : s.thisCpp);
  } // setTop(qreal pos)

  setTop(double pos) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QRectF__setTop_qreal')
        .asFunction();
    func(thisCpp, pos);
  } // setTopLeft(const QPointF & p)

  setTopLeft(QPointF? p) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QRectF__setTopLeft_QPointF')
        .asFunction();
    func(thisCpp, p == null ? ffi.nullptr : p.thisCpp);
  } // setTopRight(const QPointF & p)

  setTopRight(QPointF? p) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QRectF__setTopRight_QPointF')
        .asFunction();
    func(thisCpp, p == null ? ffi.nullptr : p.thisCpp);
  } // setWidth(qreal w)

  setWidth(double w) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QRectF__setWidth_qreal')
        .asFunction();
    func(thisCpp, w);
  } // setX(qreal pos)

  setX(double pos) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QRectF__setX_qreal')
        .asFunction();
    func(thisCpp, pos);
  } // setY(qreal pos)

  setY(double pos) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QRectF__setY_qreal')
        .asFunction();
    func(thisCpp, pos);
  } // size() const

  QSizeF size() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QRectF__size')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSizeF.fromCppPointer(result, true);
  } // toAlignedRect() const

  QRect toAlignedRect() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QRectF__toAlignedRect')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRect.fromCppPointer(result, true);
  } // toRect() const

  QRect toRect() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QRectF__toRect')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRect.fromCppPointer(result, true);
  } // top() const

  double top() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>('c_QRectF__top')
        .asFunction();
    return func(thisCpp);
  } // topLeft() const

  QPointF topLeft() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QRectF__topLeft')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPointF.fromCppPointer(result, true);
  } // topRight() const

  QPointF topRight() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QRectF__topRight')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPointF.fromCppPointer(result, true);
  } // translate(const QPointF & p)

  translate(QPointF? p) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QRectF__translate_QPointF')
        .asFunction();
    func(thisCpp, p == null ? ffi.nullptr : p.thisCpp);
  } // translate(qreal dx, qreal dy)

  translate_2(double dx, double dy) {
    final void_Func_voidstar_double_double func = _dylib
        .lookup<
                ffi
                .NativeFunction<void_Func_voidstar_ffi_Double_ffi_Double_FFI>>(
            'c_QRectF__translate_qreal_qreal')
        .asFunction();
    func(thisCpp, dx, dy);
  } // translated(const QPointF & p) const

  QRectF translated(QPointF? p) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QRectF__translated_QPointF')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, p == null ? ffi.nullptr : p.thisCpp);
    return QRectF.fromCppPointer(result, true);
  } // translated(qreal dx, qreal dy) const

  QRectF translated_2(double dx, double dy) {
    final voidstar_Func_voidstar_double_double func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Double_ffi_Double_FFI>>(
            'c_QRectF__translated_qreal_qreal')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, dx, dy);
    return QRectF.fromCppPointer(result, true);
  } // transposed() const

  QRectF transposed() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QRectF__transposed')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRectF.fromCppPointer(result, true);
  } // united(const QRectF & other) const

  QRectF united(QRectF? other) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QRectF__united_QRectF')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, other == null ? ffi.nullptr : other.thisCpp);
    return QRectF.fromCppPointer(result, true);
  } // width() const

  double width() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>('c_QRectF__width')
        .asFunction();
    return func(thisCpp);
  } // x() const

  double x() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>('c_QRectF__x')
        .asFunction();
    return func(thisCpp);
  } // y() const

  double y() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>('c_QRectF__y')
        .asFunction();
    return func(thisCpp);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QRectF__destructor')
        .asFunction();
    func(thisCpp);
  }
}
