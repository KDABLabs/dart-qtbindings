#include "QPainter_wrapper.h"

#include <QDebug>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
// tag=1006
QPainter_wrapper::QPainter_wrapper() : ::QPainter() {}
const QBrush &QPainter_wrapper::background() const {
  // tag=1000

  // tag=1004
  return ::QPainter::background();
}
void QPainter_wrapper::beginNativePainting() {
  // tag=1000

  // tag=1004
  ::QPainter::beginNativePainting();
}
QRect QPainter_wrapper::boundingRect(const QRect &rect, int flags,
                                     const QString &text) {
  // tag=1000

  // tag=1004
  return ::QPainter::boundingRect(rect, flags, text);
}
QRectF QPainter_wrapper::boundingRect(const QRectF &rect, const QString &text) {
  // tag=1000

  // tag=1004
  return ::QPainter::boundingRect(rect, text);
}
QRectF QPainter_wrapper::boundingRect(const QRectF &rect, int flags,
                                      const QString &text) {
  // tag=1000

  // tag=1004
  return ::QPainter::boundingRect(rect, flags, text);
}
QRect QPainter_wrapper::boundingRect(int x, int y, int w, int h, int flags,
                                     const QString &text) {
  // tag=1000

  // tag=1004
  return ::QPainter::boundingRect(x, y, w, h, flags, text);
}
const QBrush &QPainter_wrapper::brush() const {
  // tag=1000

  // tag=1004
  return ::QPainter::brush();
}
QPoint QPainter_wrapper::brushOrigin() const {
  // tag=1000

  // tag=1004
  return ::QPainter::brushOrigin();
}
QRectF QPainter_wrapper::clipBoundingRect() const {
  // tag=1000

  // tag=1004
  return ::QPainter::clipBoundingRect();
}
QRegion QPainter_wrapper::clipRegion() const {
  // tag=1000

  // tag=1004
  return ::QPainter::clipRegion();
}
void QPainter_wrapper::drawArc(const QRect &arg__1, int a, int alen) {
  // tag=1000

  // tag=1004
  ::QPainter::drawArc(arg__1, a, alen);
}
void QPainter_wrapper::drawArc(const QRectF &rect, int a, int alen) {
  // tag=1000

  // tag=1004
  ::QPainter::drawArc(rect, a, alen);
}
void QPainter_wrapper::drawArc(int x, int y, int w, int h, int a, int alen) {
  // tag=1000

  // tag=1004
  ::QPainter::drawArc(x, y, w, h, a, alen);
}
void QPainter_wrapper::drawChord(const QRect &arg__1, int a, int alen) {
  // tag=1000

  // tag=1004
  ::QPainter::drawChord(arg__1, a, alen);
}
void QPainter_wrapper::drawChord(const QRectF &rect, int a, int alen) {
  // tag=1000

  // tag=1004
  ::QPainter::drawChord(rect, a, alen);
}
void QPainter_wrapper::drawChord(int x, int y, int w, int h, int a, int alen) {
  // tag=1000

  // tag=1004
  ::QPainter::drawChord(x, y, w, h, a, alen);
}
void QPainter_wrapper::drawConvexPolygon(const QPoint *points, int pointCount) {
  // tag=1000

  // tag=1004
  ::QPainter::drawConvexPolygon(points, pointCount);
}
void QPainter_wrapper::drawConvexPolygon(const QPointF *points,
                                         int pointCount) {
  // tag=1000

  // tag=1004
  ::QPainter::drawConvexPolygon(points, pointCount);
}
void QPainter_wrapper::drawEllipse(const QPoint &center, int rx, int ry) {
  // tag=1000

  // tag=1004
  ::QPainter::drawEllipse(center, rx, ry);
}
void QPainter_wrapper::drawEllipse(const QPointF &center, qreal rx, qreal ry) {
  // tag=1000

  // tag=1004
  ::QPainter::drawEllipse(center, rx, ry);
}
void QPainter_wrapper::drawEllipse(const QRect &r) {
  // tag=1000

  // tag=1004
  ::QPainter::drawEllipse(r);
}
void QPainter_wrapper::drawEllipse(const QRectF &r) {
  // tag=1000

  // tag=1004
  ::QPainter::drawEllipse(r);
}
void QPainter_wrapper::drawEllipse(int x, int y, int w, int h) {
  // tag=1000

  // tag=1004
  ::QPainter::drawEllipse(x, y, w, h);
}
void QPainter_wrapper::drawLine(const QLine &line) {
  // tag=1000

  // tag=1004
  ::QPainter::drawLine(line);
}
void QPainter_wrapper::drawLine(const QLineF &line) {
  // tag=1000

  // tag=1004
  ::QPainter::drawLine(line);
}
void QPainter_wrapper::drawLine(const QPoint &p1, const QPoint &p2) {
  // tag=1000

  // tag=1004
  ::QPainter::drawLine(p1, p2);
}
void QPainter_wrapper::drawLine(const QPointF &p1, const QPointF &p2) {
  // tag=1000

  // tag=1004
  ::QPainter::drawLine(p1, p2);
}
void QPainter_wrapper::drawLine(int x1, int y1, int x2, int y2) {
  // tag=1000

  // tag=1004
  ::QPainter::drawLine(x1, y1, x2, y2);
}
void QPainter_wrapper::drawLines(const QLine *lines, int lineCount) {
  // tag=1000

  // tag=1004
  ::QPainter::drawLines(lines, lineCount);
}
void QPainter_wrapper::drawLines(const QLineF *lines, int lineCount) {
  // tag=1000

  // tag=1004
  ::QPainter::drawLines(lines, lineCount);
}
void QPainter_wrapper::drawLines(const QList<QLine> &lines) {
  // tag=1000

  // tag=1004
  ::QPainter::drawLines(lines);
}
void QPainter_wrapper::drawLines(const QList<QLineF> &lines) {
  // tag=1000

  // tag=1004
  ::QPainter::drawLines(lines);
}
void QPainter_wrapper::drawLines(const QList<QPoint> &pointPairs) {
  // tag=1000

  // tag=1004
  ::QPainter::drawLines(pointPairs);
}
void QPainter_wrapper::drawLines(const QList<QPointF> &pointPairs) {
  // tag=1000

  // tag=1004
  ::QPainter::drawLines(pointPairs);
}
void QPainter_wrapper::drawLines(const QPoint *pointPairs, int lineCount) {
  // tag=1000

  // tag=1004
  ::QPainter::drawLines(pointPairs, lineCount);
}
void QPainter_wrapper::drawLines(const QPointF *pointPairs, int lineCount) {
  // tag=1000

  // tag=1004
  ::QPainter::drawLines(pointPairs, lineCount);
}
void QPainter_wrapper::drawPie(const QRect &arg__1, int a, int alen) {
  // tag=1000

  // tag=1004
  ::QPainter::drawPie(arg__1, a, alen);
}
void QPainter_wrapper::drawPie(const QRectF &rect, int a, int alen) {
  // tag=1000

  // tag=1004
  ::QPainter::drawPie(rect, a, alen);
}
void QPainter_wrapper::drawPie(int x, int y, int w, int h, int a, int alen) {
  // tag=1000

  // tag=1004
  ::QPainter::drawPie(x, y, w, h, a, alen);
}
void QPainter_wrapper::drawPixmap(const QPoint &p, const QPixmap &pm) {
  // tag=1000

  // tag=1004
  ::QPainter::drawPixmap(p, pm);
}
void QPainter_wrapper::drawPixmap(const QPoint &p, const QPixmap &pm,
                                  const QRect &sr) {
  // tag=1000

  // tag=1004
  ::QPainter::drawPixmap(p, pm, sr);
}
void QPainter_wrapper::drawPixmap(const QPointF &p, const QPixmap &pm) {
  // tag=1000

  // tag=1004
  ::QPainter::drawPixmap(p, pm);
}
void QPainter_wrapper::drawPixmap(const QPointF &p, const QPixmap &pm,
                                  const QRectF &sr) {
  // tag=1000

  // tag=1004
  ::QPainter::drawPixmap(p, pm, sr);
}
void QPainter_wrapper::drawPixmap(const QRect &r, const QPixmap &pm) {
  // tag=1000

  // tag=1004
  ::QPainter::drawPixmap(r, pm);
}
void QPainter_wrapper::drawPixmap(const QRect &targetRect,
                                  const QPixmap &pixmap,
                                  const QRect &sourceRect) {
  // tag=1000

  // tag=1004
  ::QPainter::drawPixmap(targetRect, pixmap, sourceRect);
}
void QPainter_wrapper::drawPixmap(const QRectF &targetRect,
                                  const QPixmap &pixmap,
                                  const QRectF &sourceRect) {
  // tag=1000

  // tag=1004
  ::QPainter::drawPixmap(targetRect, pixmap, sourceRect);
}
void QPainter_wrapper::drawPixmap(int x, int y, const QPixmap &pm) {
  // tag=1000

  // tag=1004
  ::QPainter::drawPixmap(x, y, pm);
}
void QPainter_wrapper::drawPixmap(int x, int y, const QPixmap &pm, int sx,
                                  int sy, int sw, int sh) {
  // tag=1000

  // tag=1004
  ::QPainter::drawPixmap(x, y, pm, sx, sy, sw, sh);
}
void QPainter_wrapper::drawPixmap(int x, int y, int w, int h,
                                  const QPixmap &pm) {
  // tag=1000

  // tag=1004
  ::QPainter::drawPixmap(x, y, w, h, pm);
}
void QPainter_wrapper::drawPixmap(int x, int y, int w, int h, const QPixmap &pm,
                                  int sx, int sy, int sw, int sh) {
  // tag=1000

  // tag=1004
  ::QPainter::drawPixmap(x, y, w, h, pm, sx, sy, sw, sh);
}
void QPainter_wrapper::drawPoint(const QPoint &p) {
  // tag=1000

  // tag=1004
  ::QPainter::drawPoint(p);
}
void QPainter_wrapper::drawPoint(const QPointF &pt) {
  // tag=1000

  // tag=1004
  ::QPainter::drawPoint(pt);
}
void QPainter_wrapper::drawPoint(int x, int y) {
  // tag=1000

  // tag=1004
  ::QPainter::drawPoint(x, y);
}
void QPainter_wrapper::drawPoints(const QPoint *points, int pointCount) {
  // tag=1000

  // tag=1004
  ::QPainter::drawPoints(points, pointCount);
}
void QPainter_wrapper::drawPoints(const QPointF *points, int pointCount) {
  // tag=1000

  // tag=1004
  ::QPainter::drawPoints(points, pointCount);
}
void QPainter_wrapper::drawPolygon(const QPoint *points, int pointCount) {
  // tag=1000

  // tag=1004
  ::QPainter::drawPolygon(points, pointCount);
}
void QPainter_wrapper::drawPolygon(const QPointF *points, int pointCount) {
  // tag=1000

  // tag=1004
  ::QPainter::drawPolygon(points, pointCount);
}
void QPainter_wrapper::drawPolyline(const QPoint *points, int pointCount) {
  // tag=1000

  // tag=1004
  ::QPainter::drawPolyline(points, pointCount);
}
void QPainter_wrapper::drawPolyline(const QPointF *points, int pointCount) {
  // tag=1000

  // tag=1004
  ::QPainter::drawPolyline(points, pointCount);
}
void QPainter_wrapper::drawRect(const QRect &rect) {
  // tag=1000

  // tag=1004
  ::QPainter::drawRect(rect);
}
void QPainter_wrapper::drawRect(const QRectF &rect) {
  // tag=1000

  // tag=1004
  ::QPainter::drawRect(rect);
}
void QPainter_wrapper::drawRect(int x1, int y1, int w, int h) {
  // tag=1000

  // tag=1004
  ::QPainter::drawRect(x1, y1, w, h);
}
void QPainter_wrapper::drawRects(const QList<QRect> &rectangles) {
  // tag=1000

  // tag=1004
  ::QPainter::drawRects(rectangles);
}
void QPainter_wrapper::drawRects(const QList<QRectF> &rectangles) {
  // tag=1000

  // tag=1004
  ::QPainter::drawRects(rectangles);
}
void QPainter_wrapper::drawRects(const QRect *rects, int rectCount) {
  // tag=1000

  // tag=1004
  ::QPainter::drawRects(rects, rectCount);
}
void QPainter_wrapper::drawRects(const QRectF *rects, int rectCount) {
  // tag=1000

  // tag=1004
  ::QPainter::drawRects(rects, rectCount);
}
void QPainter_wrapper::drawRoundedRect(const QRect &rect, qreal xRadius,
                                       qreal yRadius) {
  // tag=1000

  // tag=1004
  ::QPainter::drawRoundedRect(rect, xRadius, yRadius);
}
void QPainter_wrapper::drawRoundedRect(const QRectF &rect, qreal xRadius,
                                       qreal yRadius) {
  // tag=1000

  // tag=1004
  ::QPainter::drawRoundedRect(rect, xRadius, yRadius);
}
void QPainter_wrapper::drawRoundedRect(int x, int y, int w, int h,
                                       qreal xRadius, qreal yRadius) {
  // tag=1000

  // tag=1004
  ::QPainter::drawRoundedRect(x, y, w, h, xRadius, yRadius);
}
void QPainter_wrapper::drawText(const QPoint &p, const QString &s) {
  // tag=1000

  // tag=1004
  ::QPainter::drawText(p, s);
}
void QPainter_wrapper::drawText(const QPointF &p, const QString &s) {
  // tag=1000

  // tag=1004
  ::QPainter::drawText(p, s);
}
void QPainter_wrapper::drawText(const QPointF &p, const QString &str, int tf,
                                int justificationPadding) {
  // tag=1000

  // tag=1004
  ::QPainter::drawText(p, str, tf, justificationPadding);
}
void QPainter_wrapper::drawText(const QRect &r, int flags, const QString &text,
                                QRect *br) {
  // tag=1000

  // tag=1004
  ::QPainter::drawText(r, flags, text, br);
}
void QPainter_wrapper::drawText(const QRectF &r, const QString &text) {
  // tag=1000

  // tag=1004
  ::QPainter::drawText(r, text);
}
void QPainter_wrapper::drawText(const QRectF &r, int flags, const QString &text,
                                QRectF *br) {
  // tag=1000

  // tag=1004
  ::QPainter::drawText(r, flags, text, br);
}
void QPainter_wrapper::drawText(int x, int y, const QString &s) {
  // tag=1000

  // tag=1004
  ::QPainter::drawText(x, y, s);
}
void QPainter_wrapper::drawText(int x, int y, int w, int h, int flags,
                                const QString &text, QRect *br) {
  // tag=1000

  // tag=1004
  ::QPainter::drawText(x, y, w, h, flags, text, br);
}
void QPainter_wrapper::drawTiledPixmap(const QRect &arg__1,
                                       const QPixmap &arg__2,
                                       const QPoint &arg__3) {
  // tag=1000

  // tag=1004
  ::QPainter::drawTiledPixmap(arg__1, arg__2, arg__3);
}
void QPainter_wrapper::drawTiledPixmap(const QRectF &rect, const QPixmap &pm,
                                       const QPointF &offset) {
  // tag=1000

  // tag=1004
  ::QPainter::drawTiledPixmap(rect, pm, offset);
}
void QPainter_wrapper::drawTiledPixmap(int x, int y, int w, int h,
                                       const QPixmap &arg__5, int sx, int sy) {
  // tag=1000

  // tag=1004
  ::QPainter::drawTiledPixmap(x, y, w, h, arg__5, sx, sy);
}
bool QPainter_wrapper::end() {
  // tag=1000

  // tag=1004
  return ::QPainter::end();
}
void QPainter_wrapper::endNativePainting() {
  // tag=1000

  // tag=1004
  ::QPainter::endNativePainting();
}
void QPainter_wrapper::eraseRect(const QRect &arg__1) {
  // tag=1000

  // tag=1004
  ::QPainter::eraseRect(arg__1);
}
void QPainter_wrapper::eraseRect(const QRectF &arg__1) {
  // tag=1000

  // tag=1004
  ::QPainter::eraseRect(arg__1);
}
void QPainter_wrapper::eraseRect(int x, int y, int w, int h) {
  // tag=1000

  // tag=1004
  ::QPainter::eraseRect(x, y, w, h);
}
void QPainter_wrapper::fillRect(const QRect &arg__1, const QBrush &arg__2) {
  // tag=1000

  // tag=1004
  ::QPainter::fillRect(arg__1, arg__2);
}
void QPainter_wrapper::fillRect(const QRect &arg__1, const QColor &color) {
  // tag=1000

  // tag=1004
  ::QPainter::fillRect(arg__1, color);
}
void QPainter_wrapper::fillRect(const QRectF &arg__1, const QBrush &arg__2) {
  // tag=1000

  // tag=1004
  ::QPainter::fillRect(arg__1, arg__2);
}
void QPainter_wrapper::fillRect(const QRectF &arg__1, const QColor &color) {
  // tag=1000

  // tag=1004
  ::QPainter::fillRect(arg__1, color);
}
void QPainter_wrapper::fillRect(int x, int y, int w, int h,
                                const QBrush &arg__5) {
  // tag=1000

  // tag=1004
  ::QPainter::fillRect(x, y, w, h, arg__5);
}
void QPainter_wrapper::fillRect(int x, int y, int w, int h,
                                const QColor &color) {
  // tag=1000

  // tag=1004
  ::QPainter::fillRect(x, y, w, h, color);
}
const QFont &QPainter_wrapper::font() const {
  // tag=1000

  // tag=1004
  return ::QPainter::font();
}
bool QPainter_wrapper::hasClipping() const {
  // tag=1000

  // tag=1004
  return ::QPainter::hasClipping();
}
bool QPainter_wrapper::isActive() const {
  // tag=1000

  // tag=1004
  return ::QPainter::isActive();
}
Qt::LayoutDirection QPainter_wrapper::layoutDirection() const {
  // tag=1000

  // tag=1004
  return ::QPainter::layoutDirection();
}
qreal QPainter_wrapper::opacity() const {
  // tag=1000

  // tag=1004
  return ::QPainter::opacity();
}
const QPen &QPainter_wrapper::pen() const {
  // tag=1000

  // tag=1004
  return ::QPainter::pen();
}
void QPainter_wrapper::resetTransform() {
  // tag=1000

  // tag=1004
  ::QPainter::resetTransform();
}
void QPainter_wrapper::restore() {
  // tag=1000

  // tag=1004
  ::QPainter::restore();
}
void QPainter_wrapper::rotate(qreal a) {
  // tag=1000

  // tag=1004
  ::QPainter::rotate(a);
}
void QPainter_wrapper::save() {
  // tag=1000

  // tag=1004
  ::QPainter::save();
}
void QPainter_wrapper::scale(qreal sx, qreal sy) {
  // tag=1000

  // tag=1004
  ::QPainter::scale(sx, sy);
}
void QPainter_wrapper::setBackground(const QBrush &bg) {
  // tag=1000

  // tag=1004
  ::QPainter::setBackground(bg);
}
void QPainter_wrapper::setBrush(const QBrush &brush) {
  // tag=1000

  // tag=1004
  ::QPainter::setBrush(brush);
}
void QPainter_wrapper::setBrushOrigin(const QPoint &arg__1) {
  // tag=1000

  // tag=1004
  ::QPainter::setBrushOrigin(arg__1);
}
void QPainter_wrapper::setBrushOrigin(const QPointF &arg__1) {
  // tag=1000

  // tag=1004
  ::QPainter::setBrushOrigin(arg__1);
}
void QPainter_wrapper::setBrushOrigin(int x, int y) {
  // tag=1000

  // tag=1004
  ::QPainter::setBrushOrigin(x, y);
}
void QPainter_wrapper::setClipRect(const QRect &arg__1) {
  // tag=1000

  // tag=1004
  ::QPainter::setClipRect(arg__1);
}
void QPainter_wrapper::setClipRect(const QRectF &arg__1) {
  // tag=1000

  // tag=1004
  ::QPainter::setClipRect(arg__1);
}
void QPainter_wrapper::setClipRect(int x, int y, int w, int h) {
  // tag=1000

  // tag=1004
  ::QPainter::setClipRect(x, y, w, h);
}
void QPainter_wrapper::setClipRegion(const QRegion &arg__1) {
  // tag=1000

  // tag=1004
  ::QPainter::setClipRegion(arg__1);
}
void QPainter_wrapper::setClipping(bool enable) {
  // tag=1000

  // tag=1004
  ::QPainter::setClipping(enable);
}
void QPainter_wrapper::setFont(const QFont &f) {
  // tag=1000

  // tag=1004
  ::QPainter::setFont(f);
}
void QPainter_wrapper::setLayoutDirection(Qt::LayoutDirection direction) {
  // tag=1000

  // tag=1004
  ::QPainter::setLayoutDirection(direction);
}
void QPainter_wrapper::setOpacity(qreal opacity) {
  // tag=1000

  // tag=1004
  ::QPainter::setOpacity(opacity);
}
void QPainter_wrapper::setPen(const QColor &color) {
  // tag=1000

  // tag=1004
  ::QPainter::setPen(color);
}
void QPainter_wrapper::setPen(const QPen &pen) {
  // tag=1000

  // tag=1004
  ::QPainter::setPen(pen);
}
void QPainter_wrapper::setViewTransformEnabled(bool enable) {
  // tag=1000

  // tag=1004
  ::QPainter::setViewTransformEnabled(enable);
}
void QPainter_wrapper::setViewport(const QRect &viewport) {
  // tag=1000

  // tag=1004
  ::QPainter::setViewport(viewport);
}
void QPainter_wrapper::setViewport(int x, int y, int w, int h) {
  // tag=1000

  // tag=1004
  ::QPainter::setViewport(x, y, w, h);
}
void QPainter_wrapper::setWindow(const QRect &window) {
  // tag=1000

  // tag=1004
  ::QPainter::setWindow(window);
}
void QPainter_wrapper::setWindow(int x, int y, int w, int h) {
  // tag=1000

  // tag=1004
  ::QPainter::setWindow(x, y, w, h);
}
void QPainter_wrapper::setWorldMatrixEnabled(bool enabled) {
  // tag=1000

  // tag=1004
  ::QPainter::setWorldMatrixEnabled(enabled);
}
void QPainter_wrapper::shear(qreal sh, qreal sv) {
  // tag=1000

  // tag=1004
  ::QPainter::shear(sh, sv);
}
void QPainter_wrapper::translate(const QPoint &offset) {
  // tag=1000

  // tag=1004
  ::QPainter::translate(offset);
}
void QPainter_wrapper::translate(const QPointF &offset) {
  // tag=1000

  // tag=1004
  ::QPainter::translate(offset);
}
void QPainter_wrapper::translate(qreal dx, qreal dy) {
  // tag=1000

  // tag=1004
  ::QPainter::translate(dx, dy);
}
bool QPainter_wrapper::viewTransformEnabled() const {
  // tag=1000

  // tag=1004
  return ::QPainter::viewTransformEnabled();
}
QRect QPainter_wrapper::viewport() const {
  // tag=1000

  // tag=1004
  return ::QPainter::viewport();
}
QRect QPainter_wrapper::window() const {
  // tag=1000

  // tag=1004
  return ::QPainter::window();
}
bool QPainter_wrapper::worldMatrixEnabled() const {
  // tag=1000

  // tag=1004
  return ::QPainter::worldMatrixEnabled();
}

// tag=1005
QPainter_wrapper::~QPainter_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QPainter *fromPtr(void *ptr) {
  return reinterpret_cast<QPainter *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QPainter_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QPainter_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QPainter_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QPainter_wrapper *>(
      cppObj);
}
void *c_QPainter__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QPainter_wrapper();
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// background() const
void *c_QPainter__background(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(
          static_cast<const void *>(&fromPtr(thisObj)->background()));
}

// tag=1050
// beginNativePainting()
void c_QPainter__beginNativePainting(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->beginNativePainting();
}

// tag=1050
// boundingRect(const QRect & rect, int flags, const QString & text)
void *c_QPainter__boundingRect_QRect_int_QString(void *thisObj, void *rect_,
                                                 int flags, const char *text_) {
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  const auto text = QString::fromUtf8(text_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{
          fromPtr(thisObj)->boundingRect(rect, flags, text)};
}

// tag=1050
// boundingRect(const QRectF & rect, const QString & text)
void *c_QPainter__boundingRect_QRectF_QString(void *thisObj, void *rect_,
                                              const char *text_) {
  auto &rect = *reinterpret_cast<QRectF *>(rect_);
  const auto text = QString::fromUtf8(text_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRectF>{
          fromPtr(thisObj)->boundingRect(rect, text)};
}

// tag=1050
// boundingRect(const QRectF & rect, int flags, const QString & text)
void *c_QPainter__boundingRect_QRectF_int_QString(void *thisObj, void *rect_,
                                                  int flags,
                                                  const char *text_) {
  auto &rect = *reinterpret_cast<QRectF *>(rect_);
  const auto text = QString::fromUtf8(text_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRectF>{
          fromPtr(thisObj)->boundingRect(rect, flags, text)};
}

// tag=1050
// boundingRect(int x, int y, int w, int h, int flags, const QString & text)
void *c_QPainter__boundingRect_int_int_int_int_int_QString(void *thisObj, int x,
                                                           int y, int w, int h,
                                                           int flags,
                                                           const char *text_) {
  const auto text = QString::fromUtf8(text_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{
          fromPtr(thisObj)->boundingRect(x, y, w, h, flags, text)};
}

// tag=1050
// brush() const
void *c_QPainter__brush(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->brush()));
}

// tag=1050
// brushOrigin() const
void *c_QPainter__brushOrigin(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->brushOrigin()};
}

// tag=1050
// clipBoundingRect() const
void *c_QPainter__clipBoundingRect(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRectF>{fromPtr(thisObj)->clipBoundingRect()};
}

// tag=1050
// clipRegion() const
void *c_QPainter__clipRegion(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRegion>{fromPtr(thisObj)->clipRegion()};
}

// tag=1050
// drawArc(const QRect & arg__1, int a, int alen)
void c_QPainter__drawArc_QRect_int_int(void *thisObj, void *arg__1_, int a,
                                       int alen) {
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->drawArc(arg__1, a, alen);
}

// tag=1050
// drawArc(const QRectF & rect, int a, int alen)
void c_QPainter__drawArc_QRectF_int_int(void *thisObj, void *rect_, int a,
                                        int alen) {
  auto &rect = *reinterpret_cast<QRectF *>(rect_);
  // tag=1010
  fromPtr(thisObj)->drawArc(rect, a, alen);
}

// tag=1050
// drawArc(int x, int y, int w, int h, int a, int alen)
void c_QPainter__drawArc_int_int_int_int_int_int(void *thisObj, int x, int y,
                                                 int w, int h, int a,
                                                 int alen) {
  // tag=1010
  fromPtr(thisObj)->drawArc(x, y, w, h, a, alen);
}

// tag=1050
// drawChord(const QRect & arg__1, int a, int alen)
void c_QPainter__drawChord_QRect_int_int(void *thisObj, void *arg__1_, int a,
                                         int alen) {
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->drawChord(arg__1, a, alen);
}

// tag=1050
// drawChord(const QRectF & rect, int a, int alen)
void c_QPainter__drawChord_QRectF_int_int(void *thisObj, void *rect_, int a,
                                          int alen) {
  auto &rect = *reinterpret_cast<QRectF *>(rect_);
  // tag=1010
  fromPtr(thisObj)->drawChord(rect, a, alen);
}

// tag=1050
// drawChord(int x, int y, int w, int h, int a, int alen)
void c_QPainter__drawChord_int_int_int_int_int_int(void *thisObj, int x, int y,
                                                   int w, int h, int a,
                                                   int alen) {
  // tag=1010
  fromPtr(thisObj)->drawChord(x, y, w, h, a, alen);
}

// tag=1050
// drawConvexPolygon(const QPoint * points, int pointCount)
void c_QPainter__drawConvexPolygon_QPoint_int(void *thisObj, void *points_,
                                              int pointCount) {
  auto points = reinterpret_cast<QPoint *>(points_);
  // tag=1010
  fromPtr(thisObj)->drawConvexPolygon(points, pointCount);
}

// tag=1050
// drawConvexPolygon(const QPointF * points, int pointCount)
void c_QPainter__drawConvexPolygon_QPointF_int(void *thisObj, void *points_,
                                               int pointCount) {
  auto points = reinterpret_cast<QPointF *>(points_);
  // tag=1010
  fromPtr(thisObj)->drawConvexPolygon(points, pointCount);
}

// tag=1050
// drawEllipse(const QPoint & center, int rx, int ry)
void c_QPainter__drawEllipse_QPoint_int_int(void *thisObj, void *center_,
                                            int rx, int ry) {
  auto &center = *reinterpret_cast<QPoint *>(center_);
  // tag=1010
  fromPtr(thisObj)->drawEllipse(center, rx, ry);
}

// tag=1050
// drawEllipse(const QPointF & center, qreal rx, qreal ry)
void c_QPainter__drawEllipse_QPointF_qreal_qreal(void *thisObj, void *center_,
                                                 qreal rx, qreal ry) {
  auto &center = *reinterpret_cast<QPointF *>(center_);
  // tag=1010
  fromPtr(thisObj)->drawEllipse(center, rx, ry);
}

// tag=1050
// drawEllipse(const QRect & r)
void c_QPainter__drawEllipse_QRect(void *thisObj, void *r_) {
  auto &r = *reinterpret_cast<QRect *>(r_);
  // tag=1010
  fromPtr(thisObj)->drawEllipse(r);
}

// tag=1050
// drawEllipse(const QRectF & r)
void c_QPainter__drawEllipse_QRectF(void *thisObj, void *r_) {
  auto &r = *reinterpret_cast<QRectF *>(r_);
  // tag=1010
  fromPtr(thisObj)->drawEllipse(r);
}

// tag=1050
// drawEllipse(int x, int y, int w, int h)
void c_QPainter__drawEllipse_int_int_int_int(void *thisObj, int x, int y, int w,
                                             int h) {
  // tag=1010
  fromPtr(thisObj)->drawEllipse(x, y, w, h);
}

// tag=1050
// drawLine(const QLine & line)
void c_QPainter__drawLine_QLine(void *thisObj, void *line_) {
  auto &line = *reinterpret_cast<QLine *>(line_);
  // tag=1010
  fromPtr(thisObj)->drawLine(line);
}

// tag=1050
// drawLine(const QLineF & line)
void c_QPainter__drawLine_QLineF(void *thisObj, void *line_) {
  auto &line = *reinterpret_cast<QLineF *>(line_);
  // tag=1010
  fromPtr(thisObj)->drawLine(line);
}

// tag=1050
// drawLine(const QPoint & p1, const QPoint & p2)
void c_QPainter__drawLine_QPoint_QPoint(void *thisObj, void *p1_, void *p2_) {
  auto &p1 = *reinterpret_cast<QPoint *>(p1_);
  auto &p2 = *reinterpret_cast<QPoint *>(p2_);
  // tag=1010
  fromPtr(thisObj)->drawLine(p1, p2);
}

// tag=1050
// drawLine(const QPointF & p1, const QPointF & p2)
void c_QPainter__drawLine_QPointF_QPointF(void *thisObj, void *p1_, void *p2_) {
  auto &p1 = *reinterpret_cast<QPointF *>(p1_);
  auto &p2 = *reinterpret_cast<QPointF *>(p2_);
  // tag=1010
  fromPtr(thisObj)->drawLine(p1, p2);
}

// tag=1050
// drawLine(int x1, int y1, int x2, int y2)
void c_QPainter__drawLine_int_int_int_int(void *thisObj, int x1, int y1, int x2,
                                          int y2) {
  // tag=1010
  fromPtr(thisObj)->drawLine(x1, y1, x2, y2);
}

// tag=1050
// drawLines(const QLine * lines, int lineCount)
void c_QPainter__drawLines_QLine_int(void *thisObj, void *lines_,
                                     int lineCount) {
  auto lines = reinterpret_cast<QLine *>(lines_);
  // tag=1010
  fromPtr(thisObj)->drawLines(lines, lineCount);
}

// tag=1050
// drawLines(const QLineF * lines, int lineCount)
void c_QPainter__drawLines_QLineF_int(void *thisObj, void *lines_,
                                      int lineCount) {
  auto lines = reinterpret_cast<QLineF *>(lines_);
  // tag=1010
  fromPtr(thisObj)->drawLines(lines, lineCount);
}

// tag=1050
// drawLines(const QList<QLine > & lines)
void c_QPainter__drawLines_QList_QLine(void *thisObj, void *lines_) {
  auto &lines = *reinterpret_cast<QList<QLine> *>(lines_);
  // tag=1010
  fromPtr(thisObj)->drawLines(lines);
}

// tag=1050
// drawLines(const QList<QLineF > & lines)
void c_QPainter__drawLines_QList_QLineF(void *thisObj, void *lines_) {
  auto &lines = *reinterpret_cast<QList<QLineF> *>(lines_);
  // tag=1010
  fromPtr(thisObj)->drawLines(lines);
}

// tag=1050
// drawLines(const QList<QPoint > & pointPairs)
void c_QPainter__drawLines_QList_QPoint(void *thisObj, void *pointPairs_) {
  auto &pointPairs = *reinterpret_cast<QList<QPoint> *>(pointPairs_);
  // tag=1010
  fromPtr(thisObj)->drawLines(pointPairs);
}

// tag=1050
// drawLines(const QList<QPointF > & pointPairs)
void c_QPainter__drawLines_QList_QPointF(void *thisObj, void *pointPairs_) {
  auto &pointPairs = *reinterpret_cast<QList<QPointF> *>(pointPairs_);
  // tag=1010
  fromPtr(thisObj)->drawLines(pointPairs);
}

// tag=1050
// drawLines(const QPoint * pointPairs, int lineCount)
void c_QPainter__drawLines_QPoint_int(void *thisObj, void *pointPairs_,
                                      int lineCount) {
  auto pointPairs = reinterpret_cast<QPoint *>(pointPairs_);
  // tag=1010
  fromPtr(thisObj)->drawLines(pointPairs, lineCount);
}

// tag=1050
// drawLines(const QPointF * pointPairs, int lineCount)
void c_QPainter__drawLines_QPointF_int(void *thisObj, void *pointPairs_,
                                       int lineCount) {
  auto pointPairs = reinterpret_cast<QPointF *>(pointPairs_);
  // tag=1010
  fromPtr(thisObj)->drawLines(pointPairs, lineCount);
}

// tag=1050
// drawPie(const QRect & arg__1, int a, int alen)
void c_QPainter__drawPie_QRect_int_int(void *thisObj, void *arg__1_, int a,
                                       int alen) {
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->drawPie(arg__1, a, alen);
}

// tag=1050
// drawPie(const QRectF & rect, int a, int alen)
void c_QPainter__drawPie_QRectF_int_int(void *thisObj, void *rect_, int a,
                                        int alen) {
  auto &rect = *reinterpret_cast<QRectF *>(rect_);
  // tag=1010
  fromPtr(thisObj)->drawPie(rect, a, alen);
}

// tag=1050
// drawPie(int x, int y, int w, int h, int a, int alen)
void c_QPainter__drawPie_int_int_int_int_int_int(void *thisObj, int x, int y,
                                                 int w, int h, int a,
                                                 int alen) {
  // tag=1010
  fromPtr(thisObj)->drawPie(x, y, w, h, a, alen);
}

// tag=1050
// drawPixmap(const QPoint & p, const QPixmap & pm)
void c_QPainter__drawPixmap_QPoint_QPixmap(void *thisObj, void *p_, void *pm_) {
  auto &p = *reinterpret_cast<QPoint *>(p_);
  auto &pm = *reinterpret_cast<QPixmap *>(pm_);
  // tag=1010
  fromPtr(thisObj)->drawPixmap(p, pm);
}

// tag=1050
// drawPixmap(const QPoint & p, const QPixmap & pm, const QRect & sr)
void c_QPainter__drawPixmap_QPoint_QPixmap_QRect(void *thisObj, void *p_,
                                                 void *pm_, void *sr_) {
  auto &p = *reinterpret_cast<QPoint *>(p_);
  auto &pm = *reinterpret_cast<QPixmap *>(pm_);
  auto &sr = *reinterpret_cast<QRect *>(sr_);
  // tag=1010
  fromPtr(thisObj)->drawPixmap(p, pm, sr);
}

// tag=1050
// drawPixmap(const QPointF & p, const QPixmap & pm)
void c_QPainter__drawPixmap_QPointF_QPixmap(void *thisObj, void *p_,
                                            void *pm_) {
  auto &p = *reinterpret_cast<QPointF *>(p_);
  auto &pm = *reinterpret_cast<QPixmap *>(pm_);
  // tag=1010
  fromPtr(thisObj)->drawPixmap(p, pm);
}

// tag=1050
// drawPixmap(const QPointF & p, const QPixmap & pm, const QRectF & sr)
void c_QPainter__drawPixmap_QPointF_QPixmap_QRectF(void *thisObj, void *p_,
                                                   void *pm_, void *sr_) {
  auto &p = *reinterpret_cast<QPointF *>(p_);
  auto &pm = *reinterpret_cast<QPixmap *>(pm_);
  auto &sr = *reinterpret_cast<QRectF *>(sr_);
  // tag=1010
  fromPtr(thisObj)->drawPixmap(p, pm, sr);
}

// tag=1050
// drawPixmap(const QRect & r, const QPixmap & pm)
void c_QPainter__drawPixmap_QRect_QPixmap(void *thisObj, void *r_, void *pm_) {
  auto &r = *reinterpret_cast<QRect *>(r_);
  auto &pm = *reinterpret_cast<QPixmap *>(pm_);
  // tag=1010
  fromPtr(thisObj)->drawPixmap(r, pm);
}

// tag=1050
// drawPixmap(const QRect & targetRect, const QPixmap & pixmap, const QRect &
// sourceRect)
void c_QPainter__drawPixmap_QRect_QPixmap_QRect(void *thisObj,
                                                void *targetRect_,
                                                void *pixmap_,
                                                void *sourceRect_) {
  auto &targetRect = *reinterpret_cast<QRect *>(targetRect_);
  auto &pixmap = *reinterpret_cast<QPixmap *>(pixmap_);
  auto &sourceRect = *reinterpret_cast<QRect *>(sourceRect_);
  // tag=1010
  fromPtr(thisObj)->drawPixmap(targetRect, pixmap, sourceRect);
}

// tag=1050
// drawPixmap(const QRectF & targetRect, const QPixmap & pixmap, const QRectF &
// sourceRect)
void c_QPainter__drawPixmap_QRectF_QPixmap_QRectF(void *thisObj,
                                                  void *targetRect_,
                                                  void *pixmap_,
                                                  void *sourceRect_) {
  auto &targetRect = *reinterpret_cast<QRectF *>(targetRect_);
  auto &pixmap = *reinterpret_cast<QPixmap *>(pixmap_);
  auto &sourceRect = *reinterpret_cast<QRectF *>(sourceRect_);
  // tag=1010
  fromPtr(thisObj)->drawPixmap(targetRect, pixmap, sourceRect);
}

// tag=1050
// drawPixmap(int x, int y, const QPixmap & pm)
void c_QPainter__drawPixmap_int_int_QPixmap(void *thisObj, int x, int y,
                                            void *pm_) {
  auto &pm = *reinterpret_cast<QPixmap *>(pm_);
  // tag=1010
  fromPtr(thisObj)->drawPixmap(x, y, pm);
}

// tag=1050
// drawPixmap(int x, int y, const QPixmap & pm, int sx, int sy, int sw, int sh)
void c_QPainter__drawPixmap_int_int_QPixmap_int_int_int_int(
    void *thisObj, int x, int y, void *pm_, int sx, int sy, int sw, int sh) {
  auto &pm = *reinterpret_cast<QPixmap *>(pm_);
  // tag=1010
  fromPtr(thisObj)->drawPixmap(x, y, pm, sx, sy, sw, sh);
}

// tag=1050
// drawPixmap(int x, int y, int w, int h, const QPixmap & pm)
void c_QPainter__drawPixmap_int_int_int_int_QPixmap(void *thisObj, int x, int y,
                                                    int w, int h, void *pm_) {
  auto &pm = *reinterpret_cast<QPixmap *>(pm_);
  // tag=1010
  fromPtr(thisObj)->drawPixmap(x, y, w, h, pm);
}

// tag=1050
// drawPixmap(int x, int y, int w, int h, const QPixmap & pm, int sx, int sy,
// int sw, int sh)
void c_QPainter__drawPixmap_int_int_int_int_QPixmap_int_int_int_int(
    void *thisObj, int x, int y, int w, int h, void *pm_, int sx, int sy,
    int sw, int sh) {
  auto &pm = *reinterpret_cast<QPixmap *>(pm_);
  // tag=1010
  fromPtr(thisObj)->drawPixmap(x, y, w, h, pm, sx, sy, sw, sh);
}

// tag=1050
// drawPoint(const QPoint & p)
void c_QPainter__drawPoint_QPoint(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPoint *>(p_);
  // tag=1010
  fromPtr(thisObj)->drawPoint(p);
}

// tag=1050
// drawPoint(const QPointF & pt)
void c_QPainter__drawPoint_QPointF(void *thisObj, void *pt_) {
  auto &pt = *reinterpret_cast<QPointF *>(pt_);
  // tag=1010
  fromPtr(thisObj)->drawPoint(pt);
}

// tag=1050
// drawPoint(int x, int y)
void c_QPainter__drawPoint_int_int(void *thisObj, int x, int y) {
  // tag=1010
  fromPtr(thisObj)->drawPoint(x, y);
}

// tag=1050
// drawPoints(const QPoint * points, int pointCount)
void c_QPainter__drawPoints_QPoint_int(void *thisObj, void *points_,
                                       int pointCount) {
  auto points = reinterpret_cast<QPoint *>(points_);
  // tag=1010
  fromPtr(thisObj)->drawPoints(points, pointCount);
}

// tag=1050
// drawPoints(const QPointF * points, int pointCount)
void c_QPainter__drawPoints_QPointF_int(void *thisObj, void *points_,
                                        int pointCount) {
  auto points = reinterpret_cast<QPointF *>(points_);
  // tag=1010
  fromPtr(thisObj)->drawPoints(points, pointCount);
}

// tag=1050
// drawPolygon(const QPoint * points, int pointCount)
void c_QPainter__drawPolygon_QPoint_int(void *thisObj, void *points_,
                                        int pointCount) {
  auto points = reinterpret_cast<QPoint *>(points_);
  // tag=1010
  fromPtr(thisObj)->drawPolygon(points, pointCount);
}

// tag=1050
// drawPolygon(const QPointF * points, int pointCount)
void c_QPainter__drawPolygon_QPointF_int(void *thisObj, void *points_,
                                         int pointCount) {
  auto points = reinterpret_cast<QPointF *>(points_);
  // tag=1010
  fromPtr(thisObj)->drawPolygon(points, pointCount);
}

// tag=1050
// drawPolyline(const QPoint * points, int pointCount)
void c_QPainter__drawPolyline_QPoint_int(void *thisObj, void *points_,
                                         int pointCount) {
  auto points = reinterpret_cast<QPoint *>(points_);
  // tag=1010
  fromPtr(thisObj)->drawPolyline(points, pointCount);
}

// tag=1050
// drawPolyline(const QPointF * points, int pointCount)
void c_QPainter__drawPolyline_QPointF_int(void *thisObj, void *points_,
                                          int pointCount) {
  auto points = reinterpret_cast<QPointF *>(points_);
  // tag=1010
  fromPtr(thisObj)->drawPolyline(points, pointCount);
}

// tag=1050
// drawRect(const QRect & rect)
void c_QPainter__drawRect_QRect(void *thisObj, void *rect_) {
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  // tag=1010
  fromPtr(thisObj)->drawRect(rect);
}

// tag=1050
// drawRect(const QRectF & rect)
void c_QPainter__drawRect_QRectF(void *thisObj, void *rect_) {
  auto &rect = *reinterpret_cast<QRectF *>(rect_);
  // tag=1010
  fromPtr(thisObj)->drawRect(rect);
}

// tag=1050
// drawRect(int x1, int y1, int w, int h)
void c_QPainter__drawRect_int_int_int_int(void *thisObj, int x1, int y1, int w,
                                          int h) {
  // tag=1010
  fromPtr(thisObj)->drawRect(x1, y1, w, h);
}

// tag=1050
// drawRects(const QList<QRect > & rectangles)
void c_QPainter__drawRects_QList_QRect(void *thisObj, void *rectangles_) {
  auto &rectangles = *reinterpret_cast<QList<QRect> *>(rectangles_);
  // tag=1010
  fromPtr(thisObj)->drawRects(rectangles);
}

// tag=1050
// drawRects(const QList<QRectF > & rectangles)
void c_QPainter__drawRects_QList_QRectF(void *thisObj, void *rectangles_) {
  auto &rectangles = *reinterpret_cast<QList<QRectF> *>(rectangles_);
  // tag=1010
  fromPtr(thisObj)->drawRects(rectangles);
}

// tag=1050
// drawRects(const QRect * rects, int rectCount)
void c_QPainter__drawRects_QRect_int(void *thisObj, void *rects_,
                                     int rectCount) {
  auto rects = reinterpret_cast<QRect *>(rects_);
  // tag=1010
  fromPtr(thisObj)->drawRects(rects, rectCount);
}

// tag=1050
// drawRects(const QRectF * rects, int rectCount)
void c_QPainter__drawRects_QRectF_int(void *thisObj, void *rects_,
                                      int rectCount) {
  auto rects = reinterpret_cast<QRectF *>(rects_);
  // tag=1010
  fromPtr(thisObj)->drawRects(rects, rectCount);
}

// tag=1050
// drawRoundedRect(const QRect & rect, qreal xRadius, qreal yRadius)
void c_QPainter__drawRoundedRect_QRect_qreal_qreal(void *thisObj, void *rect_,
                                                   qreal xRadius,
                                                   qreal yRadius) {
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  // tag=1010
  fromPtr(thisObj)->drawRoundedRect(rect, xRadius, yRadius);
}

// tag=1050
// drawRoundedRect(const QRectF & rect, qreal xRadius, qreal yRadius)
void c_QPainter__drawRoundedRect_QRectF_qreal_qreal(void *thisObj, void *rect_,
                                                    qreal xRadius,
                                                    qreal yRadius) {
  auto &rect = *reinterpret_cast<QRectF *>(rect_);
  // tag=1010
  fromPtr(thisObj)->drawRoundedRect(rect, xRadius, yRadius);
}

// tag=1050
// drawRoundedRect(int x, int y, int w, int h, qreal xRadius, qreal yRadius)
void c_QPainter__drawRoundedRect_int_int_int_int_qreal_qreal(
    void *thisObj, int x, int y, int w, int h, qreal xRadius, qreal yRadius) {
  // tag=1010
  fromPtr(thisObj)->drawRoundedRect(x, y, w, h, xRadius, yRadius);
}

// tag=1050
// drawText(const QPoint & p, const QString & s)
void c_QPainter__drawText_QPoint_QString(void *thisObj, void *p_,
                                         const char *s_) {
  auto &p = *reinterpret_cast<QPoint *>(p_);
  const auto s = QString::fromUtf8(s_);
  // tag=1010
  fromPtr(thisObj)->drawText(p, s);
}

// tag=1050
// drawText(const QPointF & p, const QString & s)
void c_QPainter__drawText_QPointF_QString(void *thisObj, void *p_,
                                          const char *s_) {
  auto &p = *reinterpret_cast<QPointF *>(p_);
  const auto s = QString::fromUtf8(s_);
  // tag=1010
  fromPtr(thisObj)->drawText(p, s);
}

// tag=1050
// drawText(const QPointF & p, const QString & str, int tf, int
// justificationPadding)
void c_QPainter__drawText_QPointF_QString_int_int(void *thisObj, void *p_,
                                                  const char *str_, int tf,
                                                  int justificationPadding) {
  auto &p = *reinterpret_cast<QPointF *>(p_);
  const auto str = QString::fromUtf8(str_);
  // tag=1010
  fromPtr(thisObj)->drawText(p, str, tf, justificationPadding);
}

// tag=1050
// drawText(const QRect & r, int flags, const QString & text, QRect * br)
void c_QPainter__drawText_QRect_int_QString_QRect(void *thisObj, void *r_,
                                                  int flags, const char *text_,
                                                  void *br_) {
  auto &r = *reinterpret_cast<QRect *>(r_);
  const auto text = QString::fromUtf8(text_);
  auto br = reinterpret_cast<QRect *>(br_);
  // tag=1010
  fromPtr(thisObj)->drawText(r, flags, text, br);
}

// tag=1050
// drawText(const QRectF & r, const QString & text)
void c_QPainter__drawText_QRectF_QString(void *thisObj, void *r_,
                                         const char *text_) {
  auto &r = *reinterpret_cast<QRectF *>(r_);
  const auto text = QString::fromUtf8(text_);
  // tag=1010
  fromPtr(thisObj)->drawText(r, text);
}

// tag=1050
// drawText(const QRectF & r, int flags, const QString & text, QRectF * br)
void c_QPainter__drawText_QRectF_int_QString_QRectF(void *thisObj, void *r_,
                                                    int flags,
                                                    const char *text_,
                                                    void *br_) {
  auto &r = *reinterpret_cast<QRectF *>(r_);
  const auto text = QString::fromUtf8(text_);
  auto br = reinterpret_cast<QRectF *>(br_);
  // tag=1010
  fromPtr(thisObj)->drawText(r, flags, text, br);
}

// tag=1050
// drawText(int x, int y, const QString & s)
void c_QPainter__drawText_int_int_QString(void *thisObj, int x, int y,
                                          const char *s_) {
  const auto s = QString::fromUtf8(s_);
  // tag=1010
  fromPtr(thisObj)->drawText(x, y, s);
}

// tag=1050
// drawText(int x, int y, int w, int h, int flags, const QString & text, QRect *
// br)
void c_QPainter__drawText_int_int_int_int_int_QString_QRect(void *thisObj,
                                                            int x, int y, int w,
                                                            int h, int flags,
                                                            const char *text_,
                                                            void *br_) {
  const auto text = QString::fromUtf8(text_);
  auto br = reinterpret_cast<QRect *>(br_);
  // tag=1010
  fromPtr(thisObj)->drawText(x, y, w, h, flags, text, br);
}

// tag=1050
// drawTiledPixmap(const QRect & arg__1, const QPixmap & arg__2, const QPoint &
// arg__3)
void c_QPainter__drawTiledPixmap_QRect_QPixmap_QPoint(void *thisObj,
                                                      void *arg__1_,
                                                      void *arg__2_,
                                                      void *arg__3_) {
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  auto &arg__2 = *reinterpret_cast<QPixmap *>(arg__2_);
  auto &arg__3 = *reinterpret_cast<QPoint *>(arg__3_);
  // tag=1010
  fromPtr(thisObj)->drawTiledPixmap(arg__1, arg__2, arg__3);
}

// tag=1050
// drawTiledPixmap(const QRectF & rect, const QPixmap & pm, const QPointF &
// offset)
void c_QPainter__drawTiledPixmap_QRectF_QPixmap_QPointF(void *thisObj,
                                                        void *rect_, void *pm_,
                                                        void *offset_) {
  auto &rect = *reinterpret_cast<QRectF *>(rect_);
  auto &pm = *reinterpret_cast<QPixmap *>(pm_);
  auto &offset = *reinterpret_cast<QPointF *>(offset_);
  // tag=1010
  fromPtr(thisObj)->drawTiledPixmap(rect, pm, offset);
}

// tag=1050
// drawTiledPixmap(int x, int y, int w, int h, const QPixmap & arg__5, int sx,
// int sy)
void c_QPainter__drawTiledPixmap_int_int_int_int_QPixmap_int_int(
    void *thisObj, int x, int y, int w, int h, void *arg__5_, int sx, int sy) {
  auto &arg__5 = *reinterpret_cast<QPixmap *>(arg__5_);
  // tag=1010
  fromPtr(thisObj)->drawTiledPixmap(x, y, w, h, arg__5, sx, sy);
}

// tag=1050
// end()
bool c_QPainter__end(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->end();
}

// tag=1050
// endNativePainting()
void c_QPainter__endNativePainting(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->endNativePainting();
}

// tag=1050
// eraseRect(const QRect & arg__1)
void c_QPainter__eraseRect_QRect(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->eraseRect(arg__1);
}

// tag=1050
// eraseRect(const QRectF & arg__1)
void c_QPainter__eraseRect_QRectF(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QRectF *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->eraseRect(arg__1);
}

// tag=1050
// eraseRect(int x, int y, int w, int h)
void c_QPainter__eraseRect_int_int_int_int(void *thisObj, int x, int y, int w,
                                           int h) {
  // tag=1010
  fromPtr(thisObj)->eraseRect(x, y, w, h);
}

// tag=1050
// fillRect(const QRect & arg__1, const QBrush & arg__2)
void c_QPainter__fillRect_QRect_QBrush(void *thisObj, void *arg__1_,
                                       void *arg__2_) {
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  auto &arg__2 = *reinterpret_cast<QBrush *>(arg__2_);
  // tag=1010
  fromPtr(thisObj)->fillRect(arg__1, arg__2);
}

// tag=1050
// fillRect(const QRect & arg__1, const QColor & color)
void c_QPainter__fillRect_QRect_QColor(void *thisObj, void *arg__1_,
                                       void *color_) {
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  auto &color = *reinterpret_cast<QColor *>(color_);
  // tag=1010
  fromPtr(thisObj)->fillRect(arg__1, color);
}

// tag=1050
// fillRect(const QRectF & arg__1, const QBrush & arg__2)
void c_QPainter__fillRect_QRectF_QBrush(void *thisObj, void *arg__1_,
                                        void *arg__2_) {
  auto &arg__1 = *reinterpret_cast<QRectF *>(arg__1_);
  auto &arg__2 = *reinterpret_cast<QBrush *>(arg__2_);
  // tag=1010
  fromPtr(thisObj)->fillRect(arg__1, arg__2);
}

// tag=1050
// fillRect(const QRectF & arg__1, const QColor & color)
void c_QPainter__fillRect_QRectF_QColor(void *thisObj, void *arg__1_,
                                        void *color_) {
  auto &arg__1 = *reinterpret_cast<QRectF *>(arg__1_);
  auto &color = *reinterpret_cast<QColor *>(color_);
  // tag=1010
  fromPtr(thisObj)->fillRect(arg__1, color);
}

// tag=1050
// fillRect(int x, int y, int w, int h, const QBrush & arg__5)
void c_QPainter__fillRect_int_int_int_int_QBrush(void *thisObj, int x, int y,
                                                 int w, int h, void *arg__5_) {
  auto &arg__5 = *reinterpret_cast<QBrush *>(arg__5_);
  // tag=1010
  fromPtr(thisObj)->fillRect(x, y, w, h, arg__5);
}

// tag=1050
// fillRect(int x, int y, int w, int h, const QColor & color)
void c_QPainter__fillRect_int_int_int_int_QColor(void *thisObj, int x, int y,
                                                 int w, int h, void *color_) {
  auto &color = *reinterpret_cast<QColor *>(color_);
  // tag=1010
  fromPtr(thisObj)->fillRect(x, y, w, h, color);
}

// tag=1050
// font() const
void *c_QPainter__font(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->font()));
}

// tag=1050
// hasClipping() const
bool c_QPainter__hasClipping(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hasClipping();
}

// tag=1050
// isActive() const
bool c_QPainter__isActive(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isActive();
}

// tag=1050
// layoutDirection() const
int c_QPainter__layoutDirection(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->layoutDirection();
}

// tag=1050
// opacity() const
qreal c_QPainter__opacity(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->opacity();
}

// tag=1050
// pen() const
void *c_QPainter__pen(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->pen()));
}

// tag=1050
// resetTransform()
void c_QPainter__resetTransform(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->resetTransform();
}

// tag=1050
// restore()
void c_QPainter__restore(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->restore();
}

// tag=1050
// rotate(qreal a)
void c_QPainter__rotate_qreal(void *thisObj, qreal a) {
  // tag=1010
  fromPtr(thisObj)->rotate(a);
}

// tag=1050
// save()
void c_QPainter__save(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->save();
}

// tag=1050
// scale(qreal sx, qreal sy)
void c_QPainter__scale_qreal_qreal(void *thisObj, qreal sx, qreal sy) {
  // tag=1010
  fromPtr(thisObj)->scale(sx, sy);
}

// tag=1050
// setBackground(const QBrush & bg)
void c_QPainter__setBackground_QBrush(void *thisObj, void *bg_) {
  auto &bg = *reinterpret_cast<QBrush *>(bg_);
  // tag=1010
  fromPtr(thisObj)->setBackground(bg);
}

// tag=1050
// setBrush(const QBrush & brush)
void c_QPainter__setBrush_QBrush(void *thisObj, void *brush_) {
  auto &brush = *reinterpret_cast<QBrush *>(brush_);
  // tag=1010
  fromPtr(thisObj)->setBrush(brush);
}

// tag=1050
// setBrushOrigin(const QPoint & arg__1)
void c_QPainter__setBrushOrigin_QPoint(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QPoint *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setBrushOrigin(arg__1);
}

// tag=1050
// setBrushOrigin(const QPointF & arg__1)
void c_QPainter__setBrushOrigin_QPointF(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QPointF *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setBrushOrigin(arg__1);
}

// tag=1050
// setBrushOrigin(int x, int y)
void c_QPainter__setBrushOrigin_int_int(void *thisObj, int x, int y) {
  // tag=1010
  fromPtr(thisObj)->setBrushOrigin(x, y);
}

// tag=1050
// setClipRect(const QRect & arg__1)
void c_QPainter__setClipRect_QRect(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setClipRect(arg__1);
}

// tag=1050
// setClipRect(const QRectF & arg__1)
void c_QPainter__setClipRect_QRectF(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QRectF *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setClipRect(arg__1);
}

// tag=1050
// setClipRect(int x, int y, int w, int h)
void c_QPainter__setClipRect_int_int_int_int(void *thisObj, int x, int y, int w,
                                             int h) {
  // tag=1010
  fromPtr(thisObj)->setClipRect(x, y, w, h);
}

// tag=1050
// setClipRegion(const QRegion & arg__1)
void c_QPainter__setClipRegion_QRegion(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QRegion *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setClipRegion(arg__1);
}

// tag=1050
// setClipping(bool enable)
void c_QPainter__setClipping_bool(void *thisObj, bool enable) {
  // tag=1010
  fromPtr(thisObj)->setClipping(enable);
}

// tag=1050
// setFont(const QFont & f)
void c_QPainter__setFont_QFont(void *thisObj, void *f_) {
  auto &f = *reinterpret_cast<QFont *>(f_);
  // tag=1010
  fromPtr(thisObj)->setFont(f);
}

// tag=1050
// setLayoutDirection(Qt::LayoutDirection direction)
void c_QPainter__setLayoutDirection_LayoutDirection(void *thisObj,
                                                    int direction) {
  // tag=1010
  fromPtr(thisObj)->setLayoutDirection(
      static_cast<Qt::LayoutDirection>(direction));
}

// tag=1050
// setOpacity(qreal opacity)
void c_QPainter__setOpacity_qreal(void *thisObj, qreal opacity) {
  // tag=1010
  fromPtr(thisObj)->setOpacity(opacity);
}

// tag=1050
// setPen(const QColor & color)
void c_QPainter__setPen_QColor(void *thisObj, void *color_) {
  auto &color = *reinterpret_cast<QColor *>(color_);
  // tag=1010
  fromPtr(thisObj)->setPen(color);
}

// tag=1050
// setPen(const QPen & pen)
void c_QPainter__setPen_QPen(void *thisObj, void *pen_) {
  auto &pen = *reinterpret_cast<QPen *>(pen_);
  // tag=1010
  fromPtr(thisObj)->setPen(pen);
}

// tag=1050
// setViewTransformEnabled(bool enable)
void c_QPainter__setViewTransformEnabled_bool(void *thisObj, bool enable) {
  // tag=1010
  fromPtr(thisObj)->setViewTransformEnabled(enable);
}

// tag=1050
// setViewport(const QRect & viewport)
void c_QPainter__setViewport_QRect(void *thisObj, void *viewport_) {
  auto &viewport = *reinterpret_cast<QRect *>(viewport_);
  // tag=1010
  fromPtr(thisObj)->setViewport(viewport);
}

// tag=1050
// setViewport(int x, int y, int w, int h)
void c_QPainter__setViewport_int_int_int_int(void *thisObj, int x, int y, int w,
                                             int h) {
  // tag=1010
  fromPtr(thisObj)->setViewport(x, y, w, h);
}

// tag=1050
// setWindow(const QRect & window)
void c_QPainter__setWindow_QRect(void *thisObj, void *window_) {
  auto &window = *reinterpret_cast<QRect *>(window_);
  // tag=1010
  fromPtr(thisObj)->setWindow(window);
}

// tag=1050
// setWindow(int x, int y, int w, int h)
void c_QPainter__setWindow_int_int_int_int(void *thisObj, int x, int y, int w,
                                           int h) {
  // tag=1010
  fromPtr(thisObj)->setWindow(x, y, w, h);
}

// tag=1050
// setWorldMatrixEnabled(bool enabled)
void c_QPainter__setWorldMatrixEnabled_bool(void *thisObj, bool enabled) {
  // tag=1010
  fromPtr(thisObj)->setWorldMatrixEnabled(enabled);
}

// tag=1050
// shear(qreal sh, qreal sv)
void c_QPainter__shear_qreal_qreal(void *thisObj, qreal sh, qreal sv) {
  // tag=1010
  fromPtr(thisObj)->shear(sh, sv);
}

// tag=1050
// translate(const QPoint & offset)
void c_QPainter__translate_QPoint(void *thisObj, void *offset_) {
  auto &offset = *reinterpret_cast<QPoint *>(offset_);
  // tag=1010
  fromPtr(thisObj)->translate(offset);
}

// tag=1050
// translate(const QPointF & offset)
void c_QPainter__translate_QPointF(void *thisObj, void *offset_) {
  auto &offset = *reinterpret_cast<QPointF *>(offset_);
  // tag=1010
  fromPtr(thisObj)->translate(offset);
}

// tag=1050
// translate(qreal dx, qreal dy)
void c_QPainter__translate_qreal_qreal(void *thisObj, qreal dx, qreal dy) {
  // tag=1010
  fromPtr(thisObj)->translate(dx, dy);
}

// tag=1050
// viewTransformEnabled() const
bool c_QPainter__viewTransformEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->viewTransformEnabled();
}

// tag=1050
// viewport() const
void *c_QPainter__viewport(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->viewport()};
}

// tag=1050
// window() const
void *c_QPainter__window(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->window()};
}

// tag=1050
// worldMatrixEnabled() const
bool c_QPainter__worldMatrixEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->worldMatrixEnabled();
}
void c_QPainter__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
}
