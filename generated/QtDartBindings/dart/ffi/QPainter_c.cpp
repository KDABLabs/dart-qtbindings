/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QPainter_c.h"

#include <iostream>

#include <cassert>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
QPainter_wrapper::QPainter_wrapper() : ::QPainter() {}
const QBrush &QPainter_wrapper::background() const {
  return ::QPainter::background();
}
void QPainter_wrapper::beginNativePainting() {
  ::QPainter::beginNativePainting();
}
QRect QPainter_wrapper::boundingRect(const QRect &rect, int flags,
                                     const QString &text) {
  return ::QPainter::boundingRect(rect, flags, text);
}
QRectF QPainter_wrapper::boundingRect(const QRectF &rect, const QString &text) {
  return ::QPainter::boundingRect(rect, text);
}
QRectF QPainter_wrapper::boundingRect(const QRectF &rect, int flags,
                                      const QString &text) {
  return ::QPainter::boundingRect(rect, flags, text);
}
QRect QPainter_wrapper::boundingRect(int x, int y, int w, int h, int flags,
                                     const QString &text) {
  return ::QPainter::boundingRect(x, y, w, h, flags, text);
}
const QBrush &QPainter_wrapper::brush() const { return ::QPainter::brush(); }
QPoint QPainter_wrapper::brushOrigin() const {
  return ::QPainter::brushOrigin();
}
QRectF QPainter_wrapper::clipBoundingRect() const {
  return ::QPainter::clipBoundingRect();
}
QRegion QPainter_wrapper::clipRegion() const {
  return ::QPainter::clipRegion();
}
void QPainter_wrapper::drawArc(const QRect &arg__1, int a, int alen) {
  ::QPainter::drawArc(arg__1, a, alen);
}
void QPainter_wrapper::drawArc(const QRectF &rect, int a, int alen) {
  ::QPainter::drawArc(rect, a, alen);
}
void QPainter_wrapper::drawArc(int x, int y, int w, int h, int a, int alen) {
  ::QPainter::drawArc(x, y, w, h, a, alen);
}
void QPainter_wrapper::drawChord(const QRect &arg__1, int a, int alen) {
  ::QPainter::drawChord(arg__1, a, alen);
}
void QPainter_wrapper::drawChord(const QRectF &rect, int a, int alen) {
  ::QPainter::drawChord(rect, a, alen);
}
void QPainter_wrapper::drawChord(int x, int y, int w, int h, int a, int alen) {
  ::QPainter::drawChord(x, y, w, h, a, alen);
}
void QPainter_wrapper::drawConvexPolygon(const QPoint *points, int pointCount) {
  ::QPainter::drawConvexPolygon(points, pointCount);
}
void QPainter_wrapper::drawConvexPolygon(const QPointF *points,
                                         int pointCount) {
  ::QPainter::drawConvexPolygon(points, pointCount);
}
void QPainter_wrapper::drawEllipse(const QPoint &center, int rx, int ry) {
  ::QPainter::drawEllipse(center, rx, ry);
}
void QPainter_wrapper::drawEllipse(const QPointF &center, qreal rx, qreal ry) {
  ::QPainter::drawEllipse(center, rx, ry);
}
void QPainter_wrapper::drawEllipse(const QRect &r) {
  ::QPainter::drawEllipse(r);
}
void QPainter_wrapper::drawEllipse(const QRectF &r) {
  ::QPainter::drawEllipse(r);
}
void QPainter_wrapper::drawEllipse(int x, int y, int w, int h) {
  ::QPainter::drawEllipse(x, y, w, h);
}
void QPainter_wrapper::drawLine(const QLine &line) {
  ::QPainter::drawLine(line);
}
void QPainter_wrapper::drawLine(const QLineF &line) {
  ::QPainter::drawLine(line);
}
void QPainter_wrapper::drawLine(const QPoint &p1, const QPoint &p2) {
  ::QPainter::drawLine(p1, p2);
}
void QPainter_wrapper::drawLine(const QPointF &p1, const QPointF &p2) {
  ::QPainter::drawLine(p1, p2);
}
void QPainter_wrapper::drawLine(int x1, int y1, int x2, int y2) {
  ::QPainter::drawLine(x1, y1, x2, y2);
}
void QPainter_wrapper::drawLines(const QLine *lines, int lineCount) {
  ::QPainter::drawLines(lines, lineCount);
}
void QPainter_wrapper::drawLines(const QLineF *lines, int lineCount) {
  ::QPainter::drawLines(lines, lineCount);
}
void QPainter_wrapper::drawLines(const QList<QLine> &lines) {
  ::QPainter::drawLines(lines);
}
void QPainter_wrapper::drawLines(const QList<QLineF> &lines) {
  ::QPainter::drawLines(lines);
}
void QPainter_wrapper::drawLines(const QList<QPoint> &pointPairs) {
  ::QPainter::drawLines(pointPairs);
}
void QPainter_wrapper::drawLines(const QList<QPointF> &pointPairs) {
  ::QPainter::drawLines(pointPairs);
}
void QPainter_wrapper::drawLines(const QPoint *pointPairs, int lineCount) {
  ::QPainter::drawLines(pointPairs, lineCount);
}
void QPainter_wrapper::drawLines(const QPointF *pointPairs, int lineCount) {
  ::QPainter::drawLines(pointPairs, lineCount);
}
void QPainter_wrapper::drawPie(const QRect &arg__1, int a, int alen) {
  ::QPainter::drawPie(arg__1, a, alen);
}
void QPainter_wrapper::drawPie(const QRectF &rect, int a, int alen) {
  ::QPainter::drawPie(rect, a, alen);
}
void QPainter_wrapper::drawPie(int x, int y, int w, int h, int a, int alen) {
  ::QPainter::drawPie(x, y, w, h, a, alen);
}
void QPainter_wrapper::drawPixmap(const QPoint &p, const QPixmap &pm) {
  ::QPainter::drawPixmap(p, pm);
}
void QPainter_wrapper::drawPixmap(const QPoint &p, const QPixmap &pm,
                                  const QRect &sr) {
  ::QPainter::drawPixmap(p, pm, sr);
}
void QPainter_wrapper::drawPixmap(const QPointF &p, const QPixmap &pm) {
  ::QPainter::drawPixmap(p, pm);
}
void QPainter_wrapper::drawPixmap(const QPointF &p, const QPixmap &pm,
                                  const QRectF &sr) {
  ::QPainter::drawPixmap(p, pm, sr);
}
void QPainter_wrapper::drawPixmap(const QRect &r, const QPixmap &pm) {
  ::QPainter::drawPixmap(r, pm);
}
void QPainter_wrapper::drawPixmap(const QRect &targetRect,
                                  const QPixmap &pixmap,
                                  const QRect &sourceRect) {
  ::QPainter::drawPixmap(targetRect, pixmap, sourceRect);
}
void QPainter_wrapper::drawPixmap(const QRectF &targetRect,
                                  const QPixmap &pixmap,
                                  const QRectF &sourceRect) {
  ::QPainter::drawPixmap(targetRect, pixmap, sourceRect);
}
void QPainter_wrapper::drawPixmap(int x, int y, const QPixmap &pm) {
  ::QPainter::drawPixmap(x, y, pm);
}
void QPainter_wrapper::drawPixmap(int x, int y, const QPixmap &pm, int sx,
                                  int sy, int sw, int sh) {
  ::QPainter::drawPixmap(x, y, pm, sx, sy, sw, sh);
}
void QPainter_wrapper::drawPixmap(int x, int y, int w, int h,
                                  const QPixmap &pm) {
  ::QPainter::drawPixmap(x, y, w, h, pm);
}
void QPainter_wrapper::drawPixmap(int x, int y, int w, int h, const QPixmap &pm,
                                  int sx, int sy, int sw, int sh) {
  ::QPainter::drawPixmap(x, y, w, h, pm, sx, sy, sw, sh);
}
void QPainter_wrapper::drawPoint(const QPoint &p) { ::QPainter::drawPoint(p); }
void QPainter_wrapper::drawPoint(const QPointF &pt) {
  ::QPainter::drawPoint(pt);
}
void QPainter_wrapper::drawPoint(int x, int y) { ::QPainter::drawPoint(x, y); }
void QPainter_wrapper::drawPoints(const QPoint *points, int pointCount) {
  ::QPainter::drawPoints(points, pointCount);
}
void QPainter_wrapper::drawPoints(const QPointF *points, int pointCount) {
  ::QPainter::drawPoints(points, pointCount);
}
void QPainter_wrapper::drawPolygon(const QPoint *points, int pointCount) {
  ::QPainter::drawPolygon(points, pointCount);
}
void QPainter_wrapper::drawPolygon(const QPointF *points, int pointCount) {
  ::QPainter::drawPolygon(points, pointCount);
}
void QPainter_wrapper::drawPolyline(const QPoint *points, int pointCount) {
  ::QPainter::drawPolyline(points, pointCount);
}
void QPainter_wrapper::drawPolyline(const QPointF *points, int pointCount) {
  ::QPainter::drawPolyline(points, pointCount);
}
void QPainter_wrapper::drawRect(const QRect &rect) {
  ::QPainter::drawRect(rect);
}
void QPainter_wrapper::drawRect(const QRectF &rect) {
  ::QPainter::drawRect(rect);
}
void QPainter_wrapper::drawRect(int x1, int y1, int w, int h) {
  ::QPainter::drawRect(x1, y1, w, h);
}
void QPainter_wrapper::drawRects(const QList<QRect> &rectangles) {
  ::QPainter::drawRects(rectangles);
}
void QPainter_wrapper::drawRects(const QList<QRectF> &rectangles) {
  ::QPainter::drawRects(rectangles);
}
void QPainter_wrapper::drawRects(const QRect *rects, int rectCount) {
  ::QPainter::drawRects(rects, rectCount);
}
void QPainter_wrapper::drawRects(const QRectF *rects, int rectCount) {
  ::QPainter::drawRects(rects, rectCount);
}
void QPainter_wrapper::drawRoundedRect(const QRect &rect, qreal xRadius,
                                       qreal yRadius) {
  ::QPainter::drawRoundedRect(rect, xRadius, yRadius);
}
void QPainter_wrapper::drawRoundedRect(const QRectF &rect, qreal xRadius,
                                       qreal yRadius) {
  ::QPainter::drawRoundedRect(rect, xRadius, yRadius);
}
void QPainter_wrapper::drawRoundedRect(int x, int y, int w, int h,
                                       qreal xRadius, qreal yRadius) {
  ::QPainter::drawRoundedRect(x, y, w, h, xRadius, yRadius);
}
void QPainter_wrapper::drawText(const QPoint &p, const QString &s) {
  ::QPainter::drawText(p, s);
}
void QPainter_wrapper::drawText(const QPointF &p, const QString &s) {
  ::QPainter::drawText(p, s);
}
void QPainter_wrapper::drawText(const QPointF &p, const QString &str, int tf,
                                int justificationPadding) {
  ::QPainter::drawText(p, str, tf, justificationPadding);
}
void QPainter_wrapper::drawText(const QRect &r, int flags, const QString &text,
                                QRect *br) {
  ::QPainter::drawText(r, flags, text, br);
}
void QPainter_wrapper::drawText(const QRectF &r, const QString &text) {
  ::QPainter::drawText(r, text);
}
void QPainter_wrapper::drawText(const QRectF &r, int flags, const QString &text,
                                QRectF *br) {
  ::QPainter::drawText(r, flags, text, br);
}
void QPainter_wrapper::drawText(int x, int y, const QString &s) {
  ::QPainter::drawText(x, y, s);
}
void QPainter_wrapper::drawText(int x, int y, int w, int h, int flags,
                                const QString &text, QRect *br) {
  ::QPainter::drawText(x, y, w, h, flags, text, br);
}
void QPainter_wrapper::drawTiledPixmap(const QRect &arg__1,
                                       const QPixmap &arg__2,
                                       const QPoint &arg__3) {
  ::QPainter::drawTiledPixmap(arg__1, arg__2, arg__3);
}
void QPainter_wrapper::drawTiledPixmap(const QRectF &rect, const QPixmap &pm,
                                       const QPointF &offset) {
  ::QPainter::drawTiledPixmap(rect, pm, offset);
}
void QPainter_wrapper::drawTiledPixmap(int x, int y, int w, int h,
                                       const QPixmap &arg__5, int sx, int sy) {
  ::QPainter::drawTiledPixmap(x, y, w, h, arg__5, sx, sy);
}
bool QPainter_wrapper::end() { return ::QPainter::end(); }
void QPainter_wrapper::endNativePainting() { ::QPainter::endNativePainting(); }
void QPainter_wrapper::eraseRect(const QRect &arg__1) {
  ::QPainter::eraseRect(arg__1);
}
void QPainter_wrapper::eraseRect(const QRectF &arg__1) {
  ::QPainter::eraseRect(arg__1);
}
void QPainter_wrapper::eraseRect(int x, int y, int w, int h) {
  ::QPainter::eraseRect(x, y, w, h);
}
void QPainter_wrapper::fillRect(const QRect &arg__1, const QBrush &arg__2) {
  ::QPainter::fillRect(arg__1, arg__2);
}
void QPainter_wrapper::fillRect(const QRect &arg__1, const QColor &color) {
  ::QPainter::fillRect(arg__1, color);
}
void QPainter_wrapper::fillRect(const QRectF &arg__1, const QBrush &arg__2) {
  ::QPainter::fillRect(arg__1, arg__2);
}
void QPainter_wrapper::fillRect(const QRectF &arg__1, const QColor &color) {
  ::QPainter::fillRect(arg__1, color);
}
void QPainter_wrapper::fillRect(int x, int y, int w, int h,
                                const QBrush &arg__5) {
  ::QPainter::fillRect(x, y, w, h, arg__5);
}
void QPainter_wrapper::fillRect(int x, int y, int w, int h,
                                const QColor &color) {
  ::QPainter::fillRect(x, y, w, h, color);
}
const QFont &QPainter_wrapper::font() const { return ::QPainter::font(); }
bool QPainter_wrapper::hasClipping() const { return ::QPainter::hasClipping(); }
bool QPainter_wrapper::isActive() const { return ::QPainter::isActive(); }
Qt::LayoutDirection QPainter_wrapper::layoutDirection() const {
  return ::QPainter::layoutDirection();
}
qreal QPainter_wrapper::opacity() const { return ::QPainter::opacity(); }
const QPen &QPainter_wrapper::pen() const { return ::QPainter::pen(); }
void QPainter_wrapper::resetTransform() { ::QPainter::resetTransform(); }
void QPainter_wrapper::restore() { ::QPainter::restore(); }
void QPainter_wrapper::rotate(qreal a) { ::QPainter::rotate(a); }
void QPainter_wrapper::save() { ::QPainter::save(); }
void QPainter_wrapper::scale(qreal sx, qreal sy) { ::QPainter::scale(sx, sy); }
void QPainter_wrapper::setBackground(const QBrush &bg) {
  ::QPainter::setBackground(bg);
}
void QPainter_wrapper::setBrush(const QBrush &brush) {
  ::QPainter::setBrush(brush);
}
void QPainter_wrapper::setBrushOrigin(const QPoint &arg__1) {
  ::QPainter::setBrushOrigin(arg__1);
}
void QPainter_wrapper::setBrushOrigin(const QPointF &arg__1) {
  ::QPainter::setBrushOrigin(arg__1);
}
void QPainter_wrapper::setBrushOrigin(int x, int y) {
  ::QPainter::setBrushOrigin(x, y);
}
void QPainter_wrapper::setClipRect(const QRect &arg__1) {
  ::QPainter::setClipRect(arg__1);
}
void QPainter_wrapper::setClipRect(const QRectF &arg__1) {
  ::QPainter::setClipRect(arg__1);
}
void QPainter_wrapper::setClipRect(int x, int y, int w, int h) {
  ::QPainter::setClipRect(x, y, w, h);
}
void QPainter_wrapper::setClipRegion(const QRegion &arg__1) {
  ::QPainter::setClipRegion(arg__1);
}
void QPainter_wrapper::setClipping(bool enable) {
  ::QPainter::setClipping(enable);
}
void QPainter_wrapper::setFont(const QFont &f) { ::QPainter::setFont(f); }
void QPainter_wrapper::setLayoutDirection(Qt::LayoutDirection direction) {
  ::QPainter::setLayoutDirection(direction);
}
void QPainter_wrapper::setOpacity(qreal opacity) {
  ::QPainter::setOpacity(opacity);
}
void QPainter_wrapper::setPen(const QColor &color) {
  ::QPainter::setPen(color);
}
void QPainter_wrapper::setPen(const QPen &pen) { ::QPainter::setPen(pen); }
void QPainter_wrapper::setViewTransformEnabled(bool enable) {
  ::QPainter::setViewTransformEnabled(enable);
}
void QPainter_wrapper::setViewport(const QRect &viewport) {
  ::QPainter::setViewport(viewport);
}
void QPainter_wrapper::setViewport(int x, int y, int w, int h) {
  ::QPainter::setViewport(x, y, w, h);
}
void QPainter_wrapper::setWindow(const QRect &window) {
  ::QPainter::setWindow(window);
}
void QPainter_wrapper::setWindow(int x, int y, int w, int h) {
  ::QPainter::setWindow(x, y, w, h);
}
void QPainter_wrapper::setWorldMatrixEnabled(bool enabled) {
  ::QPainter::setWorldMatrixEnabled(enabled);
}
void QPainter_wrapper::shear(qreal sh, qreal sv) { ::QPainter::shear(sh, sv); }
void QPainter_wrapper::translate(const QPoint &offset) {
  ::QPainter::translate(offset);
}
void QPainter_wrapper::translate(const QPointF &offset) {
  ::QPainter::translate(offset);
}
void QPainter_wrapper::translate(qreal dx, qreal dy) {
  ::QPainter::translate(dx, dy);
}
bool QPainter_wrapper::viewTransformEnabled() const {
  return ::QPainter::viewTransformEnabled();
}
QRect QPainter_wrapper::viewport() const { return ::QPainter::viewport(); }
QRect QPainter_wrapper::window() const { return ::QPainter::window(); }
bool QPainter_wrapper::worldMatrixEnabled() const {
  return ::QPainter::worldMatrixEnabled();
}
QPainter_wrapper::~QPainter_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QPainter *fromPtr(void *ptr) {
  return reinterpret_cast<QPainter *>(ptr);
}
static QtDartBindings_wrappersNS::QPainter_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QPainter_wrapper *>(ptr);
}
extern "C" {
void c_QPainter_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QPainter_wrapper *>(
      cppObj);
}
void *c_QPainter__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QPainter_wrapper();
  return reinterpret_cast<void *>(ptr);
}
// background() const
void *c_QPainter__background(void *thisObj) {
  const auto &result = const_cast<void *>(
      static_cast<const void *>(&fromPtr(thisObj)->background()));
  return result;
}
// beginNativePainting()
void c_QPainter__beginNativePainting(void *thisObj) {
  fromPtr(thisObj)->beginNativePainting();
}
// boundingRect(const QRect & rect, int flags, const QString & text)
void *c_QPainter__boundingRect_QRect_int_QString(void *thisObj, void *rect_,
                                                 int flags, const char *text_) {
  assert(rect_);
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  const auto text = QString::fromUtf8(text_);
  const auto &result = new Dartagnan::ValueWrapper<QRect>{
      fromPtr(thisObj)->boundingRect(rect, flags, text)};
  free((char *)text_);
  return result;
}
// boundingRect(const QRectF & rect, const QString & text)
void *c_QPainter__boundingRect_QRectF_QString(void *thisObj, void *rect_,
                                              const char *text_) {
  assert(rect_);
  auto &rect = *reinterpret_cast<QRectF *>(rect_);
  const auto text = QString::fromUtf8(text_);
  const auto &result = new Dartagnan::ValueWrapper<QRectF>{
      fromPtr(thisObj)->boundingRect(rect, text)};
  free((char *)text_);
  return result;
}
// boundingRect(const QRectF & rect, int flags, const QString & text)
void *c_QPainter__boundingRect_QRectF_int_QString(void *thisObj, void *rect_,
                                                  int flags,
                                                  const char *text_) {
  assert(rect_);
  auto &rect = *reinterpret_cast<QRectF *>(rect_);
  const auto text = QString::fromUtf8(text_);
  const auto &result = new Dartagnan::ValueWrapper<QRectF>{
      fromPtr(thisObj)->boundingRect(rect, flags, text)};
  free((char *)text_);
  return result;
}
// boundingRect(int x, int y, int w, int h, int flags, const QString & text)
void *c_QPainter__boundingRect_int_int_int_int_int_QString(void *thisObj, int x,
                                                           int y, int w, int h,
                                                           int flags,
                                                           const char *text_) {
  const auto text = QString::fromUtf8(text_);
  const auto &result = new Dartagnan::ValueWrapper<QRect>{
      fromPtr(thisObj)->boundingRect(x, y, w, h, flags, text)};
  free((char *)text_);
  return result;
}
// brush() const
void *c_QPainter__brush(void *thisObj) {
  const auto &result =
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->brush()));
  return result;
}
// brushOrigin() const
void *c_QPainter__brushOrigin(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->brushOrigin()};
  return result;
}
// clipBoundingRect() const
void *c_QPainter__clipBoundingRect(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRectF>{fromPtr(thisObj)->clipBoundingRect()};
  return result;
}
// clipRegion() const
void *c_QPainter__clipRegion(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRegion>{fromPtr(thisObj)->clipRegion()};
  return result;
}
// drawArc(const QRect & arg__1, int a, int alen)
void c_QPainter__drawArc_QRect_int_int(void *thisObj, void *arg__1_, int a,
                                       int alen) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  fromPtr(thisObj)->drawArc(arg__1, a, alen);
}
// drawArc(const QRectF & rect, int a, int alen)
void c_QPainter__drawArc_QRectF_int_int(void *thisObj, void *rect_, int a,
                                        int alen) {
  assert(rect_);
  auto &rect = *reinterpret_cast<QRectF *>(rect_);
  fromPtr(thisObj)->drawArc(rect, a, alen);
}
// drawArc(int x, int y, int w, int h, int a, int alen)
void c_QPainter__drawArc_int_int_int_int_int_int(void *thisObj, int x, int y,
                                                 int w, int h, int a,
                                                 int alen) {
  fromPtr(thisObj)->drawArc(x, y, w, h, a, alen);
}
// drawChord(const QRect & arg__1, int a, int alen)
void c_QPainter__drawChord_QRect_int_int(void *thisObj, void *arg__1_, int a,
                                         int alen) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  fromPtr(thisObj)->drawChord(arg__1, a, alen);
}
// drawChord(const QRectF & rect, int a, int alen)
void c_QPainter__drawChord_QRectF_int_int(void *thisObj, void *rect_, int a,
                                          int alen) {
  assert(rect_);
  auto &rect = *reinterpret_cast<QRectF *>(rect_);
  fromPtr(thisObj)->drawChord(rect, a, alen);
}
// drawChord(int x, int y, int w, int h, int a, int alen)
void c_QPainter__drawChord_int_int_int_int_int_int(void *thisObj, int x, int y,
                                                   int w, int h, int a,
                                                   int alen) {
  fromPtr(thisObj)->drawChord(x, y, w, h, a, alen);
}
// drawConvexPolygon(const QPoint * points, int pointCount)
void c_QPainter__drawConvexPolygon_QPoint_int(void *thisObj, void *points_,
                                              int pointCount) {
  auto points = reinterpret_cast<QPoint *>(points_);
  fromPtr(thisObj)->drawConvexPolygon(points, pointCount);
}
// drawConvexPolygon(const QPointF * points, int pointCount)
void c_QPainter__drawConvexPolygon_QPointF_int(void *thisObj, void *points_,
                                               int pointCount) {
  auto points = reinterpret_cast<QPointF *>(points_);
  fromPtr(thisObj)->drawConvexPolygon(points, pointCount);
}
// drawEllipse(const QPoint & center, int rx, int ry)
void c_QPainter__drawEllipse_QPoint_int_int(void *thisObj, void *center_,
                                            int rx, int ry) {
  assert(center_);
  auto &center = *reinterpret_cast<QPoint *>(center_);
  fromPtr(thisObj)->drawEllipse(center, rx, ry);
}
// drawEllipse(const QPointF & center, qreal rx, qreal ry)
void c_QPainter__drawEllipse_QPointF_qreal_qreal(void *thisObj, void *center_,
                                                 qreal rx, qreal ry) {
  assert(center_);
  auto &center = *reinterpret_cast<QPointF *>(center_);
  fromPtr(thisObj)->drawEllipse(center, rx, ry);
}
// drawEllipse(const QRect & r)
void c_QPainter__drawEllipse_QRect(void *thisObj, void *r_) {
  assert(r_);
  auto &r = *reinterpret_cast<QRect *>(r_);
  fromPtr(thisObj)->drawEllipse(r);
}
// drawEllipse(const QRectF & r)
void c_QPainter__drawEllipse_QRectF(void *thisObj, void *r_) {
  assert(r_);
  auto &r = *reinterpret_cast<QRectF *>(r_);
  fromPtr(thisObj)->drawEllipse(r);
}
// drawEllipse(int x, int y, int w, int h)
void c_QPainter__drawEllipse_int_int_int_int(void *thisObj, int x, int y, int w,
                                             int h) {
  fromPtr(thisObj)->drawEllipse(x, y, w, h);
}
// drawLine(const QLine & line)
void c_QPainter__drawLine_QLine(void *thisObj, void *line_) {
  assert(line_);
  auto &line = *reinterpret_cast<QLine *>(line_);
  fromPtr(thisObj)->drawLine(line);
}
// drawLine(const QLineF & line)
void c_QPainter__drawLine_QLineF(void *thisObj, void *line_) {
  assert(line_);
  auto &line = *reinterpret_cast<QLineF *>(line_);
  fromPtr(thisObj)->drawLine(line);
}
// drawLine(const QPoint & p1, const QPoint & p2)
void c_QPainter__drawLine_QPoint_QPoint(void *thisObj, void *p1_, void *p2_) {
  assert(p1_);
  auto &p1 = *reinterpret_cast<QPoint *>(p1_);
  assert(p2_);
  auto &p2 = *reinterpret_cast<QPoint *>(p2_);
  fromPtr(thisObj)->drawLine(p1, p2);
}
// drawLine(const QPointF & p1, const QPointF & p2)
void c_QPainter__drawLine_QPointF_QPointF(void *thisObj, void *p1_, void *p2_) {
  assert(p1_);
  auto &p1 = *reinterpret_cast<QPointF *>(p1_);
  assert(p2_);
  auto &p2 = *reinterpret_cast<QPointF *>(p2_);
  fromPtr(thisObj)->drawLine(p1, p2);
}
// drawLine(int x1, int y1, int x2, int y2)
void c_QPainter__drawLine_int_int_int_int(void *thisObj, int x1, int y1, int x2,
                                          int y2) {
  fromPtr(thisObj)->drawLine(x1, y1, x2, y2);
}
// drawLines(const QLine * lines, int lineCount)
void c_QPainter__drawLines_QLine_int(void *thisObj, void *lines_,
                                     int lineCount) {
  auto lines = reinterpret_cast<QLine *>(lines_);
  fromPtr(thisObj)->drawLines(lines, lineCount);
}
// drawLines(const QLineF * lines, int lineCount)
void c_QPainter__drawLines_QLineF_int(void *thisObj, void *lines_,
                                      int lineCount) {
  auto lines = reinterpret_cast<QLineF *>(lines_);
  fromPtr(thisObj)->drawLines(lines, lineCount);
}
// drawLines(const QList<QLine > & lines)
void c_QPainter__drawLines_QList_QLine(void *thisObj, void *lines_) {
  assert(lines_);
  auto &lines = *reinterpret_cast<QList<QLine> *>(lines_);
  fromPtr(thisObj)->drawLines(lines);
}
// drawLines(const QList<QLineF > & lines)
void c_QPainter__drawLines_QList_QLineF(void *thisObj, void *lines_) {
  assert(lines_);
  auto &lines = *reinterpret_cast<QList<QLineF> *>(lines_);
  fromPtr(thisObj)->drawLines(lines);
}
// drawLines(const QList<QPoint > & pointPairs)
void c_QPainter__drawLines_QList_QPoint(void *thisObj, void *pointPairs_) {
  assert(pointPairs_);
  auto &pointPairs = *reinterpret_cast<QList<QPoint> *>(pointPairs_);
  fromPtr(thisObj)->drawLines(pointPairs);
}
// drawLines(const QList<QPointF > & pointPairs)
void c_QPainter__drawLines_QList_QPointF(void *thisObj, void *pointPairs_) {
  assert(pointPairs_);
  auto &pointPairs = *reinterpret_cast<QList<QPointF> *>(pointPairs_);
  fromPtr(thisObj)->drawLines(pointPairs);
}
// drawLines(const QPoint * pointPairs, int lineCount)
void c_QPainter__drawLines_QPoint_int(void *thisObj, void *pointPairs_,
                                      int lineCount) {
  auto pointPairs = reinterpret_cast<QPoint *>(pointPairs_);
  fromPtr(thisObj)->drawLines(pointPairs, lineCount);
}
// drawLines(const QPointF * pointPairs, int lineCount)
void c_QPainter__drawLines_QPointF_int(void *thisObj, void *pointPairs_,
                                       int lineCount) {
  auto pointPairs = reinterpret_cast<QPointF *>(pointPairs_);
  fromPtr(thisObj)->drawLines(pointPairs, lineCount);
}
// drawPie(const QRect & arg__1, int a, int alen)
void c_QPainter__drawPie_QRect_int_int(void *thisObj, void *arg__1_, int a,
                                       int alen) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  fromPtr(thisObj)->drawPie(arg__1, a, alen);
}
// drawPie(const QRectF & rect, int a, int alen)
void c_QPainter__drawPie_QRectF_int_int(void *thisObj, void *rect_, int a,
                                        int alen) {
  assert(rect_);
  auto &rect = *reinterpret_cast<QRectF *>(rect_);
  fromPtr(thisObj)->drawPie(rect, a, alen);
}
// drawPie(int x, int y, int w, int h, int a, int alen)
void c_QPainter__drawPie_int_int_int_int_int_int(void *thisObj, int x, int y,
                                                 int w, int h, int a,
                                                 int alen) {
  fromPtr(thisObj)->drawPie(x, y, w, h, a, alen);
}
// drawPixmap(const QPoint & p, const QPixmap & pm)
void c_QPainter__drawPixmap_QPoint_QPixmap(void *thisObj, void *p_, void *pm_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPoint *>(p_);
  assert(pm_);
  auto &pm = *reinterpret_cast<QPixmap *>(pm_);
  fromPtr(thisObj)->drawPixmap(p, pm);
}
// drawPixmap(const QPoint & p, const QPixmap & pm, const QRect & sr)
void c_QPainter__drawPixmap_QPoint_QPixmap_QRect(void *thisObj, void *p_,
                                                 void *pm_, void *sr_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPoint *>(p_);
  assert(pm_);
  auto &pm = *reinterpret_cast<QPixmap *>(pm_);
  assert(sr_);
  auto &sr = *reinterpret_cast<QRect *>(sr_);
  fromPtr(thisObj)->drawPixmap(p, pm, sr);
}
// drawPixmap(const QPointF & p, const QPixmap & pm)
void c_QPainter__drawPixmap_QPointF_QPixmap(void *thisObj, void *p_,
                                            void *pm_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPointF *>(p_);
  assert(pm_);
  auto &pm = *reinterpret_cast<QPixmap *>(pm_);
  fromPtr(thisObj)->drawPixmap(p, pm);
}
// drawPixmap(const QPointF & p, const QPixmap & pm, const QRectF & sr)
void c_QPainter__drawPixmap_QPointF_QPixmap_QRectF(void *thisObj, void *p_,
                                                   void *pm_, void *sr_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPointF *>(p_);
  assert(pm_);
  auto &pm = *reinterpret_cast<QPixmap *>(pm_);
  assert(sr_);
  auto &sr = *reinterpret_cast<QRectF *>(sr_);
  fromPtr(thisObj)->drawPixmap(p, pm, sr);
}
// drawPixmap(const QRect & r, const QPixmap & pm)
void c_QPainter__drawPixmap_QRect_QPixmap(void *thisObj, void *r_, void *pm_) {
  assert(r_);
  auto &r = *reinterpret_cast<QRect *>(r_);
  assert(pm_);
  auto &pm = *reinterpret_cast<QPixmap *>(pm_);
  fromPtr(thisObj)->drawPixmap(r, pm);
}
// drawPixmap(const QRect & targetRect, const QPixmap & pixmap, const QRect &
// sourceRect)
void c_QPainter__drawPixmap_QRect_QPixmap_QRect(void *thisObj,
                                                void *targetRect_,
                                                void *pixmap_,
                                                void *sourceRect_) {
  assert(targetRect_);
  auto &targetRect = *reinterpret_cast<QRect *>(targetRect_);
  assert(pixmap_);
  auto &pixmap = *reinterpret_cast<QPixmap *>(pixmap_);
  assert(sourceRect_);
  auto &sourceRect = *reinterpret_cast<QRect *>(sourceRect_);
  fromPtr(thisObj)->drawPixmap(targetRect, pixmap, sourceRect);
}
// drawPixmap(const QRectF & targetRect, const QPixmap & pixmap, const QRectF &
// sourceRect)
void c_QPainter__drawPixmap_QRectF_QPixmap_QRectF(void *thisObj,
                                                  void *targetRect_,
                                                  void *pixmap_,
                                                  void *sourceRect_) {
  assert(targetRect_);
  auto &targetRect = *reinterpret_cast<QRectF *>(targetRect_);
  assert(pixmap_);
  auto &pixmap = *reinterpret_cast<QPixmap *>(pixmap_);
  assert(sourceRect_);
  auto &sourceRect = *reinterpret_cast<QRectF *>(sourceRect_);
  fromPtr(thisObj)->drawPixmap(targetRect, pixmap, sourceRect);
}
// drawPixmap(int x, int y, const QPixmap & pm)
void c_QPainter__drawPixmap_int_int_QPixmap(void *thisObj, int x, int y,
                                            void *pm_) {
  assert(pm_);
  auto &pm = *reinterpret_cast<QPixmap *>(pm_);
  fromPtr(thisObj)->drawPixmap(x, y, pm);
}
// drawPixmap(int x, int y, const QPixmap & pm, int sx, int sy, int sw, int sh)
void c_QPainter__drawPixmap_int_int_QPixmap_int_int_int_int(
    void *thisObj, int x, int y, void *pm_, int sx, int sy, int sw, int sh) {
  assert(pm_);
  auto &pm = *reinterpret_cast<QPixmap *>(pm_);
  fromPtr(thisObj)->drawPixmap(x, y, pm, sx, sy, sw, sh);
}
// drawPixmap(int x, int y, int w, int h, const QPixmap & pm)
void c_QPainter__drawPixmap_int_int_int_int_QPixmap(void *thisObj, int x, int y,
                                                    int w, int h, void *pm_) {
  assert(pm_);
  auto &pm = *reinterpret_cast<QPixmap *>(pm_);
  fromPtr(thisObj)->drawPixmap(x, y, w, h, pm);
}
// drawPixmap(int x, int y, int w, int h, const QPixmap & pm, int sx, int sy,
// int sw, int sh)
void c_QPainter__drawPixmap_int_int_int_int_QPixmap_int_int_int_int(
    void *thisObj, int x, int y, int w, int h, void *pm_, int sx, int sy,
    int sw, int sh) {
  assert(pm_);
  auto &pm = *reinterpret_cast<QPixmap *>(pm_);
  fromPtr(thisObj)->drawPixmap(x, y, w, h, pm, sx, sy, sw, sh);
}
// drawPoint(const QPoint & p)
void c_QPainter__drawPoint_QPoint(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPoint *>(p_);
  fromPtr(thisObj)->drawPoint(p);
}
// drawPoint(const QPointF & pt)
void c_QPainter__drawPoint_QPointF(void *thisObj, void *pt_) {
  assert(pt_);
  auto &pt = *reinterpret_cast<QPointF *>(pt_);
  fromPtr(thisObj)->drawPoint(pt);
}
// drawPoint(int x, int y)
void c_QPainter__drawPoint_int_int(void *thisObj, int x, int y) {
  fromPtr(thisObj)->drawPoint(x, y);
}
// drawPoints(const QPoint * points, int pointCount)
void c_QPainter__drawPoints_QPoint_int(void *thisObj, void *points_,
                                       int pointCount) {
  auto points = reinterpret_cast<QPoint *>(points_);
  fromPtr(thisObj)->drawPoints(points, pointCount);
}
// drawPoints(const QPointF * points, int pointCount)
void c_QPainter__drawPoints_QPointF_int(void *thisObj, void *points_,
                                        int pointCount) {
  auto points = reinterpret_cast<QPointF *>(points_);
  fromPtr(thisObj)->drawPoints(points, pointCount);
}
// drawPolygon(const QPoint * points, int pointCount)
void c_QPainter__drawPolygon_QPoint_int(void *thisObj, void *points_,
                                        int pointCount) {
  auto points = reinterpret_cast<QPoint *>(points_);
  fromPtr(thisObj)->drawPolygon(points, pointCount);
}
// drawPolygon(const QPointF * points, int pointCount)
void c_QPainter__drawPolygon_QPointF_int(void *thisObj, void *points_,
                                         int pointCount) {
  auto points = reinterpret_cast<QPointF *>(points_);
  fromPtr(thisObj)->drawPolygon(points, pointCount);
}
// drawPolyline(const QPoint * points, int pointCount)
void c_QPainter__drawPolyline_QPoint_int(void *thisObj, void *points_,
                                         int pointCount) {
  auto points = reinterpret_cast<QPoint *>(points_);
  fromPtr(thisObj)->drawPolyline(points, pointCount);
}
// drawPolyline(const QPointF * points, int pointCount)
void c_QPainter__drawPolyline_QPointF_int(void *thisObj, void *points_,
                                          int pointCount) {
  auto points = reinterpret_cast<QPointF *>(points_);
  fromPtr(thisObj)->drawPolyline(points, pointCount);
}
// drawRect(const QRect & rect)
void c_QPainter__drawRect_QRect(void *thisObj, void *rect_) {
  assert(rect_);
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  fromPtr(thisObj)->drawRect(rect);
}
// drawRect(const QRectF & rect)
void c_QPainter__drawRect_QRectF(void *thisObj, void *rect_) {
  assert(rect_);
  auto &rect = *reinterpret_cast<QRectF *>(rect_);
  fromPtr(thisObj)->drawRect(rect);
}
// drawRect(int x1, int y1, int w, int h)
void c_QPainter__drawRect_int_int_int_int(void *thisObj, int x1, int y1, int w,
                                          int h) {
  fromPtr(thisObj)->drawRect(x1, y1, w, h);
}
// drawRects(const QList<QRect > & rectangles)
void c_QPainter__drawRects_QList_QRect(void *thisObj, void *rectangles_) {
  assert(rectangles_);
  auto &rectangles = *reinterpret_cast<QList<QRect> *>(rectangles_);
  fromPtr(thisObj)->drawRects(rectangles);
}
// drawRects(const QList<QRectF > & rectangles)
void c_QPainter__drawRects_QList_QRectF(void *thisObj, void *rectangles_) {
  assert(rectangles_);
  auto &rectangles = *reinterpret_cast<QList<QRectF> *>(rectangles_);
  fromPtr(thisObj)->drawRects(rectangles);
}
// drawRects(const QRect * rects, int rectCount)
void c_QPainter__drawRects_QRect_int(void *thisObj, void *rects_,
                                     int rectCount) {
  auto rects = reinterpret_cast<QRect *>(rects_);
  fromPtr(thisObj)->drawRects(rects, rectCount);
}
// drawRects(const QRectF * rects, int rectCount)
void c_QPainter__drawRects_QRectF_int(void *thisObj, void *rects_,
                                      int rectCount) {
  auto rects = reinterpret_cast<QRectF *>(rects_);
  fromPtr(thisObj)->drawRects(rects, rectCount);
}
// drawRoundedRect(const QRect & rect, qreal xRadius, qreal yRadius)
void c_QPainter__drawRoundedRect_QRect_qreal_qreal(void *thisObj, void *rect_,
                                                   qreal xRadius,
                                                   qreal yRadius) {
  assert(rect_);
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  fromPtr(thisObj)->drawRoundedRect(rect, xRadius, yRadius);
}
// drawRoundedRect(const QRectF & rect, qreal xRadius, qreal yRadius)
void c_QPainter__drawRoundedRect_QRectF_qreal_qreal(void *thisObj, void *rect_,
                                                    qreal xRadius,
                                                    qreal yRadius) {
  assert(rect_);
  auto &rect = *reinterpret_cast<QRectF *>(rect_);
  fromPtr(thisObj)->drawRoundedRect(rect, xRadius, yRadius);
}
// drawRoundedRect(int x, int y, int w, int h, qreal xRadius, qreal yRadius)
void c_QPainter__drawRoundedRect_int_int_int_int_qreal_qreal(
    void *thisObj, int x, int y, int w, int h, qreal xRadius, qreal yRadius) {
  fromPtr(thisObj)->drawRoundedRect(x, y, w, h, xRadius, yRadius);
}
// drawText(const QPoint & p, const QString & s)
void c_QPainter__drawText_QPoint_QString(void *thisObj, void *p_,
                                         const char *s_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPoint *>(p_);
  const auto s = QString::fromUtf8(s_);
  fromPtr(thisObj)->drawText(p, s);
  free((char *)s_);
}
// drawText(const QPointF & p, const QString & s)
void c_QPainter__drawText_QPointF_QString(void *thisObj, void *p_,
                                          const char *s_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPointF *>(p_);
  const auto s = QString::fromUtf8(s_);
  fromPtr(thisObj)->drawText(p, s);
  free((char *)s_);
}
// drawText(const QPointF & p, const QString & str, int tf, int
// justificationPadding)
void c_QPainter__drawText_QPointF_QString_int_int(void *thisObj, void *p_,
                                                  const char *str_, int tf,
                                                  int justificationPadding) {
  assert(p_);
  auto &p = *reinterpret_cast<QPointF *>(p_);
  const auto str = QString::fromUtf8(str_);
  fromPtr(thisObj)->drawText(p, str, tf, justificationPadding);
  free((char *)str_);
}
// drawText(const QRect & r, int flags, const QString & text, QRect * br)
void c_QPainter__drawText_QRect_int_QString_QRect(void *thisObj, void *r_,
                                                  int flags, const char *text_,
                                                  void *br_) {
  assert(r_);
  auto &r = *reinterpret_cast<QRect *>(r_);
  const auto text = QString::fromUtf8(text_);
  auto br = reinterpret_cast<QRect *>(br_);
  fromPtr(thisObj)->drawText(r, flags, text, br);
  free((char *)text_);
}
// drawText(const QRectF & r, const QString & text)
void c_QPainter__drawText_QRectF_QString(void *thisObj, void *r_,
                                         const char *text_) {
  assert(r_);
  auto &r = *reinterpret_cast<QRectF *>(r_);
  const auto text = QString::fromUtf8(text_);
  fromPtr(thisObj)->drawText(r, text);
  free((char *)text_);
}
// drawText(const QRectF & r, int flags, const QString & text, QRectF * br)
void c_QPainter__drawText_QRectF_int_QString_QRectF(void *thisObj, void *r_,
                                                    int flags,
                                                    const char *text_,
                                                    void *br_) {
  assert(r_);
  auto &r = *reinterpret_cast<QRectF *>(r_);
  const auto text = QString::fromUtf8(text_);
  auto br = reinterpret_cast<QRectF *>(br_);
  fromPtr(thisObj)->drawText(r, flags, text, br);
  free((char *)text_);
}
// drawText(int x, int y, const QString & s)
void c_QPainter__drawText_int_int_QString(void *thisObj, int x, int y,
                                          const char *s_) {
  const auto s = QString::fromUtf8(s_);
  fromPtr(thisObj)->drawText(x, y, s);
  free((char *)s_);
}
// drawText(int x, int y, int w, int h, int flags, const QString & text, QRect *
// br)
void c_QPainter__drawText_int_int_int_int_int_QString_QRect(void *thisObj,
                                                            int x, int y, int w,
                                                            int h, int flags,
                                                            const char *text_,
                                                            void *br_) {
  const auto text = QString::fromUtf8(text_);
  auto br = reinterpret_cast<QRect *>(br_);
  fromPtr(thisObj)->drawText(x, y, w, h, flags, text, br);
  free((char *)text_);
}
// drawTiledPixmap(const QRect & arg__1, const QPixmap & arg__2, const QPoint &
// arg__3)
void c_QPainter__drawTiledPixmap_QRect_QPixmap_QPoint(void *thisObj,
                                                      void *arg__1_,
                                                      void *arg__2_,
                                                      void *arg__3_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  assert(arg__2_);
  auto &arg__2 = *reinterpret_cast<QPixmap *>(arg__2_);
  assert(arg__3_);
  auto &arg__3 = *reinterpret_cast<QPoint *>(arg__3_);
  fromPtr(thisObj)->drawTiledPixmap(arg__1, arg__2, arg__3);
}
// drawTiledPixmap(const QRectF & rect, const QPixmap & pm, const QPointF &
// offset)
void c_QPainter__drawTiledPixmap_QRectF_QPixmap_QPointF(void *thisObj,
                                                        void *rect_, void *pm_,
                                                        void *offset_) {
  assert(rect_);
  auto &rect = *reinterpret_cast<QRectF *>(rect_);
  assert(pm_);
  auto &pm = *reinterpret_cast<QPixmap *>(pm_);
  assert(offset_);
  auto &offset = *reinterpret_cast<QPointF *>(offset_);
  fromPtr(thisObj)->drawTiledPixmap(rect, pm, offset);
}
// drawTiledPixmap(int x, int y, int w, int h, const QPixmap & arg__5, int sx,
// int sy)
void c_QPainter__drawTiledPixmap_int_int_int_int_QPixmap_int_int(
    void *thisObj, int x, int y, int w, int h, void *arg__5_, int sx, int sy) {
  assert(arg__5_);
  auto &arg__5 = *reinterpret_cast<QPixmap *>(arg__5_);
  fromPtr(thisObj)->drawTiledPixmap(x, y, w, h, arg__5, sx, sy);
}
// end()
bool c_QPainter__end(void *thisObj) {
  const auto &result = fromPtr(thisObj)->end();
  return result;
}
// endNativePainting()
void c_QPainter__endNativePainting(void *thisObj) {
  fromPtr(thisObj)->endNativePainting();
}
// eraseRect(const QRect & arg__1)
void c_QPainter__eraseRect_QRect(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  fromPtr(thisObj)->eraseRect(arg__1);
}
// eraseRect(const QRectF & arg__1)
void c_QPainter__eraseRect_QRectF(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRectF *>(arg__1_);
  fromPtr(thisObj)->eraseRect(arg__1);
}
// eraseRect(int x, int y, int w, int h)
void c_QPainter__eraseRect_int_int_int_int(void *thisObj, int x, int y, int w,
                                           int h) {
  fromPtr(thisObj)->eraseRect(x, y, w, h);
}
// fillRect(const QRect & arg__1, const QBrush & arg__2)
void c_QPainter__fillRect_QRect_QBrush(void *thisObj, void *arg__1_,
                                       void *arg__2_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  assert(arg__2_);
  auto &arg__2 = *reinterpret_cast<QBrush *>(arg__2_);
  fromPtr(thisObj)->fillRect(arg__1, arg__2);
}
// fillRect(const QRect & arg__1, const QColor & color)
void c_QPainter__fillRect_QRect_QColor(void *thisObj, void *arg__1_,
                                       void *color_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  assert(color_);
  auto &color = *reinterpret_cast<QColor *>(color_);
  fromPtr(thisObj)->fillRect(arg__1, color);
}
// fillRect(const QRectF & arg__1, const QBrush & arg__2)
void c_QPainter__fillRect_QRectF_QBrush(void *thisObj, void *arg__1_,
                                        void *arg__2_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRectF *>(arg__1_);
  assert(arg__2_);
  auto &arg__2 = *reinterpret_cast<QBrush *>(arg__2_);
  fromPtr(thisObj)->fillRect(arg__1, arg__2);
}
// fillRect(const QRectF & arg__1, const QColor & color)
void c_QPainter__fillRect_QRectF_QColor(void *thisObj, void *arg__1_,
                                        void *color_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRectF *>(arg__1_);
  assert(color_);
  auto &color = *reinterpret_cast<QColor *>(color_);
  fromPtr(thisObj)->fillRect(arg__1, color);
}
// fillRect(int x, int y, int w, int h, const QBrush & arg__5)
void c_QPainter__fillRect_int_int_int_int_QBrush(void *thisObj, int x, int y,
                                                 int w, int h, void *arg__5_) {
  assert(arg__5_);
  auto &arg__5 = *reinterpret_cast<QBrush *>(arg__5_);
  fromPtr(thisObj)->fillRect(x, y, w, h, arg__5);
}
// fillRect(int x, int y, int w, int h, const QColor & color)
void c_QPainter__fillRect_int_int_int_int_QColor(void *thisObj, int x, int y,
                                                 int w, int h, void *color_) {
  assert(color_);
  auto &color = *reinterpret_cast<QColor *>(color_);
  fromPtr(thisObj)->fillRect(x, y, w, h, color);
}
// font() const
void *c_QPainter__font(void *thisObj) {
  const auto &result =
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->font()));
  return result;
}
// hasClipping() const
bool c_QPainter__hasClipping(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hasClipping();
  return result;
}
// isActive() const
bool c_QPainter__isActive(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isActive();
  return result;
}
// layoutDirection() const
int c_QPainter__layoutDirection(void *thisObj) {
  const auto &result = int(fromPtr(thisObj)->layoutDirection());
  return result;
}
// opacity() const
qreal c_QPainter__opacity(void *thisObj) {
  const auto &result = fromPtr(thisObj)->opacity();
  return result;
}
// pen() const
void *c_QPainter__pen(void *thisObj) {
  const auto &result =
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->pen()));
  return result;
}
// resetTransform()
void c_QPainter__resetTransform(void *thisObj) {
  fromPtr(thisObj)->resetTransform();
}
// restore()
void c_QPainter__restore(void *thisObj) { fromPtr(thisObj)->restore(); }
// rotate(qreal a)
void c_QPainter__rotate_qreal(void *thisObj, qreal a) {
  fromPtr(thisObj)->rotate(a);
}
// save()
void c_QPainter__save(void *thisObj) { fromPtr(thisObj)->save(); }
// scale(qreal sx, qreal sy)
void c_QPainter__scale_qreal_qreal(void *thisObj, qreal sx, qreal sy) {
  fromPtr(thisObj)->scale(sx, sy);
}
// setBackground(const QBrush & bg)
void c_QPainter__setBackground_QBrush(void *thisObj, void *bg_) {
  assert(bg_);
  auto &bg = *reinterpret_cast<QBrush *>(bg_);
  fromPtr(thisObj)->setBackground(bg);
}
// setBrush(const QBrush & brush)
void c_QPainter__setBrush_QBrush(void *thisObj, void *brush_) {
  assert(brush_);
  auto &brush = *reinterpret_cast<QBrush *>(brush_);
  fromPtr(thisObj)->setBrush(brush);
}
// setBrushOrigin(const QPoint & arg__1)
void c_QPainter__setBrushOrigin_QPoint(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QPoint *>(arg__1_);
  fromPtr(thisObj)->setBrushOrigin(arg__1);
}
// setBrushOrigin(const QPointF & arg__1)
void c_QPainter__setBrushOrigin_QPointF(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QPointF *>(arg__1_);
  fromPtr(thisObj)->setBrushOrigin(arg__1);
}
// setBrushOrigin(int x, int y)
void c_QPainter__setBrushOrigin_int_int(void *thisObj, int x, int y) {
  fromPtr(thisObj)->setBrushOrigin(x, y);
}
// setClipRect(const QRect & arg__1)
void c_QPainter__setClipRect_QRect(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  fromPtr(thisObj)->setClipRect(arg__1);
}
// setClipRect(const QRectF & arg__1)
void c_QPainter__setClipRect_QRectF(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRectF *>(arg__1_);
  fromPtr(thisObj)->setClipRect(arg__1);
}
// setClipRect(int x, int y, int w, int h)
void c_QPainter__setClipRect_int_int_int_int(void *thisObj, int x, int y, int w,
                                             int h) {
  fromPtr(thisObj)->setClipRect(x, y, w, h);
}
// setClipRegion(const QRegion & arg__1)
void c_QPainter__setClipRegion_QRegion(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRegion *>(arg__1_);
  fromPtr(thisObj)->setClipRegion(arg__1);
}
// setClipping(bool enable)
void c_QPainter__setClipping_bool(void *thisObj, bool enable) {
  fromPtr(thisObj)->setClipping(enable);
}
// setFont(const QFont & f)
void c_QPainter__setFont_QFont(void *thisObj, void *f_) {
  assert(f_);
  auto &f = *reinterpret_cast<QFont *>(f_);
  fromPtr(thisObj)->setFont(f);
}
// setLayoutDirection(Qt::LayoutDirection direction)
void c_QPainter__setLayoutDirection_LayoutDirection(void *thisObj,
                                                    int direction) {
  fromPtr(thisObj)->setLayoutDirection(
      static_cast<Qt::LayoutDirection>(direction));
}
// setOpacity(qreal opacity)
void c_QPainter__setOpacity_qreal(void *thisObj, qreal opacity) {
  fromPtr(thisObj)->setOpacity(opacity);
}
// setPen(const QColor & color)
void c_QPainter__setPen_QColor(void *thisObj, void *color_) {
  assert(color_);
  auto &color = *reinterpret_cast<QColor *>(color_);
  fromPtr(thisObj)->setPen(color);
}
// setPen(const QPen & pen)
void c_QPainter__setPen_QPen(void *thisObj, void *pen_) {
  assert(pen_);
  auto &pen = *reinterpret_cast<QPen *>(pen_);
  fromPtr(thisObj)->setPen(pen);
}
// setViewTransformEnabled(bool enable)
void c_QPainter__setViewTransformEnabled_bool(void *thisObj, bool enable) {
  fromPtr(thisObj)->setViewTransformEnabled(enable);
}
// setViewport(const QRect & viewport)
void c_QPainter__setViewport_QRect(void *thisObj, void *viewport_) {
  assert(viewport_);
  auto &viewport = *reinterpret_cast<QRect *>(viewport_);
  fromPtr(thisObj)->setViewport(viewport);
}
// setViewport(int x, int y, int w, int h)
void c_QPainter__setViewport_int_int_int_int(void *thisObj, int x, int y, int w,
                                             int h) {
  fromPtr(thisObj)->setViewport(x, y, w, h);
}
// setWindow(const QRect & window)
void c_QPainter__setWindow_QRect(void *thisObj, void *window_) {
  assert(window_);
  auto &window = *reinterpret_cast<QRect *>(window_);
  fromPtr(thisObj)->setWindow(window);
}
// setWindow(int x, int y, int w, int h)
void c_QPainter__setWindow_int_int_int_int(void *thisObj, int x, int y, int w,
                                           int h) {
  fromPtr(thisObj)->setWindow(x, y, w, h);
}
// setWorldMatrixEnabled(bool enabled)
void c_QPainter__setWorldMatrixEnabled_bool(void *thisObj, bool enabled) {
  fromPtr(thisObj)->setWorldMatrixEnabled(enabled);
}
// shear(qreal sh, qreal sv)
void c_QPainter__shear_qreal_qreal(void *thisObj, qreal sh, qreal sv) {
  fromPtr(thisObj)->shear(sh, sv);
}
// translate(const QPoint & offset)
void c_QPainter__translate_QPoint(void *thisObj, void *offset_) {
  assert(offset_);
  auto &offset = *reinterpret_cast<QPoint *>(offset_);
  fromPtr(thisObj)->translate(offset);
}
// translate(const QPointF & offset)
void c_QPainter__translate_QPointF(void *thisObj, void *offset_) {
  assert(offset_);
  auto &offset = *reinterpret_cast<QPointF *>(offset_);
  fromPtr(thisObj)->translate(offset);
}
// translate(qreal dx, qreal dy)
void c_QPainter__translate_qreal_qreal(void *thisObj, qreal dx, qreal dy) {
  fromPtr(thisObj)->translate(dx, dy);
}
// viewTransformEnabled() const
bool c_QPainter__viewTransformEnabled(void *thisObj) {
  const auto &result = fromPtr(thisObj)->viewTransformEnabled();
  return result;
}
// viewport() const
void *c_QPainter__viewport(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->viewport()};
  return result;
}
// window() const
void *c_QPainter__window(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->window()};
  return result;
}
// worldMatrixEnabled() const
bool c_QPainter__worldMatrixEnabled(void *thisObj) {
  const auto &result = fromPtr(thisObj)->worldMatrixEnabled();
  return result;
}
void c_QPainter__destructor(void *thisObj) { delete fromPtr(thisObj); }
}
