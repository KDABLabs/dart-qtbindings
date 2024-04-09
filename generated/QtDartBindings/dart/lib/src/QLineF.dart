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

class QLineF implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QLineF>();
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

  factory QLineF.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
        QLineF.fromCppPointer(cppPointer, needsAutoDelete)) as QLineF;
  }
  QLineF.fromCppPointer(var cppPointer, [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QLineF.init() {}
  String getFinalizerName() {
    return "c_QLineF_Finalizer";
  } //QLineF()

  QLineF() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QLineF__constructor')
        .asFunction();
    thisCpp = func();
    QLineF.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QLineF(const QLine & line)
  QLineF.ctor2(QLine? line) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QLineF__constructor_QLine')
        .asFunction();
    thisCpp = func(line == null ? ffi.nullptr : line.thisCpp);
    QLineF.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QLineF(const QPointF & pt1, const QPointF & pt2)
  QLineF.ctor3(QPointF? pt1, QPointF? pt2) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QLineF__constructor_QPointF_QPointF')
        .asFunction();
    thisCpp = func(pt1 == null ? ffi.nullptr : pt1.thisCpp,
        pt2 == null ? ffi.nullptr : pt2.thisCpp);
    QLineF.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QLineF(qreal x1, qreal y1, qreal x2, qreal y2)
  QLineF.ctor4(double x1, double y1, double x2, double y2) {
    final voidstar_Func_double_double_double_double func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_ffi_Double_ffi_Double_ffi_Double_ffi_Double_FFI>>(
            'c_QLineF__constructor_qreal_qreal_qreal_qreal')
        .asFunction();
    thisCpp = func(x1, y1, x2, y2);
    QLineF.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } // angle() const
  double angle() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>('c_QLineF__angle')
        .asFunction();
    return func(thisCpp);
  } // angleTo(const QLineF & l) const

  double angleTo(QLineF? l) {
    final double_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_voidstar_FFI>>(
            'c_QLineF__angleTo_QLineF')
        .asFunction();
    return func(thisCpp, l == null ? ffi.nullptr : l.thisCpp);
  } // center() const

  QPointF center() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QLineF__center')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPointF.fromCppPointer(result, true);
  } // dx() const

  double dx() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>('c_QLineF__dx')
        .asFunction();
    return func(thisCpp);
  } // dy() const

  double dy() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>('c_QLineF__dy')
        .asFunction();
    return func(thisCpp);
  }

  static // fromPolar(qreal length, qreal angle)
      QLineF fromPolar(double length, double angle) {
    final voidstar_Func_double_double func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_ffi_Double_ffi_Double_FFI>>(
            'c_static_QLineF__fromPolar_qreal_qreal')
        .asFunction();
    ffi.Pointer<void> result = func(length, angle);
    return QLineF.fromCppPointer(result, true);
  } // isNull() const

  bool isNull() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>('c_QLineF__isNull')
        .asFunction();
    return func(thisCpp) != 0;
  } // length() const

  double length() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QLineF__length')
        .asFunction();
    return func(thisCpp);
  } // normalVector() const

  QLineF normalVector() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QLineF__normalVector')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QLineF.fromCppPointer(result, true);
  } // p1() const

  QPointF p1() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>('c_QLineF__p1')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPointF.fromCppPointer(result, true);
  } // p2() const

  QPointF p2() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>('c_QLineF__p2')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPointF.fromCppPointer(result, true);
  } // pointAt(qreal t) const

  QPointF pointAt(double t) {
    final voidstar_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Double_FFI>>(
            'c_QLineF__pointAt_qreal')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, t);
    return QPointF.fromCppPointer(result, true);
  } // setAngle(qreal angle)

  setAngle(double angle) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QLineF__setAngle_qreal')
        .asFunction();
    func(thisCpp, angle);
  } // setLength(qreal len)

  setLength(double len) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QLineF__setLength_qreal')
        .asFunction();
    func(thisCpp, len);
  } // setLine(qreal x1, qreal y1, qreal x2, qreal y2)

  setLine(double x1, double y1, double x2, double y2) {
    final void_Func_voidstar_double_double_double_double func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Double_ffi_Double_ffi_Double_ffi_Double_FFI>>(
            'c_QLineF__setLine_qreal_qreal_qreal_qreal')
        .asFunction();
    func(thisCpp, x1, y1, x2, y2);
  } // setP1(const QPointF & p1)

  setP1(QPointF? p1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QLineF__setP1_QPointF')
        .asFunction();
    func(thisCpp, p1 == null ? ffi.nullptr : p1.thisCpp);
  } // setP2(const QPointF & p2)

  setP2(QPointF? p2) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QLineF__setP2_QPointF')
        .asFunction();
    func(thisCpp, p2 == null ? ffi.nullptr : p2.thisCpp);
  } // setPoints(const QPointF & p1, const QPointF & p2)

  setPoints(QPointF? p1, QPointF? p2) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QLineF__setPoints_QPointF_QPointF')
        .asFunction();
    func(thisCpp, p1 == null ? ffi.nullptr : p1.thisCpp,
        p2 == null ? ffi.nullptr : p2.thisCpp);
  } // toLine() const

  QLine toLine() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QLineF__toLine')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QLine.fromCppPointer(result, true);
  } // translate(const QPointF & p)

  translate(QPointF? p) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QLineF__translate_QPointF')
        .asFunction();
    func(thisCpp, p == null ? ffi.nullptr : p.thisCpp);
  } // translate(qreal dx, qreal dy)

  translate_2(double dx, double dy) {
    final void_Func_voidstar_double_double func = _dylib
        .lookup<
                ffi
                .NativeFunction<void_Func_voidstar_ffi_Double_ffi_Double_FFI>>(
            'c_QLineF__translate_qreal_qreal')
        .asFunction();
    func(thisCpp, dx, dy);
  } // translated(const QPointF & p) const

  QLineF translated(QPointF? p) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QLineF__translated_QPointF')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, p == null ? ffi.nullptr : p.thisCpp);
    return QLineF.fromCppPointer(result, true);
  } // translated(qreal dx, qreal dy) const

  QLineF translated_2(double dx, double dy) {
    final voidstar_Func_voidstar_double_double func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Double_ffi_Double_FFI>>(
            'c_QLineF__translated_qreal_qreal')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, dx, dy);
    return QLineF.fromCppPointer(result, true);
  } // unitVector() const

  QLineF unitVector() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QLineF__unitVector')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QLineF.fromCppPointer(result, true);
  } // x1() const

  double x1() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>('c_QLineF__x1')
        .asFunction();
    return func(thisCpp);
  } // x2() const

  double x2() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>('c_QLineF__x2')
        .asFunction();
    return func(thisCpp);
  } // y1() const

  double y1() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>('c_QLineF__y1')
        .asFunction();
    return func(thisCpp);
  } // y2() const

  double y2() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>('c_QLineF__y2')
        .asFunction();
    return func(thisCpp);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QLineF__destructor')
        .asFunction();
    func(thisCpp);
  }
}
