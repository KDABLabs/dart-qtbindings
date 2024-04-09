/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qbrush.h>
#include <qcolor.h>
#include <qlist.h>
#include <qpen.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
class QPen_wrapper : public ::QPen {
public:
  ~QPen_wrapper();
  QPen_wrapper();
  QPen_wrapper(const QBrush &brush, qreal width);
  QPen_wrapper(const QColor &color);
  QBrush brush() const;
  QColor color() const;
  qreal dashOffset() const;
  QList<qreal> dashPattern() const;
  bool isCosmetic() const;
  bool isDetached();
  bool isSolid() const;
  qreal miterLimit() const;
  void setBrush(const QBrush &brush);
  void setColor(const QColor &color);
  void setCosmetic(bool cosmetic);
  void setDashOffset(qreal doffset);
  void setDashPattern(const QList<qreal> &pattern);
  void setMiterLimit(qreal limit);
  void setWidth(int width);
  void setWidthF(qreal width);
  int width() const;
  qreal widthF() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QPen::QPen()
QtDartBindings_EXPORT void *c_QPen__constructor();
// QPen::QPen(const QBrush & brush, qreal width)
QtDartBindings_EXPORT void *c_QPen__constructor_QBrush_qreal(void *brush_,
                                                             qreal width);
// QPen::QPen(const QColor & color)
QtDartBindings_EXPORT void *c_QPen__constructor_QColor(void *color_);
// QPen::brush() const
QtDartBindings_EXPORT void *c_QPen__brush(void *thisObj);
// QPen::color() const
QtDartBindings_EXPORT void *c_QPen__color(void *thisObj);
// QPen::dashOffset() const
QtDartBindings_EXPORT qreal c_QPen__dashOffset(void *thisObj);
// QPen::dashPattern() const
QtDartBindings_EXPORT void *c_QPen__dashPattern(void *thisObj);
// QPen::isCosmetic() const
QtDartBindings_EXPORT bool c_QPen__isCosmetic(void *thisObj);
// QPen::isDetached()
QtDartBindings_EXPORT bool c_QPen__isDetached(void *thisObj);
// QPen::isSolid() const
QtDartBindings_EXPORT bool c_QPen__isSolid(void *thisObj);
// QPen::miterLimit() const
QtDartBindings_EXPORT qreal c_QPen__miterLimit(void *thisObj);
// QPen::setBrush(const QBrush & brush)
QtDartBindings_EXPORT void c_QPen__setBrush_QBrush(void *thisObj, void *brush_);
// QPen::setColor(const QColor & color)
QtDartBindings_EXPORT void c_QPen__setColor_QColor(void *thisObj, void *color_);
// QPen::setCosmetic(bool cosmetic)
QtDartBindings_EXPORT void c_QPen__setCosmetic_bool(void *thisObj,
                                                    bool cosmetic);
// QPen::setDashOffset(qreal doffset)
QtDartBindings_EXPORT void c_QPen__setDashOffset_qreal(void *thisObj,
                                                       qreal doffset);
// QPen::setDashPattern(const QList<qreal > & pattern)
QtDartBindings_EXPORT void c_QPen__setDashPattern_QList_qreal(void *thisObj,
                                                              void *pattern_);
// QPen::setMiterLimit(qreal limit)
QtDartBindings_EXPORT void c_QPen__setMiterLimit_qreal(void *thisObj,
                                                       qreal limit);
// QPen::setWidth(int width)
QtDartBindings_EXPORT void c_QPen__setWidth_int(void *thisObj, int width);
// QPen::setWidthF(qreal width)
QtDartBindings_EXPORT void c_QPen__setWidthF_qreal(void *thisObj, qreal width);
// QPen::width() const
QtDartBindings_EXPORT int c_QPen__width(void *thisObj);
// QPen::widthF() const
QtDartBindings_EXPORT qreal c_QPen__widthF(void *thisObj);
QtDartBindings_EXPORT void c_QPen__destructor(void *thisObj);
QtDartBindings_EXPORT void c_QPen_Finalizer(void *cppObj);
}
