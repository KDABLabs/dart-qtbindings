
// tag=1040
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
// tag=1043
class QPainter_wrapper : public ::QPainter {
public:
  ~QPainter_wrapper();
  // tag=1041
  QPainter_wrapper();
  // tag=1041
  const QBrush &background() const;
  // tag=1041
  void beginNativePainting();
  // tag=1041
  QRect boundingRect(const QRect &rect, int flags, const QString &text);
  // tag=1041
  QRectF boundingRect(const QRectF &rect, const QString &text);
  // tag=1041
  QRectF boundingRect(const QRectF &rect, int flags, const QString &text);
  // tag=1041
  QRect boundingRect(int x, int y, int w, int h, int flags,
                     const QString &text);
  // tag=1041
  const QBrush &brush() const;
  // tag=1041
  QPoint brushOrigin() const;
  // tag=1041
  QRectF clipBoundingRect() const;
  // tag=1041
  QRegion clipRegion() const;
  // tag=1041
  void drawArc(const QRect &arg__1, int a, int alen);
  // tag=1041
  void drawArc(const QRectF &rect, int a, int alen);
  // tag=1041
  void drawArc(int x, int y, int w, int h, int a, int alen);
  // tag=1041
  void drawChord(const QRect &arg__1, int a, int alen);
  // tag=1041
  void drawChord(const QRectF &rect, int a, int alen);
  // tag=1041
  void drawChord(int x, int y, int w, int h, int a, int alen);
  // tag=1041
  void drawConvexPolygon(const QPoint *points, int pointCount);
  // tag=1041
  void drawConvexPolygon(const QPointF *points, int pointCount);
  // tag=1041
  void drawEllipse(const QPoint &center, int rx, int ry);
  // tag=1041
  void drawEllipse(const QPointF &center, qreal rx, qreal ry);
  // tag=1041
  void drawEllipse(const QRect &r);
  // tag=1041
  void drawEllipse(const QRectF &r);
  // tag=1041
  void drawEllipse(int x, int y, int w, int h);
  // tag=1041
  void drawLine(const QLine &line);
  // tag=1041
  void drawLine(const QLineF &line);
  // tag=1041
  void drawLine(const QPoint &p1, const QPoint &p2);
  // tag=1041
  void drawLine(const QPointF &p1, const QPointF &p2);
  // tag=1041
  void drawLine(int x1, int y1, int x2, int y2);
  // tag=1041
  void drawLines(const QLine *lines, int lineCount);
  // tag=1041
  void drawLines(const QLineF *lines, int lineCount);
  // tag=1041
  void drawLines(const QList<QLine> &lines);
  // tag=1041
  void drawLines(const QList<QLineF> &lines);
  // tag=1041
  void drawLines(const QList<QPoint> &pointPairs);
  // tag=1041
  void drawLines(const QList<QPointF> &pointPairs);
  // tag=1041
  void drawLines(const QPoint *pointPairs, int lineCount);
  // tag=1041
  void drawLines(const QPointF *pointPairs, int lineCount);
  // tag=1041
  void drawPie(const QRect &arg__1, int a, int alen);
  // tag=1041
  void drawPie(const QRectF &rect, int a, int alen);
  // tag=1041
  void drawPie(int x, int y, int w, int h, int a, int alen);
  // tag=1041
  void drawPixmap(const QPoint &p, const QPixmap &pm);
  // tag=1041
  void drawPixmap(const QPoint &p, const QPixmap &pm, const QRect &sr);
  // tag=1041
  void drawPixmap(const QPointF &p, const QPixmap &pm);
  // tag=1041
  void drawPixmap(const QPointF &p, const QPixmap &pm, const QRectF &sr);
  // tag=1041
  void drawPixmap(const QRect &r, const QPixmap &pm);
  // tag=1041
  void drawPixmap(const QRect &targetRect, const QPixmap &pixmap,
                  const QRect &sourceRect);
  // tag=1041
  void drawPixmap(const QRectF &targetRect, const QPixmap &pixmap,
                  const QRectF &sourceRect);
  // tag=1041
  void drawPixmap(int x, int y, const QPixmap &pm);
  // tag=1041
  void drawPixmap(int x, int y, const QPixmap &pm, int sx, int sy, int sw,
                  int sh);
  // tag=1041
  void drawPixmap(int x, int y, int w, int h, const QPixmap &pm);
  // tag=1041
  void drawPixmap(int x, int y, int w, int h, const QPixmap &pm, int sx, int sy,
                  int sw, int sh);
  // tag=1041
  void drawPoint(const QPoint &p);
  // tag=1041
  void drawPoint(const QPointF &pt);
  // tag=1041
  void drawPoint(int x, int y);
  // tag=1041
  void drawPoints(const QPoint *points, int pointCount);
  // tag=1041
  void drawPoints(const QPointF *points, int pointCount);
  // tag=1041
  void drawPolygon(const QPoint *points, int pointCount);
  // tag=1041
  void drawPolygon(const QPointF *points, int pointCount);
  // tag=1041
  void drawPolyline(const QPoint *points, int pointCount);
  // tag=1041
  void drawPolyline(const QPointF *points, int pointCount);
  // tag=1041
  void drawRect(const QRect &rect);
  // tag=1041
  void drawRect(const QRectF &rect);
  // tag=1041
  void drawRect(int x1, int y1, int w, int h);
  // tag=1041
  void drawRects(const QList<QRect> &rectangles);
  // tag=1041
  void drawRects(const QList<QRectF> &rectangles);
  // tag=1041
  void drawRects(const QRect *rects, int rectCount);
  // tag=1041
  void drawRects(const QRectF *rects, int rectCount);
  // tag=1041
  void drawRoundedRect(const QRect &rect, qreal xRadius, qreal yRadius);
  // tag=1041
  void drawRoundedRect(const QRectF &rect, qreal xRadius, qreal yRadius);
  // tag=1041
  void drawRoundedRect(int x, int y, int w, int h, qreal xRadius,
                       qreal yRadius);
  // tag=1041
  void drawText(const QPoint &p, const QString &s);
  // tag=1041
  void drawText(const QPointF &p, const QString &s);
  // tag=1041
  void drawText(const QPointF &p, const QString &str, int tf,
                int justificationPadding);
  // tag=1041
  void drawText(const QRect &r, int flags, const QString &text,
                QRect *br = nullptr);
  // tag=1041
  void drawText(const QRectF &r, const QString &text);
  // tag=1041
  void drawText(const QRectF &r, int flags, const QString &text,
                QRectF *br = nullptr);
  // tag=1041
  void drawText(int x, int y, const QString &s);
  // tag=1041
  void drawText(int x, int y, int w, int h, int flags, const QString &text,
                QRect *br = nullptr);
  // tag=1041
  void drawTiledPixmap(const QRect &arg__1, const QPixmap &arg__2,
                       const QPoint &arg__3 = QPoint());
  // tag=1041
  void drawTiledPixmap(const QRectF &rect, const QPixmap &pm,
                       const QPointF &offset = QPointF());
  // tag=1041
  void drawTiledPixmap(int x, int y, int w, int h, const QPixmap &arg__5,
                       int sx = 0, int sy = 0);
  // tag=1041
  bool end();
  // tag=1041
  void endNativePainting();
  // tag=1041
  void eraseRect(const QRect &arg__1);
  // tag=1041
  void eraseRect(const QRectF &arg__1);
  // tag=1041
  void eraseRect(int x, int y, int w, int h);
  // tag=1041
  void fillRect(const QRect &arg__1, const QBrush &arg__2);
  // tag=1041
  void fillRect(const QRect &arg__1, const QColor &color);
  // tag=1041
  void fillRect(const QRectF &arg__1, const QBrush &arg__2);
  // tag=1041
  void fillRect(const QRectF &arg__1, const QColor &color);
  // tag=1041
  void fillRect(int x, int y, int w, int h, const QBrush &arg__5);
  // tag=1041
  void fillRect(int x, int y, int w, int h, const QColor &color);
  // tag=1041
  const QFont &font() const;
  // tag=1041
  bool hasClipping() const;
  // tag=1041
  bool isActive() const;
  // tag=1041
  Qt::LayoutDirection layoutDirection() const;
  // tag=1041
  qreal opacity() const;
  // tag=1041
  const QPen &pen() const;
  // tag=1041
  void resetTransform();
  // tag=1041
  void restore();
  // tag=1041
  void rotate(qreal a);
  // tag=1041
  void save();
  // tag=1041
  void scale(qreal sx, qreal sy);
  // tag=1041
  void setBackground(const QBrush &bg);
  // tag=1041
  void setBrush(const QBrush &brush);
  // tag=1041
  void setBrushOrigin(const QPoint &arg__1);
  // tag=1041
  void setBrushOrigin(const QPointF &arg__1);
  // tag=1041
  void setBrushOrigin(int x, int y);
  // tag=1041
  void setClipRect(const QRect &arg__1);
  // tag=1041
  void setClipRect(const QRectF &arg__1);
  // tag=1041
  void setClipRect(int x, int y, int w, int h);
  // tag=1041
  void setClipRegion(const QRegion &arg__1);
  // tag=1041
  void setClipping(bool enable);
  // tag=1041
  void setFont(const QFont &f);
  // tag=1041
  void setLayoutDirection(Qt::LayoutDirection direction);
  // tag=1041
  void setOpacity(qreal opacity);
  // tag=1041
  void setPen(const QColor &color);
  // tag=1041
  void setPen(const QPen &pen);
  // tag=1041
  void setViewTransformEnabled(bool enable);
  // tag=1041
  void setViewport(const QRect &viewport);
  // tag=1041
  void setViewport(int x, int y, int w, int h);
  // tag=1041
  void setWindow(const QRect &window);
  // tag=1041
  void setWindow(int x, int y, int w, int h);
  // tag=1041
  void setWorldMatrixEnabled(bool enabled);
  // tag=1041
  void shear(qreal sh, qreal sv);
  // tag=1041
  void translate(const QPoint &offset);
  // tag=1041
  void translate(const QPointF &offset);
  // tag=1041
  void translate(qreal dx, qreal dy);
  // tag=1041
  bool viewTransformEnabled() const;
  // tag=1041
  QRect viewport() const;
  // tag=1041
  QRect window() const;
  // tag=1041
  bool worldMatrixEnabled() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QPainter::QPainter()
QtDartBindings_EXPORT void *c_QPainter__constructor();

// tag=1067
//  QPainter::background() const
QtDartBindings_EXPORT void *c_QPainter__background(void *thisObj);

// tag=1067
//  QPainter::beginNativePainting()
QtDartBindings_EXPORT void c_QPainter__beginNativePainting(void *thisObj);

// tag=1067
//  QPainter::boundingRect(const QRect & rect, int flags, const QString & text)
QtDartBindings_EXPORT void *
c_QPainter__boundingRect_QRect_int_QString(void *thisObj, void *rect_,
                                           int flags, const char *text_);

// tag=1067
//  QPainter::boundingRect(const QRectF & rect, const QString & text)
QtDartBindings_EXPORT void *
c_QPainter__boundingRect_QRectF_QString(void *thisObj, void *rect_,
                                        const char *text_);

// tag=1067
//  QPainter::boundingRect(const QRectF & rect, int flags, const QString & text)
QtDartBindings_EXPORT void *
c_QPainter__boundingRect_QRectF_int_QString(void *thisObj, void *rect_,
                                            int flags, const char *text_);

// tag=1067
//  QPainter::boundingRect(int x, int y, int w, int h, int flags, const QString
//  & text)
QtDartBindings_EXPORT void *
c_QPainter__boundingRect_int_int_int_int_int_QString(void *thisObj, int x,
                                                     int y, int w, int h,
                                                     int flags,
                                                     const char *text_);

// tag=1067
//  QPainter::brush() const
QtDartBindings_EXPORT void *c_QPainter__brush(void *thisObj);

// tag=1067
//  QPainter::brushOrigin() const
QtDartBindings_EXPORT void *c_QPainter__brushOrigin(void *thisObj);

// tag=1067
//  QPainter::clipBoundingRect() const
QtDartBindings_EXPORT void *c_QPainter__clipBoundingRect(void *thisObj);

// tag=1067
//  QPainter::clipRegion() const
QtDartBindings_EXPORT void *c_QPainter__clipRegion(void *thisObj);

// tag=1067
//  QPainter::drawArc(const QRect & arg__1, int a, int alen)
QtDartBindings_EXPORT void c_QPainter__drawArc_QRect_int_int(void *thisObj,
                                                             void *arg__1_,
                                                             int a, int alen);

// tag=1067
//  QPainter::drawArc(const QRectF & rect, int a, int alen)
QtDartBindings_EXPORT void
c_QPainter__drawArc_QRectF_int_int(void *thisObj, void *rect_, int a, int alen);

// tag=1067
//  QPainter::drawArc(int x, int y, int w, int h, int a, int alen)
QtDartBindings_EXPORT void
c_QPainter__drawArc_int_int_int_int_int_int(void *thisObj, int x, int y, int w,
                                            int h, int a, int alen);

// tag=1067
//  QPainter::drawChord(const QRect & arg__1, int a, int alen)
QtDartBindings_EXPORT void c_QPainter__drawChord_QRect_int_int(void *thisObj,
                                                               void *arg__1_,
                                                               int a, int alen);

// tag=1067
//  QPainter::drawChord(const QRectF & rect, int a, int alen)
QtDartBindings_EXPORT void c_QPainter__drawChord_QRectF_int_int(void *thisObj,
                                                                void *rect_,
                                                                int a,
                                                                int alen);

// tag=1067
//  QPainter::drawChord(int x, int y, int w, int h, int a, int alen)
QtDartBindings_EXPORT void
c_QPainter__drawChord_int_int_int_int_int_int(void *thisObj, int x, int y,
                                              int w, int h, int a, int alen);

// tag=1067
//  QPainter::drawConvexPolygon(const QPoint * points, int pointCount)
QtDartBindings_EXPORT void
c_QPainter__drawConvexPolygon_QPoint_int(void *thisObj, void *points_,
                                         int pointCount);

// tag=1067
//  QPainter::drawConvexPolygon(const QPointF * points, int pointCount)
QtDartBindings_EXPORT void
c_QPainter__drawConvexPolygon_QPointF_int(void *thisObj, void *points_,
                                          int pointCount);

// tag=1067
//  QPainter::drawEllipse(const QPoint & center, int rx, int ry)
QtDartBindings_EXPORT void c_QPainter__drawEllipse_QPoint_int_int(void *thisObj,
                                                                  void *center_,
                                                                  int rx,
                                                                  int ry);

// tag=1067
//  QPainter::drawEllipse(const QPointF & center, qreal rx, qreal ry)
QtDartBindings_EXPORT void
c_QPainter__drawEllipse_QPointF_qreal_qreal(void *thisObj, void *center_,
                                            qreal rx, qreal ry);

// tag=1067
//  QPainter::drawEllipse(const QRect & r)
QtDartBindings_EXPORT void c_QPainter__drawEllipse_QRect(void *thisObj,
                                                         void *r_);

// tag=1067
//  QPainter::drawEllipse(const QRectF & r)
QtDartBindings_EXPORT void c_QPainter__drawEllipse_QRectF(void *thisObj,
                                                          void *r_);

// tag=1067
//  QPainter::drawEllipse(int x, int y, int w, int h)
QtDartBindings_EXPORT void
c_QPainter__drawEllipse_int_int_int_int(void *thisObj, int x, int y, int w,
                                        int h);

// tag=1067
//  QPainter::drawLine(const QLine & line)
QtDartBindings_EXPORT void c_QPainter__drawLine_QLine(void *thisObj,
                                                      void *line_);

// tag=1067
//  QPainter::drawLine(const QLineF & line)
QtDartBindings_EXPORT void c_QPainter__drawLine_QLineF(void *thisObj,
                                                       void *line_);

// tag=1067
//  QPainter::drawLine(const QPoint & p1, const QPoint & p2)
QtDartBindings_EXPORT void
c_QPainter__drawLine_QPoint_QPoint(void *thisObj, void *p1_, void *p2_);

// tag=1067
//  QPainter::drawLine(const QPointF & p1, const QPointF & p2)
QtDartBindings_EXPORT void
c_QPainter__drawLine_QPointF_QPointF(void *thisObj, void *p1_, void *p2_);

// tag=1067
//  QPainter::drawLine(int x1, int y1, int x2, int y2)
QtDartBindings_EXPORT void c_QPainter__drawLine_int_int_int_int(void *thisObj,
                                                                int x1, int y1,
                                                                int x2, int y2);

// tag=1067
//  QPainter::drawLines(const QLine * lines, int lineCount)
QtDartBindings_EXPORT void
c_QPainter__drawLines_QLine_int(void *thisObj, void *lines_, int lineCount);

// tag=1067
//  QPainter::drawLines(const QLineF * lines, int lineCount)
QtDartBindings_EXPORT void
c_QPainter__drawLines_QLineF_int(void *thisObj, void *lines_, int lineCount);

// tag=1067
//  QPainter::drawLines(const QList<QLine > & lines)
QtDartBindings_EXPORT void c_QPainter__drawLines_QList_QLine(void *thisObj,
                                                             void *lines_);

// tag=1067
//  QPainter::drawLines(const QList<QLineF > & lines)
QtDartBindings_EXPORT void c_QPainter__drawLines_QList_QLineF(void *thisObj,
                                                              void *lines_);

// tag=1067
//  QPainter::drawLines(const QList<QPoint > & pointPairs)
QtDartBindings_EXPORT void
c_QPainter__drawLines_QList_QPoint(void *thisObj, void *pointPairs_);

// tag=1067
//  QPainter::drawLines(const QList<QPointF > & pointPairs)
QtDartBindings_EXPORT void
c_QPainter__drawLines_QList_QPointF(void *thisObj, void *pointPairs_);

// tag=1067
//  QPainter::drawLines(const QPoint * pointPairs, int lineCount)
QtDartBindings_EXPORT void c_QPainter__drawLines_QPoint_int(void *thisObj,
                                                            void *pointPairs_,
                                                            int lineCount);

// tag=1067
//  QPainter::drawLines(const QPointF * pointPairs, int lineCount)
QtDartBindings_EXPORT void c_QPainter__drawLines_QPointF_int(void *thisObj,
                                                             void *pointPairs_,
                                                             int lineCount);

// tag=1067
//  QPainter::drawPie(const QRect & arg__1, int a, int alen)
QtDartBindings_EXPORT void c_QPainter__drawPie_QRect_int_int(void *thisObj,
                                                             void *arg__1_,
                                                             int a, int alen);

// tag=1067
//  QPainter::drawPie(const QRectF & rect, int a, int alen)
QtDartBindings_EXPORT void
c_QPainter__drawPie_QRectF_int_int(void *thisObj, void *rect_, int a, int alen);

// tag=1067
//  QPainter::drawPie(int x, int y, int w, int h, int a, int alen)
QtDartBindings_EXPORT void
c_QPainter__drawPie_int_int_int_int_int_int(void *thisObj, int x, int y, int w,
                                            int h, int a, int alen);

// tag=1067
//  QPainter::drawPixmap(const QPoint & p, const QPixmap & pm)
QtDartBindings_EXPORT void
c_QPainter__drawPixmap_QPoint_QPixmap(void *thisObj, void *p_, void *pm_);

// tag=1067
//  QPainter::drawPixmap(const QPoint & p, const QPixmap & pm, const QRect & sr)
QtDartBindings_EXPORT void
c_QPainter__drawPixmap_QPoint_QPixmap_QRect(void *thisObj, void *p_, void *pm_,
                                            void *sr_);

// tag=1067
//  QPainter::drawPixmap(const QPointF & p, const QPixmap & pm)
QtDartBindings_EXPORT void
c_QPainter__drawPixmap_QPointF_QPixmap(void *thisObj, void *p_, void *pm_);

// tag=1067
//  QPainter::drawPixmap(const QPointF & p, const QPixmap & pm, const QRectF &
//  sr)
QtDartBindings_EXPORT void
c_QPainter__drawPixmap_QPointF_QPixmap_QRectF(void *thisObj, void *p_,
                                              void *pm_, void *sr_);

// tag=1067
//  QPainter::drawPixmap(const QRect & r, const QPixmap & pm)
QtDartBindings_EXPORT void
c_QPainter__drawPixmap_QRect_QPixmap(void *thisObj, void *r_, void *pm_);

// tag=1067
//  QPainter::drawPixmap(const QRect & targetRect, const QPixmap & pixmap, const
//  QRect & sourceRect)
QtDartBindings_EXPORT void
c_QPainter__drawPixmap_QRect_QPixmap_QRect(void *thisObj, void *targetRect_,
                                           void *pixmap_, void *sourceRect_);

// tag=1067
//  QPainter::drawPixmap(const QRectF & targetRect, const QPixmap & pixmap,
//  const QRectF & sourceRect)
QtDartBindings_EXPORT void
c_QPainter__drawPixmap_QRectF_QPixmap_QRectF(void *thisObj, void *targetRect_,
                                             void *pixmap_, void *sourceRect_);

// tag=1067
//  QPainter::drawPixmap(int x, int y, const QPixmap & pm)
QtDartBindings_EXPORT void
c_QPainter__drawPixmap_int_int_QPixmap(void *thisObj, int x, int y, void *pm_);

// tag=1067
//  QPainter::drawPixmap(int x, int y, const QPixmap & pm, int sx, int sy, int
//  sw, int sh)
QtDartBindings_EXPORT void
c_QPainter__drawPixmap_int_int_QPixmap_int_int_int_int(void *thisObj, int x,
                                                       int y, void *pm_, int sx,
                                                       int sy, int sw, int sh);

// tag=1067
//  QPainter::drawPixmap(int x, int y, int w, int h, const QPixmap & pm)
QtDartBindings_EXPORT void
c_QPainter__drawPixmap_int_int_int_int_QPixmap(void *thisObj, int x, int y,
                                               int w, int h, void *pm_);

// tag=1067
//  QPainter::drawPixmap(int x, int y, int w, int h, const QPixmap & pm, int sx,
//  int sy, int sw, int sh)
QtDartBindings_EXPORT void
c_QPainter__drawPixmap_int_int_int_int_QPixmap_int_int_int_int(
    void *thisObj, int x, int y, int w, int h, void *pm_, int sx, int sy,
    int sw, int sh);

// tag=1067
//  QPainter::drawPoint(const QPoint & p)
QtDartBindings_EXPORT void c_QPainter__drawPoint_QPoint(void *thisObj,
                                                        void *p_);

// tag=1067
//  QPainter::drawPoint(const QPointF & pt)
QtDartBindings_EXPORT void c_QPainter__drawPoint_QPointF(void *thisObj,
                                                         void *pt_);

// tag=1067
//  QPainter::drawPoint(int x, int y)
QtDartBindings_EXPORT void c_QPainter__drawPoint_int_int(void *thisObj, int x,
                                                         int y);

// tag=1067
//  QPainter::drawPoints(const QPoint * points, int pointCount)
QtDartBindings_EXPORT void
c_QPainter__drawPoints_QPoint_int(void *thisObj, void *points_, int pointCount);

// tag=1067
//  QPainter::drawPoints(const QPointF * points, int pointCount)
QtDartBindings_EXPORT void c_QPainter__drawPoints_QPointF_int(void *thisObj,
                                                              void *points_,
                                                              int pointCount);

// tag=1067
//  QPainter::drawPolygon(const QPoint * points, int pointCount)
QtDartBindings_EXPORT void c_QPainter__drawPolygon_QPoint_int(void *thisObj,
                                                              void *points_,
                                                              int pointCount);

// tag=1067
//  QPainter::drawPolygon(const QPointF * points, int pointCount)
QtDartBindings_EXPORT void c_QPainter__drawPolygon_QPointF_int(void *thisObj,
                                                               void *points_,
                                                               int pointCount);

// tag=1067
//  QPainter::drawPolyline(const QPoint * points, int pointCount)
QtDartBindings_EXPORT void c_QPainter__drawPolyline_QPoint_int(void *thisObj,
                                                               void *points_,
                                                               int pointCount);

// tag=1067
//  QPainter::drawPolyline(const QPointF * points, int pointCount)
QtDartBindings_EXPORT void c_QPainter__drawPolyline_QPointF_int(void *thisObj,
                                                                void *points_,
                                                                int pointCount);

// tag=1067
//  QPainter::drawRect(const QRect & rect)
QtDartBindings_EXPORT void c_QPainter__drawRect_QRect(void *thisObj,
                                                      void *rect_);

// tag=1067
//  QPainter::drawRect(const QRectF & rect)
QtDartBindings_EXPORT void c_QPainter__drawRect_QRectF(void *thisObj,
                                                       void *rect_);

// tag=1067
//  QPainter::drawRect(int x1, int y1, int w, int h)
QtDartBindings_EXPORT void c_QPainter__drawRect_int_int_int_int(void *thisObj,
                                                                int x1, int y1,
                                                                int w, int h);

// tag=1067
//  QPainter::drawRects(const QList<QRect > & rectangles)
QtDartBindings_EXPORT void c_QPainter__drawRects_QList_QRect(void *thisObj,
                                                             void *rectangles_);

// tag=1067
//  QPainter::drawRects(const QList<QRectF > & rectangles)
QtDartBindings_EXPORT void
c_QPainter__drawRects_QList_QRectF(void *thisObj, void *rectangles_);

// tag=1067
//  QPainter::drawRects(const QRect * rects, int rectCount)
QtDartBindings_EXPORT void
c_QPainter__drawRects_QRect_int(void *thisObj, void *rects_, int rectCount);

// tag=1067
//  QPainter::drawRects(const QRectF * rects, int rectCount)
QtDartBindings_EXPORT void
c_QPainter__drawRects_QRectF_int(void *thisObj, void *rects_, int rectCount);

// tag=1067
//  QPainter::drawRoundedRect(const QRect & rect, qreal xRadius, qreal yRadius)
QtDartBindings_EXPORT void
c_QPainter__drawRoundedRect_QRect_qreal_qreal(void *thisObj, void *rect_,
                                              qreal xRadius, qreal yRadius);

// tag=1067
//  QPainter::drawRoundedRect(const QRectF & rect, qreal xRadius, qreal yRadius)
QtDartBindings_EXPORT void
c_QPainter__drawRoundedRect_QRectF_qreal_qreal(void *thisObj, void *rect_,
                                               qreal xRadius, qreal yRadius);

// tag=1067
//  QPainter::drawRoundedRect(int x, int y, int w, int h, qreal xRadius, qreal
//  yRadius)
QtDartBindings_EXPORT void
c_QPainter__drawRoundedRect_int_int_int_int_qreal_qreal(void *thisObj, int x,
                                                        int y, int w, int h,
                                                        qreal xRadius,
                                                        qreal yRadius);

// tag=1067
//  QPainter::drawText(const QPoint & p, const QString & s)
QtDartBindings_EXPORT void
c_QPainter__drawText_QPoint_QString(void *thisObj, void *p_, const char *s_);

// tag=1067
//  QPainter::drawText(const QPointF & p, const QString & s)
QtDartBindings_EXPORT void
c_QPainter__drawText_QPointF_QString(void *thisObj, void *p_, const char *s_);

// tag=1067
//  QPainter::drawText(const QPointF & p, const QString & str, int tf, int
//  justificationPadding)
QtDartBindings_EXPORT void
c_QPainter__drawText_QPointF_QString_int_int(void *thisObj, void *p_,
                                             const char *str_, int tf,
                                             int justificationPadding);

// tag=1067
//  QPainter::drawText(const QRect & r, int flags, const QString & text, QRect *
//  br)
QtDartBindings_EXPORT void
c_QPainter__drawText_QRect_int_QString_QRect(void *thisObj, void *r_, int flags,
                                             const char *text_, void *br_);

// tag=1067
//  QPainter::drawText(const QRectF & r, const QString & text)
QtDartBindings_EXPORT void
c_QPainter__drawText_QRectF_QString(void *thisObj, void *r_, const char *text_);

// tag=1067
//  QPainter::drawText(const QRectF & r, int flags, const QString & text, QRectF
//  * br)
QtDartBindings_EXPORT void c_QPainter__drawText_QRectF_int_QString_QRectF(
    void *thisObj, void *r_, int flags, const char *text_, void *br_);

// tag=1067
//  QPainter::drawText(int x, int y, const QString & s)
QtDartBindings_EXPORT void c_QPainter__drawText_int_int_QString(void *thisObj,
                                                                int x, int y,
                                                                const char *s_);

// tag=1067
//  QPainter::drawText(int x, int y, int w, int h, int flags, const QString &
//  text, QRect * br)
QtDartBindings_EXPORT void
c_QPainter__drawText_int_int_int_int_int_QString_QRect(void *thisObj, int x,
                                                       int y, int w, int h,
                                                       int flags,
                                                       const char *text_,
                                                       void *br_);

// tag=1067
//  QPainter::drawTiledPixmap(const QRect & arg__1, const QPixmap & arg__2,
//  const QPoint & arg__3)
QtDartBindings_EXPORT void
c_QPainter__drawTiledPixmap_QRect_QPixmap_QPoint(void *thisObj, void *arg__1_,
                                                 void *arg__2_, void *arg__3_);

// tag=1067
//  QPainter::drawTiledPixmap(const QRectF & rect, const QPixmap & pm, const
//  QPointF & offset)
QtDartBindings_EXPORT void
c_QPainter__drawTiledPixmap_QRectF_QPixmap_QPointF(void *thisObj, void *rect_,
                                                   void *pm_, void *offset_);

// tag=1067
//  QPainter::drawTiledPixmap(int x, int y, int w, int h, const QPixmap &
//  arg__5, int sx, int sy)
QtDartBindings_EXPORT void
c_QPainter__drawTiledPixmap_int_int_int_int_QPixmap_int_int(
    void *thisObj, int x, int y, int w, int h, void *arg__5_, int sx, int sy);

// tag=1067
//  QPainter::end()
QtDartBindings_EXPORT bool c_QPainter__end(void *thisObj);

// tag=1067
//  QPainter::endNativePainting()
QtDartBindings_EXPORT void c_QPainter__endNativePainting(void *thisObj);

// tag=1067
//  QPainter::eraseRect(const QRect & arg__1)
QtDartBindings_EXPORT void c_QPainter__eraseRect_QRect(void *thisObj,
                                                       void *arg__1_);

// tag=1067
//  QPainter::eraseRect(const QRectF & arg__1)
QtDartBindings_EXPORT void c_QPainter__eraseRect_QRectF(void *thisObj,
                                                        void *arg__1_);

// tag=1067
//  QPainter::eraseRect(int x, int y, int w, int h)
QtDartBindings_EXPORT void c_QPainter__eraseRect_int_int_int_int(void *thisObj,
                                                                 int x, int y,
                                                                 int w, int h);

// tag=1067
//  QPainter::fillRect(const QRect & arg__1, const QBrush & arg__2)
QtDartBindings_EXPORT void
c_QPainter__fillRect_QRect_QBrush(void *thisObj, void *arg__1_, void *arg__2_);

// tag=1067
//  QPainter::fillRect(const QRect & arg__1, const QColor & color)
QtDartBindings_EXPORT void
c_QPainter__fillRect_QRect_QColor(void *thisObj, void *arg__1_, void *color_);

// tag=1067
//  QPainter::fillRect(const QRectF & arg__1, const QBrush & arg__2)
QtDartBindings_EXPORT void
c_QPainter__fillRect_QRectF_QBrush(void *thisObj, void *arg__1_, void *arg__2_);

// tag=1067
//  QPainter::fillRect(const QRectF & arg__1, const QColor & color)
QtDartBindings_EXPORT void
c_QPainter__fillRect_QRectF_QColor(void *thisObj, void *arg__1_, void *color_);

// tag=1067
//  QPainter::fillRect(int x, int y, int w, int h, const QBrush & arg__5)
QtDartBindings_EXPORT void
c_QPainter__fillRect_int_int_int_int_QBrush(void *thisObj, int x, int y, int w,
                                            int h, void *arg__5_);

// tag=1067
//  QPainter::fillRect(int x, int y, int w, int h, const QColor & color)
QtDartBindings_EXPORT void
c_QPainter__fillRect_int_int_int_int_QColor(void *thisObj, int x, int y, int w,
                                            int h, void *color_);

// tag=1067
//  QPainter::font() const
QtDartBindings_EXPORT void *c_QPainter__font(void *thisObj);

// tag=1067
//  QPainter::hasClipping() const
QtDartBindings_EXPORT bool c_QPainter__hasClipping(void *thisObj);

// tag=1067
//  QPainter::isActive() const
QtDartBindings_EXPORT bool c_QPainter__isActive(void *thisObj);

// tag=1067
//  QPainter::layoutDirection() const
QtDartBindings_EXPORT int c_QPainter__layoutDirection(void *thisObj);

// tag=1067
//  QPainter::opacity() const
QtDartBindings_EXPORT qreal c_QPainter__opacity(void *thisObj);

// tag=1067
//  QPainter::pen() const
QtDartBindings_EXPORT void *c_QPainter__pen(void *thisObj);

// tag=1067
//  QPainter::resetTransform()
QtDartBindings_EXPORT void c_QPainter__resetTransform(void *thisObj);

// tag=1067
//  QPainter::restore()
QtDartBindings_EXPORT void c_QPainter__restore(void *thisObj);

// tag=1067
//  QPainter::rotate(qreal a)
QtDartBindings_EXPORT void c_QPainter__rotate_qreal(void *thisObj, qreal a);

// tag=1067
//  QPainter::save()
QtDartBindings_EXPORT void c_QPainter__save(void *thisObj);

// tag=1067
//  QPainter::scale(qreal sx, qreal sy)
QtDartBindings_EXPORT void c_QPainter__scale_qreal_qreal(void *thisObj,
                                                         qreal sx, qreal sy);

// tag=1067
//  QPainter::setBackground(const QBrush & bg)
QtDartBindings_EXPORT void c_QPainter__setBackground_QBrush(void *thisObj,
                                                            void *bg_);

// tag=1067
//  QPainter::setBrush(const QBrush & brush)
QtDartBindings_EXPORT void c_QPainter__setBrush_QBrush(void *thisObj,
                                                       void *brush_);

// tag=1067
//  QPainter::setBrushOrigin(const QPoint & arg__1)
QtDartBindings_EXPORT void c_QPainter__setBrushOrigin_QPoint(void *thisObj,
                                                             void *arg__1_);

// tag=1067
//  QPainter::setBrushOrigin(const QPointF & arg__1)
QtDartBindings_EXPORT void c_QPainter__setBrushOrigin_QPointF(void *thisObj,
                                                              void *arg__1_);

// tag=1067
//  QPainter::setBrushOrigin(int x, int y)
QtDartBindings_EXPORT void c_QPainter__setBrushOrigin_int_int(void *thisObj,
                                                              int x, int y);

// tag=1067
//  QPainter::setClipRect(const QRect & arg__1)
QtDartBindings_EXPORT void c_QPainter__setClipRect_QRect(void *thisObj,
                                                         void *arg__1_);

// tag=1067
//  QPainter::setClipRect(const QRectF & arg__1)
QtDartBindings_EXPORT void c_QPainter__setClipRect_QRectF(void *thisObj,
                                                          void *arg__1_);

// tag=1067
//  QPainter::setClipRect(int x, int y, int w, int h)
QtDartBindings_EXPORT void
c_QPainter__setClipRect_int_int_int_int(void *thisObj, int x, int y, int w,
                                        int h);

// tag=1067
//  QPainter::setClipRegion(const QRegion & arg__1)
QtDartBindings_EXPORT void c_QPainter__setClipRegion_QRegion(void *thisObj,
                                                             void *arg__1_);

// tag=1067
//  QPainter::setClipping(bool enable)
QtDartBindings_EXPORT void c_QPainter__setClipping_bool(void *thisObj,
                                                        bool enable);

// tag=1067
//  QPainter::setFont(const QFont & f)
QtDartBindings_EXPORT void c_QPainter__setFont_QFont(void *thisObj, void *f_);

// tag=1067
//  QPainter::setLayoutDirection(Qt::LayoutDirection direction)
QtDartBindings_EXPORT void
c_QPainter__setLayoutDirection_LayoutDirection(void *thisObj, int direction);

// tag=1067
//  QPainter::setOpacity(qreal opacity)
QtDartBindings_EXPORT void c_QPainter__setOpacity_qreal(void *thisObj,
                                                        qreal opacity);

// tag=1067
//  QPainter::setPen(const QColor & color)
QtDartBindings_EXPORT void c_QPainter__setPen_QColor(void *thisObj,
                                                     void *color_);

// tag=1067
//  QPainter::setPen(const QPen & pen)
QtDartBindings_EXPORT void c_QPainter__setPen_QPen(void *thisObj, void *pen_);

// tag=1067
//  QPainter::setViewTransformEnabled(bool enable)
QtDartBindings_EXPORT void
c_QPainter__setViewTransformEnabled_bool(void *thisObj, bool enable);

// tag=1067
//  QPainter::setViewport(const QRect & viewport)
QtDartBindings_EXPORT void c_QPainter__setViewport_QRect(void *thisObj,
                                                         void *viewport_);

// tag=1067
//  QPainter::setViewport(int x, int y, int w, int h)
QtDartBindings_EXPORT void
c_QPainter__setViewport_int_int_int_int(void *thisObj, int x, int y, int w,
                                        int h);

// tag=1067
//  QPainter::setWindow(const QRect & window)
QtDartBindings_EXPORT void c_QPainter__setWindow_QRect(void *thisObj,
                                                       void *window_);

// tag=1067
//  QPainter::setWindow(int x, int y, int w, int h)
QtDartBindings_EXPORT void c_QPainter__setWindow_int_int_int_int(void *thisObj,
                                                                 int x, int y,
                                                                 int w, int h);

// tag=1067
//  QPainter::setWorldMatrixEnabled(bool enabled)
QtDartBindings_EXPORT void c_QPainter__setWorldMatrixEnabled_bool(void *thisObj,
                                                                  bool enabled);

// tag=1067
//  QPainter::shear(qreal sh, qreal sv)
QtDartBindings_EXPORT void c_QPainter__shear_qreal_qreal(void *thisObj,
                                                         qreal sh, qreal sv);

// tag=1067
//  QPainter::translate(const QPoint & offset)
QtDartBindings_EXPORT void c_QPainter__translate_QPoint(void *thisObj,
                                                        void *offset_);

// tag=1067
//  QPainter::translate(const QPointF & offset)
QtDartBindings_EXPORT void c_QPainter__translate_QPointF(void *thisObj,
                                                         void *offset_);

// tag=1067
//  QPainter::translate(qreal dx, qreal dy)
QtDartBindings_EXPORT void
c_QPainter__translate_qreal_qreal(void *thisObj, qreal dx, qreal dy);

// tag=1067
//  QPainter::viewTransformEnabled() const
QtDartBindings_EXPORT bool c_QPainter__viewTransformEnabled(void *thisObj);

// tag=1067
//  QPainter::viewport() const
QtDartBindings_EXPORT void *c_QPainter__viewport(void *thisObj);

// tag=1067
//  QPainter::window() const
QtDartBindings_EXPORT void *c_QPainter__window(void *thisObj);

// tag=1067
//  QPainter::worldMatrixEnabled() const
QtDartBindings_EXPORT bool c_QPainter__worldMatrixEnabled(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QPainter__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QPainter_Finalizer(void *, void *cppObj, void *);
}
