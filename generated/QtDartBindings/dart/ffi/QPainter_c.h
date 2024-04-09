/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qbrush.h>
#include <qcolor.h>
#include <qfont.h>
#include <qline.h>
#include <qlist.h>
#include <qpainter.h>
#include <qpen.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qstring.h>

namespace QtDartBindings_wrappersNS {
class QPainter_wrapper : public ::QPainter {
public:
  ~QPainter_wrapper();
  QPainter_wrapper();
  const QBrush &background() const;
  void beginNativePainting();
  QRect boundingRect(const QRect &rect, int flags, const QString &text);
  QRectF boundingRect(const QRectF &rect, const QString &text);
  QRectF boundingRect(const QRectF &rect, int flags, const QString &text);
  QRect boundingRect(int x, int y, int w, int h, int flags,
                     const QString &text);
  const QBrush &brush() const;
  QPoint brushOrigin() const;
  QRectF clipBoundingRect() const;
  QRegion clipRegion() const;
  void drawArc(const QRect &arg__1, int a, int alen);
  void drawArc(const QRectF &rect, int a, int alen);
  void drawArc(int x, int y, int w, int h, int a, int alen);
  void drawChord(const QRect &arg__1, int a, int alen);
  void drawChord(const QRectF &rect, int a, int alen);
  void drawChord(int x, int y, int w, int h, int a, int alen);
  void drawConvexPolygon(const QPoint *points, int pointCount);
  void drawConvexPolygon(const QPointF *points, int pointCount);
  void drawEllipse(const QPoint &center, int rx, int ry);
  void drawEllipse(const QPointF &center, qreal rx, qreal ry);
  void drawEllipse(const QRect &r);
  void drawEllipse(const QRectF &r);
  void drawEllipse(int x, int y, int w, int h);
  void drawLine(const QLine &line);
  void drawLine(const QLineF &line);
  void drawLine(const QPoint &p1, const QPoint &p2);
  void drawLine(const QPointF &p1, const QPointF &p2);
  void drawLine(int x1, int y1, int x2, int y2);
  void drawLines(const QLine *lines, int lineCount);
  void drawLines(const QLineF *lines, int lineCount);
  void drawLines(const QList<QLine> &lines);
  void drawLines(const QList<QLineF> &lines);
  void drawLines(const QList<QPoint> &pointPairs);
  void drawLines(const QList<QPointF> &pointPairs);
  void drawLines(const QPoint *pointPairs, int lineCount);
  void drawLines(const QPointF *pointPairs, int lineCount);
  void drawPie(const QRect &arg__1, int a, int alen);
  void drawPie(const QRectF &rect, int a, int alen);
  void drawPie(int x, int y, int w, int h, int a, int alen);
  void drawPixmap(const QPoint &p, const QPixmap &pm);
  void drawPixmap(const QPoint &p, const QPixmap &pm, const QRect &sr);
  void drawPixmap(const QPointF &p, const QPixmap &pm);
  void drawPixmap(const QPointF &p, const QPixmap &pm, const QRectF &sr);
  void drawPixmap(const QRect &r, const QPixmap &pm);
  void drawPixmap(const QRect &targetRect, const QPixmap &pixmap,
                  const QRect &sourceRect);
  void drawPixmap(const QRectF &targetRect, const QPixmap &pixmap,
                  const QRectF &sourceRect);
  void drawPixmap(int x, int y, const QPixmap &pm);
  void drawPixmap(int x, int y, const QPixmap &pm, int sx, int sy, int sw,
                  int sh);
  void drawPixmap(int x, int y, int w, int h, const QPixmap &pm);
  void drawPixmap(int x, int y, int w, int h, const QPixmap &pm, int sx, int sy,
                  int sw, int sh);
  void drawPoint(const QPoint &p);
  void drawPoint(const QPointF &pt);
  void drawPoint(int x, int y);
  void drawPoints(const QPoint *points, int pointCount);
  void drawPoints(const QPointF *points, int pointCount);
  void drawPolygon(const QPoint *points, int pointCount);
  void drawPolygon(const QPointF *points, int pointCount);
  void drawPolyline(const QPoint *points, int pointCount);
  void drawPolyline(const QPointF *points, int pointCount);
  void drawRect(const QRect &rect);
  void drawRect(const QRectF &rect);
  void drawRect(int x1, int y1, int w, int h);
  void drawRects(const QList<QRect> &rectangles);
  void drawRects(const QList<QRectF> &rectangles);
  void drawRects(const QRect *rects, int rectCount);
  void drawRects(const QRectF *rects, int rectCount);
  void drawRoundedRect(const QRect &rect, qreal xRadius, qreal yRadius);
  void drawRoundedRect(const QRectF &rect, qreal xRadius, qreal yRadius);
  void drawRoundedRect(int x, int y, int w, int h, qreal xRadius,
                       qreal yRadius);
  void drawText(const QPoint &p, const QString &s);
  void drawText(const QPointF &p, const QString &s);
  void drawText(const QPointF &p, const QString &str, int tf,
                int justificationPadding);
  void drawText(const QRect &r, int flags, const QString &text,
                QRect *br = nullptr);
  void drawText(const QRectF &r, const QString &text);
  void drawText(const QRectF &r, int flags, const QString &text,
                QRectF *br = nullptr);
  void drawText(int x, int y, const QString &s);
  void drawText(int x, int y, int w, int h, int flags, const QString &text,
                QRect *br = nullptr);
  void drawTiledPixmap(const QRect &arg__1, const QPixmap &arg__2,
                       const QPoint &arg__3 = QPoint());
  void drawTiledPixmap(const QRectF &rect, const QPixmap &pm,
                       const QPointF &offset = QPointF());
  void drawTiledPixmap(int x, int y, int w, int h, const QPixmap &arg__5,
                       int sx = 0, int sy = 0);
  bool end();
  void endNativePainting();
  void eraseRect(const QRect &arg__1);
  void eraseRect(const QRectF &arg__1);
  void eraseRect(int x, int y, int w, int h);
  void fillRect(const QRect &arg__1, const QBrush &arg__2);
  void fillRect(const QRect &arg__1, const QColor &color);
  void fillRect(const QRectF &arg__1, const QBrush &arg__2);
  void fillRect(const QRectF &arg__1, const QColor &color);
  void fillRect(int x, int y, int w, int h, const QBrush &arg__5);
  void fillRect(int x, int y, int w, int h, const QColor &color);
  const QFont &font() const;
  bool hasClipping() const;
  bool isActive() const;
  Qt::LayoutDirection layoutDirection() const;
  qreal opacity() const;
  const QPen &pen() const;
  void resetTransform();
  void restore();
  void rotate(qreal a);
  void save();
  void scale(qreal sx, qreal sy);
  void setBackground(const QBrush &bg);
  void setBrush(const QBrush &brush);
  void setBrushOrigin(const QPoint &arg__1);
  void setBrushOrigin(const QPointF &arg__1);
  void setBrushOrigin(int x, int y);
  void setClipRect(const QRect &arg__1);
  void setClipRect(const QRectF &arg__1);
  void setClipRect(int x, int y, int w, int h);
  void setClipRegion(const QRegion &arg__1);
  void setClipping(bool enable);
  void setFont(const QFont &f);
  void setLayoutDirection(Qt::LayoutDirection direction);
  void setOpacity(qreal opacity);
  void setPen(const QColor &color);
  void setPen(const QPen &pen);
  void setViewTransformEnabled(bool enable);
  void setViewport(const QRect &viewport);
  void setViewport(int x, int y, int w, int h);
  void setWindow(const QRect &window);
  void setWindow(int x, int y, int w, int h);
  void setWorldMatrixEnabled(bool enabled);
  void shear(qreal sh, qreal sv);
  void translate(const QPoint &offset);
  void translate(const QPointF &offset);
  void translate(qreal dx, qreal dy);
  bool viewTransformEnabled() const;
  QRect viewport() const;
  QRect window() const;
  bool worldMatrixEnabled() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QPainter::QPainter()
QtDartBindings_EXPORT void *c_QPainter__constructor();
// QPainter::background() const
QtDartBindings_EXPORT void *c_QPainter__background(void *thisObj);
// QPainter::beginNativePainting()
QtDartBindings_EXPORT void c_QPainter__beginNativePainting(void *thisObj);
// QPainter::boundingRect(const QRect & rect, int flags, const QString & text)
QtDartBindings_EXPORT void *
c_QPainter__boundingRect_QRect_int_QString(void *thisObj, void *rect_,
                                           int flags, const char *text_);
// QPainter::boundingRect(const QRectF & rect, const QString & text)
QtDartBindings_EXPORT void *
c_QPainter__boundingRect_QRectF_QString(void *thisObj, void *rect_,
                                        const char *text_);
// QPainter::boundingRect(const QRectF & rect, int flags, const QString & text)
QtDartBindings_EXPORT void *
c_QPainter__boundingRect_QRectF_int_QString(void *thisObj, void *rect_,
                                            int flags, const char *text_);
// QPainter::boundingRect(int x, int y, int w, int h, int flags, const QString &
// text)
QtDartBindings_EXPORT void *
c_QPainter__boundingRect_int_int_int_int_int_QString(void *thisObj, int x,
                                                     int y, int w, int h,
                                                     int flags,
                                                     const char *text_);
// QPainter::brush() const
QtDartBindings_EXPORT void *c_QPainter__brush(void *thisObj);
// QPainter::brushOrigin() const
QtDartBindings_EXPORT void *c_QPainter__brushOrigin(void *thisObj);
// QPainter::clipBoundingRect() const
QtDartBindings_EXPORT void *c_QPainter__clipBoundingRect(void *thisObj);
// QPainter::clipRegion() const
QtDartBindings_EXPORT void *c_QPainter__clipRegion(void *thisObj);
// QPainter::drawArc(const QRect & arg__1, int a, int alen)
QtDartBindings_EXPORT void c_QPainter__drawArc_QRect_int_int(void *thisObj,
                                                             void *arg__1_,
                                                             int a, int alen);
// QPainter::drawArc(const QRectF & rect, int a, int alen)
QtDartBindings_EXPORT void
c_QPainter__drawArc_QRectF_int_int(void *thisObj, void *rect_, int a, int alen);
// QPainter::drawArc(int x, int y, int w, int h, int a, int alen)
QtDartBindings_EXPORT void
c_QPainter__drawArc_int_int_int_int_int_int(void *thisObj, int x, int y, int w,
                                            int h, int a, int alen);
// QPainter::drawChord(const QRect & arg__1, int a, int alen)
QtDartBindings_EXPORT void c_QPainter__drawChord_QRect_int_int(void *thisObj,
                                                               void *arg__1_,
                                                               int a, int alen);
// QPainter::drawChord(const QRectF & rect, int a, int alen)
QtDartBindings_EXPORT void c_QPainter__drawChord_QRectF_int_int(void *thisObj,
                                                                void *rect_,
                                                                int a,
                                                                int alen);
// QPainter::drawChord(int x, int y, int w, int h, int a, int alen)
QtDartBindings_EXPORT void
c_QPainter__drawChord_int_int_int_int_int_int(void *thisObj, int x, int y,
                                              int w, int h, int a, int alen);
// QPainter::drawConvexPolygon(const QPoint * points, int pointCount)
QtDartBindings_EXPORT void
c_QPainter__drawConvexPolygon_QPoint_int(void *thisObj, void *points_,
                                         int pointCount);
// QPainter::drawConvexPolygon(const QPointF * points, int pointCount)
QtDartBindings_EXPORT void
c_QPainter__drawConvexPolygon_QPointF_int(void *thisObj, void *points_,
                                          int pointCount);
// QPainter::drawEllipse(const QPoint & center, int rx, int ry)
QtDartBindings_EXPORT void c_QPainter__drawEllipse_QPoint_int_int(void *thisObj,
                                                                  void *center_,
                                                                  int rx,
                                                                  int ry);
// QPainter::drawEllipse(const QPointF & center, qreal rx, qreal ry)
QtDartBindings_EXPORT void
c_QPainter__drawEllipse_QPointF_qreal_qreal(void *thisObj, void *center_,
                                            qreal rx, qreal ry);
// QPainter::drawEllipse(const QRect & r)
QtDartBindings_EXPORT void c_QPainter__drawEllipse_QRect(void *thisObj,
                                                         void *r_);
// QPainter::drawEllipse(const QRectF & r)
QtDartBindings_EXPORT void c_QPainter__drawEllipse_QRectF(void *thisObj,
                                                          void *r_);
// QPainter::drawEllipse(int x, int y, int w, int h)
QtDartBindings_EXPORT void
c_QPainter__drawEllipse_int_int_int_int(void *thisObj, int x, int y, int w,
                                        int h);
// QPainter::drawLine(const QLine & line)
QtDartBindings_EXPORT void c_QPainter__drawLine_QLine(void *thisObj,
                                                      void *line_);
// QPainter::drawLine(const QLineF & line)
QtDartBindings_EXPORT void c_QPainter__drawLine_QLineF(void *thisObj,
                                                       void *line_);
// QPainter::drawLine(const QPoint & p1, const QPoint & p2)
QtDartBindings_EXPORT void
c_QPainter__drawLine_QPoint_QPoint(void *thisObj, void *p1_, void *p2_);
// QPainter::drawLine(const QPointF & p1, const QPointF & p2)
QtDartBindings_EXPORT void
c_QPainter__drawLine_QPointF_QPointF(void *thisObj, void *p1_, void *p2_);
// QPainter::drawLine(int x1, int y1, int x2, int y2)
QtDartBindings_EXPORT void c_QPainter__drawLine_int_int_int_int(void *thisObj,
                                                                int x1, int y1,
                                                                int x2, int y2);
// QPainter::drawLines(const QLine * lines, int lineCount)
QtDartBindings_EXPORT void
c_QPainter__drawLines_QLine_int(void *thisObj, void *lines_, int lineCount);
// QPainter::drawLines(const QLineF * lines, int lineCount)
QtDartBindings_EXPORT void
c_QPainter__drawLines_QLineF_int(void *thisObj, void *lines_, int lineCount);
// QPainter::drawLines(const QList<QLine > & lines)
QtDartBindings_EXPORT void c_QPainter__drawLines_QList_QLine(void *thisObj,
                                                             void *lines_);
// QPainter::drawLines(const QList<QLineF > & lines)
QtDartBindings_EXPORT void c_QPainter__drawLines_QList_QLineF(void *thisObj,
                                                              void *lines_);
// QPainter::drawLines(const QList<QPoint > & pointPairs)
QtDartBindings_EXPORT void
c_QPainter__drawLines_QList_QPoint(void *thisObj, void *pointPairs_);
// QPainter::drawLines(const QList<QPointF > & pointPairs)
QtDartBindings_EXPORT void
c_QPainter__drawLines_QList_QPointF(void *thisObj, void *pointPairs_);
// QPainter::drawLines(const QPoint * pointPairs, int lineCount)
QtDartBindings_EXPORT void c_QPainter__drawLines_QPoint_int(void *thisObj,
                                                            void *pointPairs_,
                                                            int lineCount);
// QPainter::drawLines(const QPointF * pointPairs, int lineCount)
QtDartBindings_EXPORT void c_QPainter__drawLines_QPointF_int(void *thisObj,
                                                             void *pointPairs_,
                                                             int lineCount);
// QPainter::drawPie(const QRect & arg__1, int a, int alen)
QtDartBindings_EXPORT void c_QPainter__drawPie_QRect_int_int(void *thisObj,
                                                             void *arg__1_,
                                                             int a, int alen);
// QPainter::drawPie(const QRectF & rect, int a, int alen)
QtDartBindings_EXPORT void
c_QPainter__drawPie_QRectF_int_int(void *thisObj, void *rect_, int a, int alen);
// QPainter::drawPie(int x, int y, int w, int h, int a, int alen)
QtDartBindings_EXPORT void
c_QPainter__drawPie_int_int_int_int_int_int(void *thisObj, int x, int y, int w,
                                            int h, int a, int alen);
// QPainter::drawPixmap(const QPoint & p, const QPixmap & pm)
QtDartBindings_EXPORT void
c_QPainter__drawPixmap_QPoint_QPixmap(void *thisObj, void *p_, void *pm_);
// QPainter::drawPixmap(const QPoint & p, const QPixmap & pm, const QRect & sr)
QtDartBindings_EXPORT void
c_QPainter__drawPixmap_QPoint_QPixmap_QRect(void *thisObj, void *p_, void *pm_,
                                            void *sr_);
// QPainter::drawPixmap(const QPointF & p, const QPixmap & pm)
QtDartBindings_EXPORT void
c_QPainter__drawPixmap_QPointF_QPixmap(void *thisObj, void *p_, void *pm_);
// QPainter::drawPixmap(const QPointF & p, const QPixmap & pm, const QRectF &
// sr)
QtDartBindings_EXPORT void
c_QPainter__drawPixmap_QPointF_QPixmap_QRectF(void *thisObj, void *p_,
                                              void *pm_, void *sr_);
// QPainter::drawPixmap(const QRect & r, const QPixmap & pm)
QtDartBindings_EXPORT void
c_QPainter__drawPixmap_QRect_QPixmap(void *thisObj, void *r_, void *pm_);
// QPainter::drawPixmap(const QRect & targetRect, const QPixmap & pixmap, const
// QRect & sourceRect)
QtDartBindings_EXPORT void
c_QPainter__drawPixmap_QRect_QPixmap_QRect(void *thisObj, void *targetRect_,
                                           void *pixmap_, void *sourceRect_);
// QPainter::drawPixmap(const QRectF & targetRect, const QPixmap & pixmap, const
// QRectF & sourceRect)
QtDartBindings_EXPORT void
c_QPainter__drawPixmap_QRectF_QPixmap_QRectF(void *thisObj, void *targetRect_,
                                             void *pixmap_, void *sourceRect_);
// QPainter::drawPixmap(int x, int y, const QPixmap & pm)
QtDartBindings_EXPORT void
c_QPainter__drawPixmap_int_int_QPixmap(void *thisObj, int x, int y, void *pm_);
// QPainter::drawPixmap(int x, int y, const QPixmap & pm, int sx, int sy, int
// sw, int sh)
QtDartBindings_EXPORT void
c_QPainter__drawPixmap_int_int_QPixmap_int_int_int_int(void *thisObj, int x,
                                                       int y, void *pm_, int sx,
                                                       int sy, int sw, int sh);
// QPainter::drawPixmap(int x, int y, int w, int h, const QPixmap & pm)
QtDartBindings_EXPORT void
c_QPainter__drawPixmap_int_int_int_int_QPixmap(void *thisObj, int x, int y,
                                               int w, int h, void *pm_);
// QPainter::drawPixmap(int x, int y, int w, int h, const QPixmap & pm, int sx,
// int sy, int sw, int sh)
QtDartBindings_EXPORT void
c_QPainter__drawPixmap_int_int_int_int_QPixmap_int_int_int_int(
    void *thisObj, int x, int y, int w, int h, void *pm_, int sx, int sy,
    int sw, int sh);
// QPainter::drawPoint(const QPoint & p)
QtDartBindings_EXPORT void c_QPainter__drawPoint_QPoint(void *thisObj,
                                                        void *p_);
// QPainter::drawPoint(const QPointF & pt)
QtDartBindings_EXPORT void c_QPainter__drawPoint_QPointF(void *thisObj,
                                                         void *pt_);
// QPainter::drawPoint(int x, int y)
QtDartBindings_EXPORT void c_QPainter__drawPoint_int_int(void *thisObj, int x,
                                                         int y);
// QPainter::drawPoints(const QPoint * points, int pointCount)
QtDartBindings_EXPORT void
c_QPainter__drawPoints_QPoint_int(void *thisObj, void *points_, int pointCount);
// QPainter::drawPoints(const QPointF * points, int pointCount)
QtDartBindings_EXPORT void c_QPainter__drawPoints_QPointF_int(void *thisObj,
                                                              void *points_,
                                                              int pointCount);
// QPainter::drawPolygon(const QPoint * points, int pointCount)
QtDartBindings_EXPORT void c_QPainter__drawPolygon_QPoint_int(void *thisObj,
                                                              void *points_,
                                                              int pointCount);
// QPainter::drawPolygon(const QPointF * points, int pointCount)
QtDartBindings_EXPORT void c_QPainter__drawPolygon_QPointF_int(void *thisObj,
                                                               void *points_,
                                                               int pointCount);
// QPainter::drawPolyline(const QPoint * points, int pointCount)
QtDartBindings_EXPORT void c_QPainter__drawPolyline_QPoint_int(void *thisObj,
                                                               void *points_,
                                                               int pointCount);
// QPainter::drawPolyline(const QPointF * points, int pointCount)
QtDartBindings_EXPORT void c_QPainter__drawPolyline_QPointF_int(void *thisObj,
                                                                void *points_,
                                                                int pointCount);
// QPainter::drawRect(const QRect & rect)
QtDartBindings_EXPORT void c_QPainter__drawRect_QRect(void *thisObj,
                                                      void *rect_);
// QPainter::drawRect(const QRectF & rect)
QtDartBindings_EXPORT void c_QPainter__drawRect_QRectF(void *thisObj,
                                                       void *rect_);
// QPainter::drawRect(int x1, int y1, int w, int h)
QtDartBindings_EXPORT void c_QPainter__drawRect_int_int_int_int(void *thisObj,
                                                                int x1, int y1,
                                                                int w, int h);
// QPainter::drawRects(const QList<QRect > & rectangles)
QtDartBindings_EXPORT void c_QPainter__drawRects_QList_QRect(void *thisObj,
                                                             void *rectangles_);
// QPainter::drawRects(const QList<QRectF > & rectangles)
QtDartBindings_EXPORT void
c_QPainter__drawRects_QList_QRectF(void *thisObj, void *rectangles_);
// QPainter::drawRects(const QRect * rects, int rectCount)
QtDartBindings_EXPORT void
c_QPainter__drawRects_QRect_int(void *thisObj, void *rects_, int rectCount);
// QPainter::drawRects(const QRectF * rects, int rectCount)
QtDartBindings_EXPORT void
c_QPainter__drawRects_QRectF_int(void *thisObj, void *rects_, int rectCount);
// QPainter::drawRoundedRect(const QRect & rect, qreal xRadius, qreal yRadius)
QtDartBindings_EXPORT void
c_QPainter__drawRoundedRect_QRect_qreal_qreal(void *thisObj, void *rect_,
                                              qreal xRadius, qreal yRadius);
// QPainter::drawRoundedRect(const QRectF & rect, qreal xRadius, qreal yRadius)
QtDartBindings_EXPORT void
c_QPainter__drawRoundedRect_QRectF_qreal_qreal(void *thisObj, void *rect_,
                                               qreal xRadius, qreal yRadius);
// QPainter::drawRoundedRect(int x, int y, int w, int h, qreal xRadius, qreal
// yRadius)
QtDartBindings_EXPORT void
c_QPainter__drawRoundedRect_int_int_int_int_qreal_qreal(void *thisObj, int x,
                                                        int y, int w, int h,
                                                        qreal xRadius,
                                                        qreal yRadius);
// QPainter::drawText(const QPoint & p, const QString & s)
QtDartBindings_EXPORT void
c_QPainter__drawText_QPoint_QString(void *thisObj, void *p_, const char *s_);
// QPainter::drawText(const QPointF & p, const QString & s)
QtDartBindings_EXPORT void
c_QPainter__drawText_QPointF_QString(void *thisObj, void *p_, const char *s_);
// QPainter::drawText(const QPointF & p, const QString & str, int tf, int
// justificationPadding)
QtDartBindings_EXPORT void
c_QPainter__drawText_QPointF_QString_int_int(void *thisObj, void *p_,
                                             const char *str_, int tf,
                                             int justificationPadding);
// QPainter::drawText(const QRect & r, int flags, const QString & text, QRect *
// br)
QtDartBindings_EXPORT void
c_QPainter__drawText_QRect_int_QString_QRect(void *thisObj, void *r_, int flags,
                                             const char *text_, void *br_);
// QPainter::drawText(const QRectF & r, const QString & text)
QtDartBindings_EXPORT void
c_QPainter__drawText_QRectF_QString(void *thisObj, void *r_, const char *text_);
// QPainter::drawText(const QRectF & r, int flags, const QString & text, QRectF
// * br)
QtDartBindings_EXPORT void c_QPainter__drawText_QRectF_int_QString_QRectF(
    void *thisObj, void *r_, int flags, const char *text_, void *br_);
// QPainter::drawText(int x, int y, const QString & s)
QtDartBindings_EXPORT void c_QPainter__drawText_int_int_QString(void *thisObj,
                                                                int x, int y,
                                                                const char *s_);
// QPainter::drawText(int x, int y, int w, int h, int flags, const QString &
// text, QRect * br)
QtDartBindings_EXPORT void
c_QPainter__drawText_int_int_int_int_int_QString_QRect(void *thisObj, int x,
                                                       int y, int w, int h,
                                                       int flags,
                                                       const char *text_,
                                                       void *br_);
// QPainter::drawTiledPixmap(const QRect & arg__1, const QPixmap & arg__2, const
// QPoint & arg__3)
QtDartBindings_EXPORT void
c_QPainter__drawTiledPixmap_QRect_QPixmap_QPoint(void *thisObj, void *arg__1_,
                                                 void *arg__2_, void *arg__3_);
// QPainter::drawTiledPixmap(const QRectF & rect, const QPixmap & pm, const
// QPointF & offset)
QtDartBindings_EXPORT void
c_QPainter__drawTiledPixmap_QRectF_QPixmap_QPointF(void *thisObj, void *rect_,
                                                   void *pm_, void *offset_);
// QPainter::drawTiledPixmap(int x, int y, int w, int h, const QPixmap & arg__5,
// int sx, int sy)
QtDartBindings_EXPORT void
c_QPainter__drawTiledPixmap_int_int_int_int_QPixmap_int_int(
    void *thisObj, int x, int y, int w, int h, void *arg__5_, int sx, int sy);
// QPainter::end()
QtDartBindings_EXPORT bool c_QPainter__end(void *thisObj);
// QPainter::endNativePainting()
QtDartBindings_EXPORT void c_QPainter__endNativePainting(void *thisObj);
// QPainter::eraseRect(const QRect & arg__1)
QtDartBindings_EXPORT void c_QPainter__eraseRect_QRect(void *thisObj,
                                                       void *arg__1_);
// QPainter::eraseRect(const QRectF & arg__1)
QtDartBindings_EXPORT void c_QPainter__eraseRect_QRectF(void *thisObj,
                                                        void *arg__1_);
// QPainter::eraseRect(int x, int y, int w, int h)
QtDartBindings_EXPORT void c_QPainter__eraseRect_int_int_int_int(void *thisObj,
                                                                 int x, int y,
                                                                 int w, int h);
// QPainter::fillRect(const QRect & arg__1, const QBrush & arg__2)
QtDartBindings_EXPORT void
c_QPainter__fillRect_QRect_QBrush(void *thisObj, void *arg__1_, void *arg__2_);
// QPainter::fillRect(const QRect & arg__1, const QColor & color)
QtDartBindings_EXPORT void
c_QPainter__fillRect_QRect_QColor(void *thisObj, void *arg__1_, void *color_);
// QPainter::fillRect(const QRectF & arg__1, const QBrush & arg__2)
QtDartBindings_EXPORT void
c_QPainter__fillRect_QRectF_QBrush(void *thisObj, void *arg__1_, void *arg__2_);
// QPainter::fillRect(const QRectF & arg__1, const QColor & color)
QtDartBindings_EXPORT void
c_QPainter__fillRect_QRectF_QColor(void *thisObj, void *arg__1_, void *color_);
// QPainter::fillRect(int x, int y, int w, int h, const QBrush & arg__5)
QtDartBindings_EXPORT void
c_QPainter__fillRect_int_int_int_int_QBrush(void *thisObj, int x, int y, int w,
                                            int h, void *arg__5_);
// QPainter::fillRect(int x, int y, int w, int h, const QColor & color)
QtDartBindings_EXPORT void
c_QPainter__fillRect_int_int_int_int_QColor(void *thisObj, int x, int y, int w,
                                            int h, void *color_);
// QPainter::font() const
QtDartBindings_EXPORT void *c_QPainter__font(void *thisObj);
// QPainter::hasClipping() const
QtDartBindings_EXPORT bool c_QPainter__hasClipping(void *thisObj);
// QPainter::isActive() const
QtDartBindings_EXPORT bool c_QPainter__isActive(void *thisObj);
// QPainter::layoutDirection() const
QtDartBindings_EXPORT int c_QPainter__layoutDirection(void *thisObj);
// QPainter::opacity() const
QtDartBindings_EXPORT qreal c_QPainter__opacity(void *thisObj);
// QPainter::pen() const
QtDartBindings_EXPORT void *c_QPainter__pen(void *thisObj);
// QPainter::resetTransform()
QtDartBindings_EXPORT void c_QPainter__resetTransform(void *thisObj);
// QPainter::restore()
QtDartBindings_EXPORT void c_QPainter__restore(void *thisObj);
// QPainter::rotate(qreal a)
QtDartBindings_EXPORT void c_QPainter__rotate_qreal(void *thisObj, qreal a);
// QPainter::save()
QtDartBindings_EXPORT void c_QPainter__save(void *thisObj);
// QPainter::scale(qreal sx, qreal sy)
QtDartBindings_EXPORT void c_QPainter__scale_qreal_qreal(void *thisObj,
                                                         qreal sx, qreal sy);
// QPainter::setBackground(const QBrush & bg)
QtDartBindings_EXPORT void c_QPainter__setBackground_QBrush(void *thisObj,
                                                            void *bg_);
// QPainter::setBrush(const QBrush & brush)
QtDartBindings_EXPORT void c_QPainter__setBrush_QBrush(void *thisObj,
                                                       void *brush_);
// QPainter::setBrushOrigin(const QPoint & arg__1)
QtDartBindings_EXPORT void c_QPainter__setBrushOrigin_QPoint(void *thisObj,
                                                             void *arg__1_);
// QPainter::setBrushOrigin(const QPointF & arg__1)
QtDartBindings_EXPORT void c_QPainter__setBrushOrigin_QPointF(void *thisObj,
                                                              void *arg__1_);
// QPainter::setBrushOrigin(int x, int y)
QtDartBindings_EXPORT void c_QPainter__setBrushOrigin_int_int(void *thisObj,
                                                              int x, int y);
// QPainter::setClipRect(const QRect & arg__1)
QtDartBindings_EXPORT void c_QPainter__setClipRect_QRect(void *thisObj,
                                                         void *arg__1_);
// QPainter::setClipRect(const QRectF & arg__1)
QtDartBindings_EXPORT void c_QPainter__setClipRect_QRectF(void *thisObj,
                                                          void *arg__1_);
// QPainter::setClipRect(int x, int y, int w, int h)
QtDartBindings_EXPORT void
c_QPainter__setClipRect_int_int_int_int(void *thisObj, int x, int y, int w,
                                        int h);
// QPainter::setClipRegion(const QRegion & arg__1)
QtDartBindings_EXPORT void c_QPainter__setClipRegion_QRegion(void *thisObj,
                                                             void *arg__1_);
// QPainter::setClipping(bool enable)
QtDartBindings_EXPORT void c_QPainter__setClipping_bool(void *thisObj,
                                                        bool enable);
// QPainter::setFont(const QFont & f)
QtDartBindings_EXPORT void c_QPainter__setFont_QFont(void *thisObj, void *f_);
// QPainter::setLayoutDirection(Qt::LayoutDirection direction)
QtDartBindings_EXPORT void
c_QPainter__setLayoutDirection_LayoutDirection(void *thisObj, int direction);
// QPainter::setOpacity(qreal opacity)
QtDartBindings_EXPORT void c_QPainter__setOpacity_qreal(void *thisObj,
                                                        qreal opacity);
// QPainter::setPen(const QColor & color)
QtDartBindings_EXPORT void c_QPainter__setPen_QColor(void *thisObj,
                                                     void *color_);
// QPainter::setPen(const QPen & pen)
QtDartBindings_EXPORT void c_QPainter__setPen_QPen(void *thisObj, void *pen_);
// QPainter::setViewTransformEnabled(bool enable)
QtDartBindings_EXPORT void
c_QPainter__setViewTransformEnabled_bool(void *thisObj, bool enable);
// QPainter::setViewport(const QRect & viewport)
QtDartBindings_EXPORT void c_QPainter__setViewport_QRect(void *thisObj,
                                                         void *viewport_);
// QPainter::setViewport(int x, int y, int w, int h)
QtDartBindings_EXPORT void
c_QPainter__setViewport_int_int_int_int(void *thisObj, int x, int y, int w,
                                        int h);
// QPainter::setWindow(const QRect & window)
QtDartBindings_EXPORT void c_QPainter__setWindow_QRect(void *thisObj,
                                                       void *window_);
// QPainter::setWindow(int x, int y, int w, int h)
QtDartBindings_EXPORT void c_QPainter__setWindow_int_int_int_int(void *thisObj,
                                                                 int x, int y,
                                                                 int w, int h);
// QPainter::setWorldMatrixEnabled(bool enabled)
QtDartBindings_EXPORT void c_QPainter__setWorldMatrixEnabled_bool(void *thisObj,
                                                                  bool enabled);
// QPainter::shear(qreal sh, qreal sv)
QtDartBindings_EXPORT void c_QPainter__shear_qreal_qreal(void *thisObj,
                                                         qreal sh, qreal sv);
// QPainter::translate(const QPoint & offset)
QtDartBindings_EXPORT void c_QPainter__translate_QPoint(void *thisObj,
                                                        void *offset_);
// QPainter::translate(const QPointF & offset)
QtDartBindings_EXPORT void c_QPainter__translate_QPointF(void *thisObj,
                                                         void *offset_);
// QPainter::translate(qreal dx, qreal dy)
QtDartBindings_EXPORT void
c_QPainter__translate_qreal_qreal(void *thisObj, qreal dx, qreal dy);
// QPainter::viewTransformEnabled() const
QtDartBindings_EXPORT bool c_QPainter__viewTransformEnabled(void *thisObj);
// QPainter::viewport() const
QtDartBindings_EXPORT void *c_QPainter__viewport(void *thisObj);
// QPainter::window() const
QtDartBindings_EXPORT void *c_QPainter__window(void *thisObj);
// QPainter::worldMatrixEnabled() const
QtDartBindings_EXPORT bool c_QPainter__worldMatrixEnabled(void *thisObj);
QtDartBindings_EXPORT void c_QPainter__destructor(void *thisObj);
QtDartBindings_EXPORT void c_QPainter_Finalizer(void *cppObj);
}
