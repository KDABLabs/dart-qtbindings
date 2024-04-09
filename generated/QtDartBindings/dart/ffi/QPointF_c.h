/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qpoint.h>

namespace QtDartBindings_wrappersNS {
class QPointF_wrapper : public ::QPointF {
public:
  ~QPointF_wrapper();
  QPointF_wrapper();
  QPointF_wrapper(const QPoint &p);
  QPointF_wrapper(qreal xpos, qreal ypos);
  static qreal dotProduct(const QPointF &p1, const QPointF &p2);
  bool isNull() const;
  qreal manhattanLength() const;
  void setX(qreal x);
  void setY(qreal y);
  QPoint toPoint() const;
  QPointF transposed() const;
  qreal x() const;
  qreal y() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QPointF::QPointF()
QtDartBindings_EXPORT void *c_QPointF__constructor();
// QPointF::QPointF(const QPoint & p)
QtDartBindings_EXPORT void *c_QPointF__constructor_QPoint(void *p_);
// QPointF::QPointF(qreal xpos, qreal ypos)
QtDartBindings_EXPORT void *c_QPointF__constructor_qreal_qreal(qreal xpos,
                                                               qreal ypos);
// QPointF::dotProduct(const QPointF & p1, const QPointF & p2)
QtDartBindings_EXPORT qreal
c_static_QPointF__dotProduct_QPointF_QPointF(void *p1_, void *p2_);
// QPointF::isNull() const
QtDartBindings_EXPORT bool c_QPointF__isNull(void *thisObj);
// QPointF::manhattanLength() const
QtDartBindings_EXPORT qreal c_QPointF__manhattanLength(void *thisObj);
// QPointF::setX(qreal x)
QtDartBindings_EXPORT void c_QPointF__setX_qreal(void *thisObj, qreal x);
// QPointF::setY(qreal y)
QtDartBindings_EXPORT void c_QPointF__setY_qreal(void *thisObj, qreal y);
// QPointF::toPoint() const
QtDartBindings_EXPORT void *c_QPointF__toPoint(void *thisObj);
// QPointF::transposed() const
QtDartBindings_EXPORT void *c_QPointF__transposed(void *thisObj);
// QPointF::x() const
QtDartBindings_EXPORT qreal c_QPointF__x(void *thisObj);
// QPointF::y() const
QtDartBindings_EXPORT qreal c_QPointF__y(void *thisObj);
QtDartBindings_EXPORT void c_QPointF__destructor(void *thisObj);
QtDartBindings_EXPORT void c_QPointF_Finalizer(void *cppObj);
}
