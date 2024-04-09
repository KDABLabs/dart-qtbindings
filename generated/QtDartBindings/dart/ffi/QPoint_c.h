/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qpoint.h>

namespace QtDartBindings_wrappersNS {
class QPoint_wrapper : public ::QPoint {
public:
  ~QPoint_wrapper();
  QPoint_wrapper();
  QPoint_wrapper(int xpos, int ypos);
  static int dotProduct(const QPoint &p1, const QPoint &p2);
  bool isNull() const;
  int manhattanLength() const;
  void setX(int x);
  void setY(int y);
  QPointF toPointF() const;
  QPoint transposed() const;
  int x() const;
  int y() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QPoint::QPoint()
QtDartBindings_EXPORT void *c_QPoint__constructor();
// QPoint::QPoint(int xpos, int ypos)
QtDartBindings_EXPORT void *c_QPoint__constructor_int_int(int xpos, int ypos);
// QPoint::dotProduct(const QPoint & p1, const QPoint & p2)
QtDartBindings_EXPORT int c_static_QPoint__dotProduct_QPoint_QPoint(void *p1_,
                                                                    void *p2_);
// QPoint::isNull() const
QtDartBindings_EXPORT bool c_QPoint__isNull(void *thisObj);
// QPoint::manhattanLength() const
QtDartBindings_EXPORT int c_QPoint__manhattanLength(void *thisObj);
// QPoint::setX(int x)
QtDartBindings_EXPORT void c_QPoint__setX_int(void *thisObj, int x);
// QPoint::setY(int y)
QtDartBindings_EXPORT void c_QPoint__setY_int(void *thisObj, int y);
// QPoint::toPointF() const
QtDartBindings_EXPORT void *c_QPoint__toPointF(void *thisObj);
// QPoint::transposed() const
QtDartBindings_EXPORT void *c_QPoint__transposed(void *thisObj);
// QPoint::x() const
QtDartBindings_EXPORT int c_QPoint__x(void *thisObj);
// QPoint::y() const
QtDartBindings_EXPORT int c_QPoint__y(void *thisObj);
QtDartBindings_EXPORT void c_QPoint__destructor(void *thisObj);
QtDartBindings_EXPORT void c_QPoint_Finalizer(void *cppObj);
}
