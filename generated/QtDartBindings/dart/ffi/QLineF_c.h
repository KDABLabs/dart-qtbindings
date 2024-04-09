/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qline.h>
#include <qpoint.h>

namespace QtDartBindings_wrappersNS {
class QLineF_wrapper : public ::QLineF {
public:
  ~QLineF_wrapper();
  QLineF_wrapper();
  QLineF_wrapper(const QLine &line);
  QLineF_wrapper(const QPointF &pt1, const QPointF &pt2);
  QLineF_wrapper(qreal x1, qreal y1, qreal x2, qreal y2);
  qreal angle() const;
  qreal angleTo(const QLineF &l) const;
  QPointF center() const;
  qreal dx() const;
  qreal dy() const;
  static QLineF fromPolar(qreal length, qreal angle);
  bool isNull() const;
  qreal length() const;
  QLineF normalVector() const;
  QPointF p1() const;
  QPointF p2() const;
  QPointF pointAt(qreal t) const;
  void setAngle(qreal angle);
  void setLength(qreal len);
  void setLine(qreal x1, qreal y1, qreal x2, qreal y2);
  void setP1(const QPointF &p1);
  void setP2(const QPointF &p2);
  void setPoints(const QPointF &p1, const QPointF &p2);
  QLine toLine() const;
  void translate(const QPointF &p);
  void translate(qreal dx, qreal dy);
  QLineF translated(const QPointF &p) const;
  QLineF translated(qreal dx, qreal dy) const;
  QLineF unitVector() const;
  qreal x1() const;
  qreal x2() const;
  qreal y1() const;
  qreal y2() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QLineF::QLineF()
QtDartBindings_EXPORT void *c_QLineF__constructor();
// QLineF::QLineF(const QLine & line)
QtDartBindings_EXPORT void *c_QLineF__constructor_QLine(void *line_);
// QLineF::QLineF(const QPointF & pt1, const QPointF & pt2)
QtDartBindings_EXPORT void *c_QLineF__constructor_QPointF_QPointF(void *pt1_,
                                                                  void *pt2_);
// QLineF::QLineF(qreal x1, qreal y1, qreal x2, qreal y2)
QtDartBindings_EXPORT void *
c_QLineF__constructor_qreal_qreal_qreal_qreal(qreal x1, qreal y1, qreal x2,
                                              qreal y2);
// QLineF::angle() const
QtDartBindings_EXPORT qreal c_QLineF__angle(void *thisObj);
// QLineF::angleTo(const QLineF & l) const
QtDartBindings_EXPORT qreal c_QLineF__angleTo_QLineF(void *thisObj, void *l_);
// QLineF::center() const
QtDartBindings_EXPORT void *c_QLineF__center(void *thisObj);
// QLineF::dx() const
QtDartBindings_EXPORT qreal c_QLineF__dx(void *thisObj);
// QLineF::dy() const
QtDartBindings_EXPORT qreal c_QLineF__dy(void *thisObj);
// QLineF::fromPolar(qreal length, qreal angle)
QtDartBindings_EXPORT void *c_static_QLineF__fromPolar_qreal_qreal(qreal length,
                                                                   qreal angle);
// QLineF::isNull() const
QtDartBindings_EXPORT bool c_QLineF__isNull(void *thisObj);
// QLineF::length() const
QtDartBindings_EXPORT qreal c_QLineF__length(void *thisObj);
// QLineF::normalVector() const
QtDartBindings_EXPORT void *c_QLineF__normalVector(void *thisObj);
// QLineF::p1() const
QtDartBindings_EXPORT void *c_QLineF__p1(void *thisObj);
// QLineF::p2() const
QtDartBindings_EXPORT void *c_QLineF__p2(void *thisObj);
// QLineF::pointAt(qreal t) const
QtDartBindings_EXPORT void *c_QLineF__pointAt_qreal(void *thisObj, qreal t);
// QLineF::setAngle(qreal angle)
QtDartBindings_EXPORT void c_QLineF__setAngle_qreal(void *thisObj, qreal angle);
// QLineF::setLength(qreal len)
QtDartBindings_EXPORT void c_QLineF__setLength_qreal(void *thisObj, qreal len);
// QLineF::setLine(qreal x1, qreal y1, qreal x2, qreal y2)
QtDartBindings_EXPORT void
c_QLineF__setLine_qreal_qreal_qreal_qreal(void *thisObj, qreal x1, qreal y1,
                                          qreal x2, qreal y2);
// QLineF::setP1(const QPointF & p1)
QtDartBindings_EXPORT void c_QLineF__setP1_QPointF(void *thisObj, void *p1_);
// QLineF::setP2(const QPointF & p2)
QtDartBindings_EXPORT void c_QLineF__setP2_QPointF(void *thisObj, void *p2_);
// QLineF::setPoints(const QPointF & p1, const QPointF & p2)
QtDartBindings_EXPORT void
c_QLineF__setPoints_QPointF_QPointF(void *thisObj, void *p1_, void *p2_);
// QLineF::toLine() const
QtDartBindings_EXPORT void *c_QLineF__toLine(void *thisObj);
// QLineF::translate(const QPointF & p)
QtDartBindings_EXPORT void c_QLineF__translate_QPointF(void *thisObj, void *p_);
// QLineF::translate(qreal dx, qreal dy)
QtDartBindings_EXPORT void c_QLineF__translate_qreal_qreal(void *thisObj,
                                                           qreal dx, qreal dy);
// QLineF::translated(const QPointF & p) const
QtDartBindings_EXPORT void *c_QLineF__translated_QPointF(void *thisObj,
                                                         void *p_);
// QLineF::translated(qreal dx, qreal dy) const
QtDartBindings_EXPORT void *
c_QLineF__translated_qreal_qreal(void *thisObj, qreal dx, qreal dy);
// QLineF::unitVector() const
QtDartBindings_EXPORT void *c_QLineF__unitVector(void *thisObj);
// QLineF::x1() const
QtDartBindings_EXPORT qreal c_QLineF__x1(void *thisObj);
// QLineF::x2() const
QtDartBindings_EXPORT qreal c_QLineF__x2(void *thisObj);
// QLineF::y1() const
QtDartBindings_EXPORT qreal c_QLineF__y1(void *thisObj);
// QLineF::y2() const
QtDartBindings_EXPORT qreal c_QLineF__y2(void *thisObj);
QtDartBindings_EXPORT void c_QLineF__destructor(void *thisObj);
QtDartBindings_EXPORT void c_QLineF_Finalizer(void *cppObj);
}
