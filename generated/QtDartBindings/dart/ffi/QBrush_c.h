/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qbrush.h>
#include <qcolor.h>
#include <qpixmap.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
class QBrush_wrapper : public ::QBrush {
public:
  ~QBrush_wrapper();
  QBrush_wrapper();
  QBrush_wrapper(const QColor &color);
  QBrush_wrapper(const QColor &color, const QPixmap &pixmap);
  QBrush_wrapper(const QPixmap &pixmap);
  const QColor &color() const;
  bool isDetached() const;
  bool isOpaque() const;
  void setColor(const QColor &color);
  void setTexture(const QPixmap &pixmap);
  QPixmap texture() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QBrush::QBrush()
QtDartBindings_EXPORT void *c_QBrush__constructor();
// QBrush::QBrush(const QColor & color)
QtDartBindings_EXPORT void *c_QBrush__constructor_QColor(void *color_);
// QBrush::QBrush(const QColor & color, const QPixmap & pixmap)
QtDartBindings_EXPORT void *c_QBrush__constructor_QColor_QPixmap(void *color_,
                                                                 void *pixmap_);
// QBrush::QBrush(const QPixmap & pixmap)
QtDartBindings_EXPORT void *c_QBrush__constructor_QPixmap(void *pixmap_);
// QBrush::color() const
QtDartBindings_EXPORT void *c_QBrush__color(void *thisObj);
// QBrush::isDetached() const
QtDartBindings_EXPORT bool c_QBrush__isDetached(void *thisObj);
// QBrush::isOpaque() const
QtDartBindings_EXPORT bool c_QBrush__isOpaque(void *thisObj);
// QBrush::setColor(const QColor & color)
QtDartBindings_EXPORT void c_QBrush__setColor_QColor(void *thisObj,
                                                     void *color_);
// QBrush::setTexture(const QPixmap & pixmap)
QtDartBindings_EXPORT void c_QBrush__setTexture_QPixmap(void *thisObj,
                                                        void *pixmap_);
// QBrush::texture() const
QtDartBindings_EXPORT void *c_QBrush__texture(void *thisObj);
QtDartBindings_EXPORT void c_QBrush__destructor(void *thisObj);
QtDartBindings_EXPORT void c_QBrush_Finalizer(void *cppObj);
}
