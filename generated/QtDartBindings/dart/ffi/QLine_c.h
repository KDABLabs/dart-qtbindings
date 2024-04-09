/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qline.h>
#include <qpoint.h>

namespace QtDartBindings_wrappersNS {
class QLine_wrapper : public ::QLine {
public:
  ~QLine_wrapper();
  QLine_wrapper();
  QLine_wrapper(const QPoint &pt1, const QPoint &pt2);
  QLine_wrapper(int x1, int y1, int x2, int y2);
  QPoint center() const;
  int dx() const;
  int dy() const;
  bool isNull() const;
  QPoint p1() const;
  QPoint p2() const;
  void setLine(int x1, int y1, int x2, int y2);
  void setP1(const QPoint &p1);
  void setP2(const QPoint &p2);
  void setPoints(const QPoint &p1, const QPoint &p2);
  QLineF toLineF() const;
  void translate(const QPoint &p);
  void translate(int dx, int dy);
  QLine translated(const QPoint &p) const;
  QLine translated(int dx, int dy) const;
  int x1() const;
  int x2() const;
  int y1() const;
  int y2() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QLine::QLine()
QtDartBindings_EXPORT void *c_QLine__constructor();
// QLine::QLine(const QPoint & pt1, const QPoint & pt2)
QtDartBindings_EXPORT void *c_QLine__constructor_QPoint_QPoint(void *pt1_,
                                                               void *pt2_);
// QLine::QLine(int x1, int y1, int x2, int y2)
QtDartBindings_EXPORT void *
c_QLine__constructor_int_int_int_int(int x1, int y1, int x2, int y2);
// QLine::center() const
QtDartBindings_EXPORT void *c_QLine__center(void *thisObj);
// QLine::dx() const
QtDartBindings_EXPORT int c_QLine__dx(void *thisObj);
// QLine::dy() const
QtDartBindings_EXPORT int c_QLine__dy(void *thisObj);
// QLine::isNull() const
QtDartBindings_EXPORT bool c_QLine__isNull(void *thisObj);
// QLine::p1() const
QtDartBindings_EXPORT void *c_QLine__p1(void *thisObj);
// QLine::p2() const
QtDartBindings_EXPORT void *c_QLine__p2(void *thisObj);
// QLine::setLine(int x1, int y1, int x2, int y2)
QtDartBindings_EXPORT void
c_QLine__setLine_int_int_int_int(void *thisObj, int x1, int y1, int x2, int y2);
// QLine::setP1(const QPoint & p1)
QtDartBindings_EXPORT void c_QLine__setP1_QPoint(void *thisObj, void *p1_);
// QLine::setP2(const QPoint & p2)
QtDartBindings_EXPORT void c_QLine__setP2_QPoint(void *thisObj, void *p2_);
// QLine::setPoints(const QPoint & p1, const QPoint & p2)
QtDartBindings_EXPORT void
c_QLine__setPoints_QPoint_QPoint(void *thisObj, void *p1_, void *p2_);
// QLine::toLineF() const
QtDartBindings_EXPORT void *c_QLine__toLineF(void *thisObj);
// QLine::translate(const QPoint & p)
QtDartBindings_EXPORT void c_QLine__translate_QPoint(void *thisObj, void *p_);
// QLine::translate(int dx, int dy)
QtDartBindings_EXPORT void c_QLine__translate_int_int(void *thisObj, int dx,
                                                      int dy);
// QLine::translated(const QPoint & p) const
QtDartBindings_EXPORT void *c_QLine__translated_QPoint(void *thisObj, void *p_);
// QLine::translated(int dx, int dy) const
QtDartBindings_EXPORT void *c_QLine__translated_int_int(void *thisObj, int dx,
                                                        int dy);
// QLine::x1() const
QtDartBindings_EXPORT int c_QLine__x1(void *thisObj);
// QLine::x2() const
QtDartBindings_EXPORT int c_QLine__x2(void *thisObj);
// QLine::y1() const
QtDartBindings_EXPORT int c_QLine__y1(void *thisObj);
// QLine::y2() const
QtDartBindings_EXPORT int c_QLine__y2(void *thisObj);
QtDartBindings_EXPORT void c_QLine__destructor(void *thisObj);
QtDartBindings_EXPORT void c_QLine_Finalizer(void *cppObj);
}
