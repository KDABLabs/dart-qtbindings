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

class QPainter implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QPainter>();
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

  factory QPainter.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
        QPainter.fromCppPointer(cppPointer, needsAutoDelete)) as QPainter;
  }
  QPainter.fromCppPointer(var cppPointer, [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QPainter.init() {}
  String getFinalizerName() {
    return "c_QPainter_Finalizer";
  } //QPainter()

  QPainter() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QPainter__constructor')
        .asFunction();
    thisCpp = func();
    QPainter.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } // background() const
  QBrush background() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPainter__background')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QBrush.fromCppPointer(result, false);
  } // beginNativePainting()

  beginNativePainting() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPainter__beginNativePainting')
        .asFunction();
    func(thisCpp);
  } // boundingRect(const QRect & rect, int flags, const QString & text)

  QRect boundingRect(QRect? rect, int flags, String? text) {
    final voidstar_Func_voidstar_voidstar_int_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_voidstar_ffi_Int32_voidstar_FFI>>(
            'c_QPainter__boundingRect_QRect_int_QString')
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        rect == null ? ffi.nullptr : rect.thisCpp,
        flags,
        text?.toNativeUtf8() ?? ffi.nullptr);
    return QRect.fromCppPointer(result, true);
  } // boundingRect(const QRectF & rect, const QString & text)

  QRectF boundingRect_2(QRectF? rect, String? text) {
    final voidstar_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi
                .NativeFunction<voidstar_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QPainter__boundingRect_QRectF_QString')
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        rect == null ? ffi.nullptr : rect.thisCpp,
        text?.toNativeUtf8() ?? ffi.nullptr);
    return QRectF.fromCppPointer(result, true);
  } // boundingRect(const QRectF & rect, int flags, const QString & text)

  QRectF boundingRect_3(QRectF? rect, int flags, String? text) {
    final voidstar_Func_voidstar_voidstar_int_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_voidstar_ffi_Int32_voidstar_FFI>>(
            'c_QPainter__boundingRect_QRectF_int_QString')
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        rect == null ? ffi.nullptr : rect.thisCpp,
        flags,
        text?.toNativeUtf8() ?? ffi.nullptr);
    return QRectF.fromCppPointer(result, true);
  } // boundingRect(int x, int y, int w, int h, int flags, const QString & text)

  QRect boundingRect_4(int x, int y, int w, int h, int flags, String? text) {
    final voidstar_Func_voidstar_int_int_int_int_int_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_voidstar_FFI>>(
            'c_QPainter__boundingRect_int_int_int_int_int_QString')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, x, y, w, h, flags, text?.toNativeUtf8() ?? ffi.nullptr);
    return QRect.fromCppPointer(result, true);
  } // brush() const

  QBrush brush() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPainter__brush')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QBrush.fromCppPointer(result, false);
  } // brushOrigin() const

  QPoint brushOrigin() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPainter__brushOrigin')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPoint.fromCppPointer(result, true);
  } // clipBoundingRect() const

  QRectF clipBoundingRect() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPainter__clipBoundingRect')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRectF.fromCppPointer(result, true);
  } // clipRegion() const

  QRegion clipRegion() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPainter__clipRegion')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRegion.fromCppPointer(result, true);
  } // drawArc(const QRect & arg__1, int a, int alen)

  drawArc(QRect? arg__1, int a, int alen) {
    final void_Func_voidstar_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPainter__drawArc_QRect_int_int')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp, a, alen);
  } // drawArc(const QRectF & rect, int a, int alen)

  drawArc_2(QRectF? rect, int a, int alen) {
    final void_Func_voidstar_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPainter__drawArc_QRectF_int_int')
        .asFunction();
    func(thisCpp, rect == null ? ffi.nullptr : rect.thisCpp, a, alen);
  } // drawArc(int x, int y, int w, int h, int a, int alen)

  drawArc_3(int x, int y, int w, int h, int a, int alen) {
    final void_Func_voidstar_int_int_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPainter__drawArc_int_int_int_int_int_int')
        .asFunction();
    func(thisCpp, x, y, w, h, a, alen);
  } // drawChord(const QRect & arg__1, int a, int alen)

  drawChord(QRect? arg__1, int a, int alen) {
    final void_Func_voidstar_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPainter__drawChord_QRect_int_int')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp, a, alen);
  } // drawChord(const QRectF & rect, int a, int alen)

  drawChord_2(QRectF? rect, int a, int alen) {
    final void_Func_voidstar_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPainter__drawChord_QRectF_int_int')
        .asFunction();
    func(thisCpp, rect == null ? ffi.nullptr : rect.thisCpp, a, alen);
  } // drawChord(int x, int y, int w, int h, int a, int alen)

  drawChord_3(int x, int y, int w, int h, int a, int alen) {
    final void_Func_voidstar_int_int_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPainter__drawChord_int_int_int_int_int_int')
        .asFunction();
    func(thisCpp, x, y, w, h, a, alen);
  } // drawConvexPolygon(const QPoint * points, int pointCount)

  drawConvexPolygon(QPoint? points, int pointCount) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'c_QPainter__drawConvexPolygon_QPoint_int')
        .asFunction();
    func(thisCpp, points == null ? ffi.nullptr : points.thisCpp, pointCount);
  } // drawConvexPolygon(const QPointF * points, int pointCount)

  drawConvexPolygon_2(QPointF? points, int pointCount) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'c_QPainter__drawConvexPolygon_QPointF_int')
        .asFunction();
    func(thisCpp, points == null ? ffi.nullptr : points.thisCpp, pointCount);
  } // drawEllipse(const QPoint & center, int rx, int ry)

  drawEllipse(QPoint? center, int rx, int ry) {
    final void_Func_voidstar_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPainter__drawEllipse_QPoint_int_int')
        .asFunction();
    func(thisCpp, center == null ? ffi.nullptr : center.thisCpp, rx, ry);
  } // drawEllipse(const QPointF & center, qreal rx, qreal ry)

  drawEllipse_2(QPointF? center, double rx, double ry) {
    final void_Func_voidstar_voidstar_double_double func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Double_ffi_Double_FFI>>(
            'c_QPainter__drawEllipse_QPointF_qreal_qreal')
        .asFunction();
    func(thisCpp, center == null ? ffi.nullptr : center.thisCpp, rx, ry);
  } // drawEllipse(const QRect & r)

  drawEllipse_3(QRect? r) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__drawEllipse_QRect')
        .asFunction();
    func(thisCpp, r == null ? ffi.nullptr : r.thisCpp);
  } // drawEllipse(const QRectF & r)

  drawEllipse_4(QRectF? r) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__drawEllipse_QRectF')
        .asFunction();
    func(thisCpp, r == null ? ffi.nullptr : r.thisCpp);
  } // drawEllipse(int x, int y, int w, int h)

  drawEllipse_5(int x, int y, int w, int h) {
    final void_Func_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPainter__drawEllipse_int_int_int_int')
        .asFunction();
    func(thisCpp, x, y, w, h);
  } // drawLine(const QLine & line)

  drawLine(QLine? line) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__drawLine_QLine')
        .asFunction();
    func(thisCpp, line == null ? ffi.nullptr : line.thisCpp);
  } // drawLine(const QLineF & line)

  drawLine_2(QLineF? line) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__drawLine_QLineF')
        .asFunction();
    func(thisCpp, line == null ? ffi.nullptr : line.thisCpp);
  } // drawLine(const QPoint & p1, const QPoint & p2)

  drawLine_3(QPoint? p1, QPoint? p2) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QPainter__drawLine_QPoint_QPoint')
        .asFunction();
    func(thisCpp, p1 == null ? ffi.nullptr : p1.thisCpp,
        p2 == null ? ffi.nullptr : p2.thisCpp);
  } // drawLine(const QPointF & p1, const QPointF & p2)

  drawLine_4(QPointF? p1, QPointF? p2) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QPainter__drawLine_QPointF_QPointF')
        .asFunction();
    func(thisCpp, p1 == null ? ffi.nullptr : p1.thisCpp,
        p2 == null ? ffi.nullptr : p2.thisCpp);
  } // drawLine(int x1, int y1, int x2, int y2)

  drawLine_5(int x1, int y1, int x2, int y2) {
    final void_Func_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPainter__drawLine_int_int_int_int')
        .asFunction();
    func(thisCpp, x1, y1, x2, y2);
  } // drawLines(const QLine * lines, int lineCount)

  drawLines(QLine? lines, int lineCount) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'c_QPainter__drawLines_QLine_int')
        .asFunction();
    func(thisCpp, lines == null ? ffi.nullptr : lines.thisCpp, lineCount);
  } // drawLines(const QLineF * lines, int lineCount)

  drawLines_2(QLineF? lines, int lineCount) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'c_QPainter__drawLines_QLineF_int')
        .asFunction();
    func(thisCpp, lines == null ? ffi.nullptr : lines.thisCpp, lineCount);
  } // drawLines(const QList<QLine > & lines)

  drawLines_3(QList? lines) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__drawLines_QList_QLine')
        .asFunction();
    func(thisCpp, lines == null ? ffi.nullptr : lines.thisCpp);
  } // drawLines(const QList<QLineF > & lines)

  drawLines_4(QList? lines) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__drawLines_QList_QLineF')
        .asFunction();
    func(thisCpp, lines == null ? ffi.nullptr : lines.thisCpp);
  } // drawLines(const QList<QPoint > & pointPairs)

  drawLines_5(QList? pointPairs) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__drawLines_QList_QPoint')
        .asFunction();
    func(thisCpp, pointPairs == null ? ffi.nullptr : pointPairs.thisCpp);
  } // drawLines(const QList<QPointF > & pointPairs)

  drawLines_6(QList? pointPairs) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__drawLines_QList_QPointF')
        .asFunction();
    func(thisCpp, pointPairs == null ? ffi.nullptr : pointPairs.thisCpp);
  } // drawLines(const QPoint * pointPairs, int lineCount)

  drawLines_7(QPoint? pointPairs, int lineCount) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'c_QPainter__drawLines_QPoint_int')
        .asFunction();
    func(thisCpp, pointPairs == null ? ffi.nullptr : pointPairs.thisCpp,
        lineCount);
  } // drawLines(const QPointF * pointPairs, int lineCount)

  drawLines_8(QPointF? pointPairs, int lineCount) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'c_QPainter__drawLines_QPointF_int')
        .asFunction();
    func(thisCpp, pointPairs == null ? ffi.nullptr : pointPairs.thisCpp,
        lineCount);
  } // drawPie(const QRect & arg__1, int a, int alen)

  drawPie(QRect? arg__1, int a, int alen) {
    final void_Func_voidstar_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPainter__drawPie_QRect_int_int')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp, a, alen);
  } // drawPie(const QRectF & rect, int a, int alen)

  drawPie_2(QRectF? rect, int a, int alen) {
    final void_Func_voidstar_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPainter__drawPie_QRectF_int_int')
        .asFunction();
    func(thisCpp, rect == null ? ffi.nullptr : rect.thisCpp, a, alen);
  } // drawPie(int x, int y, int w, int h, int a, int alen)

  drawPie_3(int x, int y, int w, int h, int a, int alen) {
    final void_Func_voidstar_int_int_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPainter__drawPie_int_int_int_int_int_int')
        .asFunction();
    func(thisCpp, x, y, w, h, a, alen);
  } // drawPixmap(const QPoint & p, const QPixmap & pm)

  drawPixmap(QPoint? p, QPixmap pm) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QPainter__drawPixmap_QPoint_QPixmap')
        .asFunction();
    func(thisCpp, p == null ? ffi.nullptr : p.thisCpp,
        pm == null ? ffi.nullptr : pm.thisCpp);
  } // drawPixmap(const QPoint & p, const QPixmap & pm, const QRect & sr)

  drawPixmap_2(QPoint? p, QPixmap pm, QRect? sr) {
    final void_Func_voidstar_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_voidstar_voidstar_FFI>>(
            'c_QPainter__drawPixmap_QPoint_QPixmap_QRect')
        .asFunction();
    func(
        thisCpp,
        p == null ? ffi.nullptr : p.thisCpp,
        pm == null ? ffi.nullptr : pm.thisCpp,
        sr == null ? ffi.nullptr : sr.thisCpp);
  } // drawPixmap(const QPointF & p, const QPixmap & pm)

  drawPixmap_3(QPointF? p, QPixmap pm) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QPainter__drawPixmap_QPointF_QPixmap')
        .asFunction();
    func(thisCpp, p == null ? ffi.nullptr : p.thisCpp,
        pm == null ? ffi.nullptr : pm.thisCpp);
  } // drawPixmap(const QPointF & p, const QPixmap & pm, const QRectF & sr)

  drawPixmap_4(QPointF? p, QPixmap pm, QRectF? sr) {
    final void_Func_voidstar_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_voidstar_voidstar_FFI>>(
            'c_QPainter__drawPixmap_QPointF_QPixmap_QRectF')
        .asFunction();
    func(
        thisCpp,
        p == null ? ffi.nullptr : p.thisCpp,
        pm == null ? ffi.nullptr : pm.thisCpp,
        sr == null ? ffi.nullptr : sr.thisCpp);
  } // drawPixmap(const QRect & r, const QPixmap & pm)

  drawPixmap_5(QRect? r, QPixmap pm) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QPainter__drawPixmap_QRect_QPixmap')
        .asFunction();
    func(thisCpp, r == null ? ffi.nullptr : r.thisCpp,
        pm == null ? ffi.nullptr : pm.thisCpp);
  } // drawPixmap(const QRect & targetRect, const QPixmap & pixmap, const QRect & sourceRect)

  drawPixmap_6(QRect? targetRect, QPixmap pixmap, QRect? sourceRect) {
    final void_Func_voidstar_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_voidstar_voidstar_FFI>>(
            'c_QPainter__drawPixmap_QRect_QPixmap_QRect')
        .asFunction();
    func(
        thisCpp,
        targetRect == null ? ffi.nullptr : targetRect.thisCpp,
        pixmap == null ? ffi.nullptr : pixmap.thisCpp,
        sourceRect == null ? ffi.nullptr : sourceRect.thisCpp);
  } // drawPixmap(const QRectF & targetRect, const QPixmap & pixmap, const QRectF & sourceRect)

  drawPixmap_7(QRectF? targetRect, QPixmap pixmap, QRectF? sourceRect) {
    final void_Func_voidstar_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_voidstar_voidstar_FFI>>(
            'c_QPainter__drawPixmap_QRectF_QPixmap_QRectF')
        .asFunction();
    func(
        thisCpp,
        targetRect == null ? ffi.nullptr : targetRect.thisCpp,
        pixmap == null ? ffi.nullptr : pixmap.thisCpp,
        sourceRect == null ? ffi.nullptr : sourceRect.thisCpp);
  } // drawPixmap(int x, int y, const QPixmap & pm)

  drawPixmap_8(int x, int y, QPixmap pm) {
    final void_Func_voidstar_int_int_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>>(
            'c_QPainter__drawPixmap_int_int_QPixmap')
        .asFunction();
    func(thisCpp, x, y, pm == null ? ffi.nullptr : pm.thisCpp);
  } // drawPixmap(int x, int y, const QPixmap & pm, int sx, int sy, int sw, int sh)

  drawPixmap_9(int x, int y, QPixmap pm, int sx, int sy, int sw, int sh) {
    final void_Func_voidstar_int_int_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPainter__drawPixmap_int_int_QPixmap_int_int_int_int')
        .asFunction();
    func(thisCpp, x, y, pm == null ? ffi.nullptr : pm.thisCpp, sx, sy, sw, sh);
  } // drawPixmap(int x, int y, int w, int h, const QPixmap & pm)

  drawPixmap_10(int x, int y, int w, int h, QPixmap pm) {
    final void_Func_voidstar_int_int_int_int_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_voidstar_FFI>>(
            'c_QPainter__drawPixmap_int_int_int_int_QPixmap')
        .asFunction();
    func(thisCpp, x, y, w, h, pm == null ? ffi.nullptr : pm.thisCpp);
  } // drawPixmap(int x, int y, int w, int h, const QPixmap & pm, int sx, int sy, int sw, int sh)

  drawPixmap_11(
      int x, int y, int w, int h, QPixmap pm, int sx, int sy, int sw, int sh) {
    final void_Func_voidstar_int_int_int_int_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPainter__drawPixmap_int_int_int_int_QPixmap_int_int_int_int')
        .asFunction();
    func(thisCpp, x, y, w, h, pm == null ? ffi.nullptr : pm.thisCpp, sx, sy, sw,
        sh);
  } // drawPoint(const QPoint & p)

  drawPoint(QPoint? p) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__drawPoint_QPoint')
        .asFunction();
    func(thisCpp, p == null ? ffi.nullptr : p.thisCpp);
  } // drawPoint(const QPointF & pt)

  drawPoint_2(QPointF? pt) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__drawPoint_QPointF')
        .asFunction();
    func(thisCpp, pt == null ? ffi.nullptr : pt.thisCpp);
  } // drawPoint(int x, int y)

  drawPoint_3(int x, int y) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPainter__drawPoint_int_int')
        .asFunction();
    func(thisCpp, x, y);
  } // drawPoints(const QPoint * points, int pointCount)

  drawPoints(QPoint? points, int pointCount) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'c_QPainter__drawPoints_QPoint_int')
        .asFunction();
    func(thisCpp, points == null ? ffi.nullptr : points.thisCpp, pointCount);
  } // drawPoints(const QPointF * points, int pointCount)

  drawPoints_2(QPointF? points, int pointCount) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'c_QPainter__drawPoints_QPointF_int')
        .asFunction();
    func(thisCpp, points == null ? ffi.nullptr : points.thisCpp, pointCount);
  } // drawPolygon(const QPoint * points, int pointCount)

  drawPolygon(QPoint? points, int pointCount) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'c_QPainter__drawPolygon_QPoint_int')
        .asFunction();
    func(thisCpp, points == null ? ffi.nullptr : points.thisCpp, pointCount);
  } // drawPolygon(const QPointF * points, int pointCount)

  drawPolygon_2(QPointF? points, int pointCount) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'c_QPainter__drawPolygon_QPointF_int')
        .asFunction();
    func(thisCpp, points == null ? ffi.nullptr : points.thisCpp, pointCount);
  } // drawPolyline(const QPoint * points, int pointCount)

  drawPolyline(QPoint? points, int pointCount) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'c_QPainter__drawPolyline_QPoint_int')
        .asFunction();
    func(thisCpp, points == null ? ffi.nullptr : points.thisCpp, pointCount);
  } // drawPolyline(const QPointF * points, int pointCount)

  drawPolyline_2(QPointF? points, int pointCount) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'c_QPainter__drawPolyline_QPointF_int')
        .asFunction();
    func(thisCpp, points == null ? ffi.nullptr : points.thisCpp, pointCount);
  } // drawRect(const QRect & rect)

  drawRect(QRect? rect) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__drawRect_QRect')
        .asFunction();
    func(thisCpp, rect == null ? ffi.nullptr : rect.thisCpp);
  } // drawRect(const QRectF & rect)

  drawRect_2(QRectF? rect) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__drawRect_QRectF')
        .asFunction();
    func(thisCpp, rect == null ? ffi.nullptr : rect.thisCpp);
  } // drawRect(int x1, int y1, int w, int h)

  drawRect_3(int x1, int y1, int w, int h) {
    final void_Func_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPainter__drawRect_int_int_int_int')
        .asFunction();
    func(thisCpp, x1, y1, w, h);
  } // drawRects(const QList<QRect > & rectangles)

  drawRects(QList? rectangles) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__drawRects_QList_QRect')
        .asFunction();
    func(thisCpp, rectangles == null ? ffi.nullptr : rectangles.thisCpp);
  } // drawRects(const QList<QRectF > & rectangles)

  drawRects_2(QList? rectangles) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__drawRects_QList_QRectF')
        .asFunction();
    func(thisCpp, rectangles == null ? ffi.nullptr : rectangles.thisCpp);
  } // drawRects(const QRect * rects, int rectCount)

  drawRects_3(QRect? rects, int rectCount) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'c_QPainter__drawRects_QRect_int')
        .asFunction();
    func(thisCpp, rects == null ? ffi.nullptr : rects.thisCpp, rectCount);
  } // drawRects(const QRectF * rects, int rectCount)

  drawRects_4(QRectF? rects, int rectCount) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'c_QPainter__drawRects_QRectF_int')
        .asFunction();
    func(thisCpp, rects == null ? ffi.nullptr : rects.thisCpp, rectCount);
  } // drawRoundedRect(const QRect & rect, qreal xRadius, qreal yRadius)

  drawRoundedRect(QRect? rect, double xRadius, double yRadius) {
    final void_Func_voidstar_voidstar_double_double func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Double_ffi_Double_FFI>>(
            'c_QPainter__drawRoundedRect_QRect_qreal_qreal')
        .asFunction();
    func(thisCpp, rect == null ? ffi.nullptr : rect.thisCpp, xRadius, yRadius);
  } // drawRoundedRect(const QRectF & rect, qreal xRadius, qreal yRadius)

  drawRoundedRect_2(QRectF? rect, double xRadius, double yRadius) {
    final void_Func_voidstar_voidstar_double_double func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Double_ffi_Double_FFI>>(
            'c_QPainter__drawRoundedRect_QRectF_qreal_qreal')
        .asFunction();
    func(thisCpp, rect == null ? ffi.nullptr : rect.thisCpp, xRadius, yRadius);
  } // drawRoundedRect(int x, int y, int w, int h, qreal xRadius, qreal yRadius)

  drawRoundedRect_3(
      int x, int y, int w, int h, double xRadius, double yRadius) {
    final void_Func_voidstar_int_int_int_int_double_double func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Double_ffi_Double_FFI>>(
            'c_QPainter__drawRoundedRect_int_int_int_int_qreal_qreal')
        .asFunction();
    func(thisCpp, x, y, w, h, xRadius, yRadius);
  } // drawText(const QPoint & p, const QString & s)

  drawText(QPoint? p, String? s) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QPainter__drawText_QPoint_QString')
        .asFunction();
    func(thisCpp, p == null ? ffi.nullptr : p.thisCpp,
        s?.toNativeUtf8() ?? ffi.nullptr);
  } // drawText(const QPointF & p, const QString & s)

  drawText_2(QPointF? p, String? s) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QPainter__drawText_QPointF_QString')
        .asFunction();
    func(thisCpp, p == null ? ffi.nullptr : p.thisCpp,
        s?.toNativeUtf8() ?? ffi.nullptr);
  } // drawText(const QPointF & p, const QString & str, int tf, int justificationPadding)

  drawText_3(QPointF? p, String? str, int tf, int justificationPadding) {
    final void_Func_voidstar_voidstar_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPainter__drawText_QPointF_QString_int_int')
        .asFunction();
    func(thisCpp, p == null ? ffi.nullptr : p.thisCpp,
        str?.toNativeUtf8() ?? ffi.nullptr, tf, justificationPadding);
  } // drawText(const QRect & r, int flags, const QString & text, QRect * br)

  drawText_4(QRect? r, int flags, String? text, {required QRect? br}) {
    final void_Func_voidstar_voidstar_int_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Int32_voidstar_voidstar_FFI>>(
            'c_QPainter__drawText_QRect_int_QString_QRect')
        .asFunction();
    func(
        thisCpp,
        r == null ? ffi.nullptr : r.thisCpp,
        flags,
        text?.toNativeUtf8() ?? ffi.nullptr,
        br == null ? ffi.nullptr : br.thisCpp);
  } // drawText(const QRectF & r, const QString & text)

  drawText_5(QRectF? r, String? text) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QPainter__drawText_QRectF_QString')
        .asFunction();
    func(thisCpp, r == null ? ffi.nullptr : r.thisCpp,
        text?.toNativeUtf8() ?? ffi.nullptr);
  } // drawText(const QRectF & r, int flags, const QString & text, QRectF * br)

  drawText_6(QRectF? r, int flags, String? text, {required QRectF? br}) {
    final void_Func_voidstar_voidstar_int_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Int32_voidstar_voidstar_FFI>>(
            'c_QPainter__drawText_QRectF_int_QString_QRectF')
        .asFunction();
    func(
        thisCpp,
        r == null ? ffi.nullptr : r.thisCpp,
        flags,
        text?.toNativeUtf8() ?? ffi.nullptr,
        br == null ? ffi.nullptr : br.thisCpp);
  } // drawText(int x, int y, const QString & s)

  drawText_7(int x, int y, String? s) {
    final void_Func_voidstar_int_int_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>>(
            'c_QPainter__drawText_int_int_QString')
        .asFunction();
    func(thisCpp, x, y, s?.toNativeUtf8() ?? ffi.nullptr);
  } // drawText(int x, int y, int w, int h, int flags, const QString & text, QRect * br)

  drawText_8(int x, int y, int w, int h, int flags, String? text,
      {required QRect? br}) {
    final void_Func_voidstar_int_int_int_int_int_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_voidstar_voidstar_FFI>>(
            'c_QPainter__drawText_int_int_int_int_int_QString_QRect')
        .asFunction();
    func(thisCpp, x, y, w, h, flags, text?.toNativeUtf8() ?? ffi.nullptr,
        br == null ? ffi.nullptr : br.thisCpp);
  } // drawTiledPixmap(const QRect & arg__1, const QPixmap & arg__2, const QPoint & arg__3)

  drawTiledPixmap(QRect? arg__1, QPixmap arg__2, {required QPoint? arg__3}) {
    final void_Func_voidstar_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_voidstar_voidstar_FFI>>(
            'c_QPainter__drawTiledPixmap_QRect_QPixmap_QPoint')
        .asFunction();
    func(
        thisCpp,
        arg__1 == null ? ffi.nullptr : arg__1.thisCpp,
        arg__2 == null ? ffi.nullptr : arg__2.thisCpp,
        arg__3 == null ? ffi.nullptr : arg__3.thisCpp);
  } // drawTiledPixmap(const QRectF & rect, const QPixmap & pm, const QPointF & offset)

  drawTiledPixmap_2(QRectF? rect, QPixmap pm, {required QPointF? offset}) {
    final void_Func_voidstar_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_voidstar_voidstar_FFI>>(
            'c_QPainter__drawTiledPixmap_QRectF_QPixmap_QPointF')
        .asFunction();
    func(
        thisCpp,
        rect == null ? ffi.nullptr : rect.thisCpp,
        pm == null ? ffi.nullptr : pm.thisCpp,
        offset == null ? ffi.nullptr : offset.thisCpp);
  } // drawTiledPixmap(int x, int y, int w, int h, const QPixmap & arg__5, int sx, int sy)

  drawTiledPixmap_3(int x, int y, int w, int h, QPixmap arg__5,
      {int sx = 0, int sy = 0}) {
    final void_Func_voidstar_int_int_int_int_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPainter__drawTiledPixmap_int_int_int_int_QPixmap_int_int')
        .asFunction();
    func(thisCpp, x, y, w, h, arg__5 == null ? ffi.nullptr : arg__5.thisCpp, sx,
        sy);
  } // end()

  bool end() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>('c_QPainter__end')
        .asFunction();
    return func(thisCpp) != 0;
  } // endNativePainting()

  endNativePainting() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPainter__endNativePainting')
        .asFunction();
    func(thisCpp);
  } // eraseRect(const QRect & arg__1)

  eraseRect(QRect? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__eraseRect_QRect')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // eraseRect(const QRectF & arg__1)

  eraseRect_2(QRectF? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__eraseRect_QRectF')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // eraseRect(int x, int y, int w, int h)

  eraseRect_3(int x, int y, int w, int h) {
    final void_Func_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPainter__eraseRect_int_int_int_int')
        .asFunction();
    func(thisCpp, x, y, w, h);
  } // fillRect(const QRect & arg__1, const QBrush & arg__2)

  fillRect(QRect? arg__1, QBrush arg__2) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QPainter__fillRect_QRect_QBrush')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp,
        arg__2 == null ? ffi.nullptr : arg__2.thisCpp);
  } // fillRect(const QRect & arg__1, const QColor & color)

  fillRect_2(QRect? arg__1, QColor? color) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QPainter__fillRect_QRect_QColor')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp,
        color == null ? ffi.nullptr : color.thisCpp);
  } // fillRect(const QRectF & arg__1, const QBrush & arg__2)

  fillRect_3(QRectF? arg__1, QBrush arg__2) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QPainter__fillRect_QRectF_QBrush')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp,
        arg__2 == null ? ffi.nullptr : arg__2.thisCpp);
  } // fillRect(const QRectF & arg__1, const QColor & color)

  fillRect_4(QRectF? arg__1, QColor? color) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QPainter__fillRect_QRectF_QColor')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp,
        color == null ? ffi.nullptr : color.thisCpp);
  } // fillRect(int x, int y, int w, int h, const QBrush & arg__5)

  fillRect_5(int x, int y, int w, int h, QBrush arg__5) {
    final void_Func_voidstar_int_int_int_int_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_voidstar_FFI>>(
            'c_QPainter__fillRect_int_int_int_int_QBrush')
        .asFunction();
    func(thisCpp, x, y, w, h, arg__5 == null ? ffi.nullptr : arg__5.thisCpp);
  } // fillRect(int x, int y, int w, int h, const QColor & color)

  fillRect_6(int x, int y, int w, int h, QColor? color) {
    final void_Func_voidstar_int_int_int_int_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_voidstar_FFI>>(
            'c_QPainter__fillRect_int_int_int_int_QColor')
        .asFunction();
    func(thisCpp, x, y, w, h, color == null ? ffi.nullptr : color.thisCpp);
  } // font() const

  QFont font() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPainter__font')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QFont.fromCppPointer(result, false);
  } // hasClipping() const

  bool hasClipping() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QPainter__hasClipping')
        .asFunction();
    return func(thisCpp) != 0;
  } // isActive() const

  bool isActive() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QPainter__isActive')
        .asFunction();
    return func(thisCpp) != 0;
  } // layoutDirection() const

  int layoutDirection() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QPainter__layoutDirection')
        .asFunction();
    return func(thisCpp);
  } // opacity() const

  double opacity() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QPainter__opacity')
        .asFunction();
    return func(thisCpp);
  } // pen() const

  QPen pen() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPainter__pen')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPen.fromCppPointer(result, false);
  } // resetTransform()

  resetTransform() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPainter__resetTransform')
        .asFunction();
    func(thisCpp);
  } // restore()

  restore() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPainter__restore')
        .asFunction();
    func(thisCpp);
  } // rotate(qreal a)

  rotate(double a) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QPainter__rotate_qreal')
        .asFunction();
    func(thisCpp, a);
  } // save()

  save() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QPainter__save')
        .asFunction();
    func(thisCpp);
  } // scale(qreal sx, qreal sy)

  scale(double sx, double sy) {
    final void_Func_voidstar_double_double func = _dylib
        .lookup<
                ffi
                .NativeFunction<void_Func_voidstar_ffi_Double_ffi_Double_FFI>>(
            'c_QPainter__scale_qreal_qreal')
        .asFunction();
    func(thisCpp, sx, sy);
  } // setBackground(const QBrush & bg)

  setBackground(QBrush bg) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__setBackground_QBrush')
        .asFunction();
    func(thisCpp, bg == null ? ffi.nullptr : bg.thisCpp);
  } // setBrush(const QBrush & brush)

  setBrush(QBrush brush) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__setBrush_QBrush')
        .asFunction();
    func(thisCpp, brush == null ? ffi.nullptr : brush.thisCpp);
  } // setBrushOrigin(const QPoint & arg__1)

  setBrushOrigin(QPoint? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__setBrushOrigin_QPoint')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // setBrushOrigin(const QPointF & arg__1)

  setBrushOrigin_2(QPointF? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__setBrushOrigin_QPointF')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // setBrushOrigin(int x, int y)

  setBrushOrigin_3(int x, int y) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPainter__setBrushOrigin_int_int')
        .asFunction();
    func(thisCpp, x, y);
  } // setClipRect(const QRect & arg__1)

  setClipRect(QRect? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__setClipRect_QRect')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // setClipRect(const QRectF & arg__1)

  setClipRect_2(QRectF? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__setClipRect_QRectF')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // setClipRect(int x, int y, int w, int h)

  setClipRect_3(int x, int y, int w, int h) {
    final void_Func_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPainter__setClipRect_int_int_int_int')
        .asFunction();
    func(thisCpp, x, y, w, h);
  } // setClipRegion(const QRegion & arg__1)

  setClipRegion(QRegion arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__setClipRegion_QRegion')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // setClipping(bool enable)

  setClipping(bool enable) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QPainter__setClipping_bool')
        .asFunction();
    func(thisCpp, enable ? 1 : 0);
  } // setFont(const QFont & f)

  setFont(QFont? f) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__setFont_QFont')
        .asFunction();
    func(thisCpp, f == null ? ffi.nullptr : f.thisCpp);
  } // setLayoutDirection(Qt::LayoutDirection direction)

  setLayoutDirection(int direction) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QPainter__setLayoutDirection_LayoutDirection')
        .asFunction();
    func(thisCpp, direction);
  } // setOpacity(qreal opacity)

  setOpacity(double opacity) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QPainter__setOpacity_qreal')
        .asFunction();
    func(thisCpp, opacity);
  } // setPen(const QColor & color)

  setPen(QColor? color) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__setPen_QColor')
        .asFunction();
    func(thisCpp, color == null ? ffi.nullptr : color.thisCpp);
  } // setPen(const QPen & pen)

  setPen_2(QPen pen) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__setPen_QPen')
        .asFunction();
    func(thisCpp, pen == null ? ffi.nullptr : pen.thisCpp);
  } // setViewTransformEnabled(bool enable)

  setViewTransformEnabled(bool enable) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QPainter__setViewTransformEnabled_bool')
        .asFunction();
    func(thisCpp, enable ? 1 : 0);
  } // setViewport(const QRect & viewport)

  setViewport(QRect? viewport) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__setViewport_QRect')
        .asFunction();
    func(thisCpp, viewport == null ? ffi.nullptr : viewport.thisCpp);
  } // setViewport(int x, int y, int w, int h)

  setViewport_2(int x, int y, int w, int h) {
    final void_Func_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPainter__setViewport_int_int_int_int')
        .asFunction();
    func(thisCpp, x, y, w, h);
  } // setWindow(const QRect & window)

  setWindow(QRect? window) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__setWindow_QRect')
        .asFunction();
    func(thisCpp, window == null ? ffi.nullptr : window.thisCpp);
  } // setWindow(int x, int y, int w, int h)

  setWindow_2(int x, int y, int w, int h) {
    final void_Func_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPainter__setWindow_int_int_int_int')
        .asFunction();
    func(thisCpp, x, y, w, h);
  } // setWorldMatrixEnabled(bool enabled)

  setWorldMatrixEnabled(bool enabled) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QPainter__setWorldMatrixEnabled_bool')
        .asFunction();
    func(thisCpp, enabled ? 1 : 0);
  } // shear(qreal sh, qreal sv)

  shear(double sh, double sv) {
    final void_Func_voidstar_double_double func = _dylib
        .lookup<
                ffi
                .NativeFunction<void_Func_voidstar_ffi_Double_ffi_Double_FFI>>(
            'c_QPainter__shear_qreal_qreal')
        .asFunction();
    func(thisCpp, sh, sv);
  } // translate(const QPoint & offset)

  translate(QPoint? offset) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__translate_QPoint')
        .asFunction();
    func(thisCpp, offset == null ? ffi.nullptr : offset.thisCpp);
  } // translate(const QPointF & offset)

  translate_2(QPointF? offset) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPainter__translate_QPointF')
        .asFunction();
    func(thisCpp, offset == null ? ffi.nullptr : offset.thisCpp);
  } // translate(qreal dx, qreal dy)

  translate_3(double dx, double dy) {
    final void_Func_voidstar_double_double func = _dylib
        .lookup<
                ffi
                .NativeFunction<void_Func_voidstar_ffi_Double_ffi_Double_FFI>>(
            'c_QPainter__translate_qreal_qreal')
        .asFunction();
    func(thisCpp, dx, dy);
  } // viewTransformEnabled() const

  bool viewTransformEnabled() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QPainter__viewTransformEnabled')
        .asFunction();
    return func(thisCpp) != 0;
  } // viewport() const

  QRect viewport() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPainter__viewport')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRect.fromCppPointer(result, true);
  } // window() const

  QRect window() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPainter__window')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRect.fromCppPointer(result, true);
  } // worldMatrixEnabled() const

  bool worldMatrixEnabled() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QPainter__worldMatrixEnabled')
        .asFunction();
    return func(thisCpp) != 0;
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPainter__destructor')
        .asFunction();
    func(thisCpp);
  }
}
