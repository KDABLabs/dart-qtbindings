/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qbrush.h>
#include <qcolor.h>
#include <qpalette.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
class QPalette_wrapper : public ::QPalette {
public:
  ~QPalette_wrapper();
  QPalette_wrapper();
  QPalette_wrapper(const QBrush &windowText, const QBrush &button,
                   const QBrush &light, const QBrush &dark, const QBrush &mid,
                   const QBrush &text, const QBrush &bright_text,
                   const QBrush &base, const QBrush &window);
  QPalette_wrapper(const QColor &button);
  QPalette_wrapper(const QColor &button, const QColor &window);
  QPalette_wrapper(const QColor &windowText, const QColor &window,
                   const QColor &light, const QColor &dark, const QColor &mid,
                   const QColor &text, const QColor &base);
  const QBrush &alternateBase() const;
  const QBrush &base() const;
  const QBrush &brightText() const;
  const QBrush &brush(QPalette::ColorGroup cg, QPalette::ColorRole cr) const;
  const QBrush &brush(QPalette::ColorRole cr) const;
  const QBrush &button() const;
  const QBrush &buttonText() const;
  qint64 cacheKey() const;
  const QColor &color(QPalette::ColorGroup cg, QPalette::ColorRole cr) const;
  const QColor &color(QPalette::ColorRole cr) const;
  QPalette::ColorGroup currentColorGroup() const;
  const QBrush &dark() const;
  const QBrush &highlight() const;
  const QBrush &highlightedText() const;
  bool isBrushSet(QPalette::ColorGroup cg, QPalette::ColorRole cr) const;
  bool isCopyOf(const QPalette &p) const;
  bool isEqual(QPalette::ColorGroup cr1, QPalette::ColorGroup cr2) const;
  const QBrush &light() const;
  const QBrush &link() const;
  const QBrush &linkVisited() const;
  const QBrush &mid() const;
  const QBrush &midlight() const;
  const QBrush &placeholderText() const;
  QPalette resolve(const QPalette &other) const;
  void setBrush(QPalette::ColorGroup cg, QPalette::ColorRole cr,
                const QBrush &brush);
  void setBrush(QPalette::ColorRole cr, const QBrush &brush);
  void setColor(QPalette::ColorGroup cg, QPalette::ColorRole cr,
                const QColor &color);
  void setColor(QPalette::ColorRole cr, const QColor &color);
  void setColorGroup(QPalette::ColorGroup cr, const QBrush &windowText,
                     const QBrush &button, const QBrush &light,
                     const QBrush &dark, const QBrush &mid, const QBrush &text,
                     const QBrush &bright_text, const QBrush &base,
                     const QBrush &window);
  void setCurrentColorGroup(QPalette::ColorGroup cg);
  const QBrush &shadow() const;
  const QBrush &text() const;
  const QBrush &toolTipBase() const;
  const QBrush &toolTipText() const;
  const QBrush &window() const;
  const QBrush &windowText() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QPalette::QPalette()
QtDartBindings_EXPORT void *c_QPalette__constructor();
// QPalette::QPalette(const QBrush & windowText, const QBrush & button, const
// QBrush & light, const QBrush & dark, const QBrush & mid, const QBrush & text,
// const QBrush & bright_text, const QBrush & base, const QBrush & window)
QtDartBindings_EXPORT void *
c_QPalette__constructor_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush(
    void *windowText_, void *button_, void *light_, void *dark_, void *mid_,
    void *text_, void *bright_text_, void *base_, void *window_);
// QPalette::QPalette(const QColor & button)
QtDartBindings_EXPORT void *c_QPalette__constructor_QColor(void *button_);
// QPalette::QPalette(const QColor & button, const QColor & window)
QtDartBindings_EXPORT void *
c_QPalette__constructor_QColor_QColor(void *button_, void *window_);
// QPalette::QPalette(const QColor & windowText, const QColor & window, const
// QColor & light, const QColor & dark, const QColor & mid, const QColor & text,
// const QColor & base)
QtDartBindings_EXPORT void *
c_QPalette__constructor_QColor_QColor_QColor_QColor_QColor_QColor_QColor(
    void *windowText_, void *window_, void *light_, void *dark_, void *mid_,
    void *text_, void *base_);
// QPalette::alternateBase() const
QtDartBindings_EXPORT void *c_QPalette__alternateBase(void *thisObj);
// QPalette::base() const
QtDartBindings_EXPORT void *c_QPalette__base(void *thisObj);
// QPalette::brightText() const
QtDartBindings_EXPORT void *c_QPalette__brightText(void *thisObj);
// QPalette::brush(QPalette::ColorGroup cg, QPalette::ColorRole cr) const
QtDartBindings_EXPORT void *
c_QPalette__brush_ColorGroup_ColorRole(void *thisObj, int cg, int cr);
// QPalette::brush(QPalette::ColorRole cr) const
QtDartBindings_EXPORT void *c_QPalette__brush_ColorRole(void *thisObj, int cr);
// QPalette::button() const
QtDartBindings_EXPORT void *c_QPalette__button(void *thisObj);
// QPalette::buttonText() const
QtDartBindings_EXPORT void *c_QPalette__buttonText(void *thisObj);
// QPalette::cacheKey() const
QtDartBindings_EXPORT qint64 c_QPalette__cacheKey(void *thisObj);
// QPalette::color(QPalette::ColorGroup cg, QPalette::ColorRole cr) const
QtDartBindings_EXPORT void *
c_QPalette__color_ColorGroup_ColorRole(void *thisObj, int cg, int cr);
// QPalette::color(QPalette::ColorRole cr) const
QtDartBindings_EXPORT void *c_QPalette__color_ColorRole(void *thisObj, int cr);
// QPalette::currentColorGroup() const
QtDartBindings_EXPORT int c_QPalette__currentColorGroup(void *thisObj);
// QPalette::dark() const
QtDartBindings_EXPORT void *c_QPalette__dark(void *thisObj);
// QPalette::highlight() const
QtDartBindings_EXPORT void *c_QPalette__highlight(void *thisObj);
// QPalette::highlightedText() const
QtDartBindings_EXPORT void *c_QPalette__highlightedText(void *thisObj);
// QPalette::isBrushSet(QPalette::ColorGroup cg, QPalette::ColorRole cr) const
QtDartBindings_EXPORT bool
c_QPalette__isBrushSet_ColorGroup_ColorRole(void *thisObj, int cg, int cr);
// QPalette::isCopyOf(const QPalette & p) const
QtDartBindings_EXPORT bool c_QPalette__isCopyOf_QPalette(void *thisObj,
                                                         void *p_);
// QPalette::isEqual(QPalette::ColorGroup cr1, QPalette::ColorGroup cr2) const
QtDartBindings_EXPORT bool
c_QPalette__isEqual_ColorGroup_ColorGroup(void *thisObj, int cr1, int cr2);
// QPalette::light() const
QtDartBindings_EXPORT void *c_QPalette__light(void *thisObj);
// QPalette::link() const
QtDartBindings_EXPORT void *c_QPalette__link(void *thisObj);
// QPalette::linkVisited() const
QtDartBindings_EXPORT void *c_QPalette__linkVisited(void *thisObj);
// QPalette::mid() const
QtDartBindings_EXPORT void *c_QPalette__mid(void *thisObj);
// QPalette::midlight() const
QtDartBindings_EXPORT void *c_QPalette__midlight(void *thisObj);
// QPalette::placeholderText() const
QtDartBindings_EXPORT void *c_QPalette__placeholderText(void *thisObj);
// QPalette::resolve(const QPalette & other) const
QtDartBindings_EXPORT void *c_QPalette__resolve_QPalette(void *thisObj,
                                                         void *other_);
// QPalette::setBrush(QPalette::ColorGroup cg, QPalette::ColorRole cr, const
// QBrush & brush)
QtDartBindings_EXPORT void
c_QPalette__setBrush_ColorGroup_ColorRole_QBrush(void *thisObj, int cg, int cr,
                                                 void *brush_);
// QPalette::setBrush(QPalette::ColorRole cr, const QBrush & brush)
QtDartBindings_EXPORT void
c_QPalette__setBrush_ColorRole_QBrush(void *thisObj, int cr, void *brush_);
// QPalette::setColor(QPalette::ColorGroup cg, QPalette::ColorRole cr, const
// QColor & color)
QtDartBindings_EXPORT void
c_QPalette__setColor_ColorGroup_ColorRole_QColor(void *thisObj, int cg, int cr,
                                                 void *color_);
// QPalette::setColor(QPalette::ColorRole cr, const QColor & color)
QtDartBindings_EXPORT void
c_QPalette__setColor_ColorRole_QColor(void *thisObj, int cr, void *color_);
// QPalette::setColorGroup(QPalette::ColorGroup cr, const QBrush & windowText,
// const QBrush & button, const QBrush & light, const QBrush & dark, const
// QBrush & mid, const QBrush & text, const QBrush & bright_text, const QBrush &
// base, const QBrush & window)
QtDartBindings_EXPORT void
c_QPalette__setColorGroup_ColorGroup_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush(
    void *thisObj, int cr, void *windowText_, void *button_, void *light_,
    void *dark_, void *mid_, void *text_, void *bright_text_, void *base_,
    void *window_);
// QPalette::setCurrentColorGroup(QPalette::ColorGroup cg)
QtDartBindings_EXPORT void
c_QPalette__setCurrentColorGroup_ColorGroup(void *thisObj, int cg);
// QPalette::shadow() const
QtDartBindings_EXPORT void *c_QPalette__shadow(void *thisObj);
// QPalette::text() const
QtDartBindings_EXPORT void *c_QPalette__text(void *thisObj);
// QPalette::toolTipBase() const
QtDartBindings_EXPORT void *c_QPalette__toolTipBase(void *thisObj);
// QPalette::toolTipText() const
QtDartBindings_EXPORT void *c_QPalette__toolTipText(void *thisObj);
// QPalette::window() const
QtDartBindings_EXPORT void *c_QPalette__window(void *thisObj);
// QPalette::windowText() const
QtDartBindings_EXPORT void *c_QPalette__windowText(void *thisObj);
QtDartBindings_EXPORT void c_QPalette__destructor(void *thisObj);
QtDartBindings_EXPORT void c_QPalette_Finalizer(void *cppObj);
}
