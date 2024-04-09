/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QPalette_c.h"

#include <iostream>

#include <cassert>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
QPalette_wrapper::QPalette_wrapper() : ::QPalette() {}
QPalette_wrapper::QPalette_wrapper(const QBrush &windowText,
                                   const QBrush &button, const QBrush &light,
                                   const QBrush &dark, const QBrush &mid,
                                   const QBrush &text,
                                   const QBrush &bright_text,
                                   const QBrush &base, const QBrush &window)
    : ::QPalette(windowText, button, light, dark, mid, text, bright_text, base,
                 window) {}
QPalette_wrapper::QPalette_wrapper(const QColor &button) : ::QPalette(button) {}
QPalette_wrapper::QPalette_wrapper(const QColor &button, const QColor &window)
    : ::QPalette(button, window) {}
QPalette_wrapper::QPalette_wrapper(const QColor &windowText,
                                   const QColor &window, const QColor &light,
                                   const QColor &dark, const QColor &mid,
                                   const QColor &text, const QColor &base)
    : ::QPalette(windowText, window, light, dark, mid, text, base) {}
const QBrush &QPalette_wrapper::alternateBase() const {
  return ::QPalette::alternateBase();
}
const QBrush &QPalette_wrapper::base() const { return ::QPalette::base(); }
const QBrush &QPalette_wrapper::brightText() const {
  return ::QPalette::brightText();
}
const QBrush &QPalette_wrapper::brush(QPalette::ColorGroup cg,
                                      QPalette::ColorRole cr) const {
  return ::QPalette::brush(cg, cr);
}
const QBrush &QPalette_wrapper::brush(QPalette::ColorRole cr) const {
  return ::QPalette::brush(cr);
}
const QBrush &QPalette_wrapper::button() const { return ::QPalette::button(); }
const QBrush &QPalette_wrapper::buttonText() const {
  return ::QPalette::buttonText();
}
qint64 QPalette_wrapper::cacheKey() const { return ::QPalette::cacheKey(); }
const QColor &QPalette_wrapper::color(QPalette::ColorGroup cg,
                                      QPalette::ColorRole cr) const {
  return ::QPalette::color(cg, cr);
}
const QColor &QPalette_wrapper::color(QPalette::ColorRole cr) const {
  return ::QPalette::color(cr);
}
QPalette::ColorGroup QPalette_wrapper::currentColorGroup() const {
  return ::QPalette::currentColorGroup();
}
const QBrush &QPalette_wrapper::dark() const { return ::QPalette::dark(); }
const QBrush &QPalette_wrapper::highlight() const {
  return ::QPalette::highlight();
}
const QBrush &QPalette_wrapper::highlightedText() const {
  return ::QPalette::highlightedText();
}
bool QPalette_wrapper::isBrushSet(QPalette::ColorGroup cg,
                                  QPalette::ColorRole cr) const {
  return ::QPalette::isBrushSet(cg, cr);
}
bool QPalette_wrapper::isCopyOf(const QPalette &p) const {
  return ::QPalette::isCopyOf(p);
}
bool QPalette_wrapper::isEqual(QPalette::ColorGroup cr1,
                               QPalette::ColorGroup cr2) const {
  return ::QPalette::isEqual(cr1, cr2);
}
const QBrush &QPalette_wrapper::light() const { return ::QPalette::light(); }
const QBrush &QPalette_wrapper::link() const { return ::QPalette::link(); }
const QBrush &QPalette_wrapper::linkVisited() const {
  return ::QPalette::linkVisited();
}
const QBrush &QPalette_wrapper::mid() const { return ::QPalette::mid(); }
const QBrush &QPalette_wrapper::midlight() const {
  return ::QPalette::midlight();
}
const QBrush &QPalette_wrapper::placeholderText() const {
  return ::QPalette::placeholderText();
}
QPalette QPalette_wrapper::resolve(const QPalette &other) const {
  return ::QPalette::resolve(other);
}
void QPalette_wrapper::setBrush(QPalette::ColorGroup cg, QPalette::ColorRole cr,
                                const QBrush &brush) {
  ::QPalette::setBrush(cg, cr, brush);
}
void QPalette_wrapper::setBrush(QPalette::ColorRole cr, const QBrush &brush) {
  ::QPalette::setBrush(cr, brush);
}
void QPalette_wrapper::setColor(QPalette::ColorGroup cg, QPalette::ColorRole cr,
                                const QColor &color) {
  ::QPalette::setColor(cg, cr, color);
}
void QPalette_wrapper::setColor(QPalette::ColorRole cr, const QColor &color) {
  ::QPalette::setColor(cr, color);
}
void QPalette_wrapper::setColorGroup(QPalette::ColorGroup cr,
                                     const QBrush &windowText,
                                     const QBrush &button, const QBrush &light,
                                     const QBrush &dark, const QBrush &mid,
                                     const QBrush &text,
                                     const QBrush &bright_text,
                                     const QBrush &base, const QBrush &window) {
  ::QPalette::setColorGroup(cr, windowText, button, light, dark, mid, text,
                            bright_text, base, window);
}
void QPalette_wrapper::setCurrentColorGroup(QPalette::ColorGroup cg) {
  ::QPalette::setCurrentColorGroup(cg);
}
const QBrush &QPalette_wrapper::shadow() const { return ::QPalette::shadow(); }
const QBrush &QPalette_wrapper::text() const { return ::QPalette::text(); }
const QBrush &QPalette_wrapper::toolTipBase() const {
  return ::QPalette::toolTipBase();
}
const QBrush &QPalette_wrapper::toolTipText() const {
  return ::QPalette::toolTipText();
}
const QBrush &QPalette_wrapper::window() const { return ::QPalette::window(); }
const QBrush &QPalette_wrapper::windowText() const {
  return ::QPalette::windowText();
}
QPalette_wrapper::~QPalette_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QPalette *fromPtr(void *ptr) {
  return reinterpret_cast<QPalette *>(ptr);
}
static QtDartBindings_wrappersNS::QPalette_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QPalette_wrapper *>(ptr);
}
extern "C" {
void c_QPalette_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QPalette_wrapper *>(
      cppObj);
}
void *c_QPalette__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QPalette_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *
c_QPalette__constructor_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush(
    void *windowText_, void *button_, void *light_, void *dark_, void *mid_,
    void *text_, void *bright_text_, void *base_, void *window_) {
  assert(windowText_);
  auto &windowText = *reinterpret_cast<QBrush *>(windowText_);
  assert(button_);
  auto &button = *reinterpret_cast<QBrush *>(button_);
  assert(light_);
  auto &light = *reinterpret_cast<QBrush *>(light_);
  assert(dark_);
  auto &dark = *reinterpret_cast<QBrush *>(dark_);
  assert(mid_);
  auto &mid = *reinterpret_cast<QBrush *>(mid_);
  assert(text_);
  auto &text = *reinterpret_cast<QBrush *>(text_);
  assert(bright_text_);
  auto &bright_text = *reinterpret_cast<QBrush *>(bright_text_);
  assert(base_);
  auto &base = *reinterpret_cast<QBrush *>(base_);
  assert(window_);
  auto &window = *reinterpret_cast<QBrush *>(window_);
  auto ptr = new QtDartBindings_wrappersNS::QPalette_wrapper(
      windowText, button, light, dark, mid, text, bright_text, base, window);
  return reinterpret_cast<void *>(ptr);
}
void *c_QPalette__constructor_QColor(void *button_) {
  assert(button_);
  auto &button = *reinterpret_cast<QColor *>(button_);
  auto ptr = new QtDartBindings_wrappersNS::QPalette_wrapper(button);
  return reinterpret_cast<void *>(ptr);
}
void *c_QPalette__constructor_QColor_QColor(void *button_, void *window_) {
  assert(button_);
  auto &button = *reinterpret_cast<QColor *>(button_);
  assert(window_);
  auto &window = *reinterpret_cast<QColor *>(window_);
  auto ptr = new QtDartBindings_wrappersNS::QPalette_wrapper(button, window);
  return reinterpret_cast<void *>(ptr);
}
void *c_QPalette__constructor_QColor_QColor_QColor_QColor_QColor_QColor_QColor(
    void *windowText_, void *window_, void *light_, void *dark_, void *mid_,
    void *text_, void *base_) {
  assert(windowText_);
  auto &windowText = *reinterpret_cast<QColor *>(windowText_);
  assert(window_);
  auto &window = *reinterpret_cast<QColor *>(window_);
  assert(light_);
  auto &light = *reinterpret_cast<QColor *>(light_);
  assert(dark_);
  auto &dark = *reinterpret_cast<QColor *>(dark_);
  assert(mid_);
  auto &mid = *reinterpret_cast<QColor *>(mid_);
  assert(text_);
  auto &text = *reinterpret_cast<QColor *>(text_);
  assert(base_);
  auto &base = *reinterpret_cast<QColor *>(base_);
  auto ptr = new QtDartBindings_wrappersNS::QPalette_wrapper(
      windowText, window, light, dark, mid, text, base);
  return reinterpret_cast<void *>(ptr);
}
// alternateBase() const
void *c_QPalette__alternateBase(void *thisObj) {
  const auto &result = const_cast<void *>(
      static_cast<const void *>(&fromPtr(thisObj)->alternateBase()));
  return result;
}
// base() const
void *c_QPalette__base(void *thisObj) {
  const auto &result =
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->base()));
  return result;
}
// brightText() const
void *c_QPalette__brightText(void *thisObj) {
  const auto &result = const_cast<void *>(
      static_cast<const void *>(&fromPtr(thisObj)->brightText()));
  return result;
}
// brush(QPalette::ColorGroup cg, QPalette::ColorRole cr) const
void *c_QPalette__brush_ColorGroup_ColorRole(void *thisObj, int cg, int cr) {
  const auto &result = const_cast<void *>(static_cast<const void *>(
      &fromPtr(thisObj)->brush(static_cast<QPalette::ColorGroup>(cg),
                               static_cast<QPalette::ColorRole>(cr))));
  return result;
}
// brush(QPalette::ColorRole cr) const
void *c_QPalette__brush_ColorRole(void *thisObj, int cr) {
  const auto &result = const_cast<void *>(static_cast<const void *>(
      &fromPtr(thisObj)->brush(static_cast<QPalette::ColorRole>(cr))));
  return result;
}
// button() const
void *c_QPalette__button(void *thisObj) {
  const auto &result = const_cast<void *>(
      static_cast<const void *>(&fromPtr(thisObj)->button()));
  return result;
}
// buttonText() const
void *c_QPalette__buttonText(void *thisObj) {
  const auto &result = const_cast<void *>(
      static_cast<const void *>(&fromPtr(thisObj)->buttonText()));
  return result;
}
// cacheKey() const
qint64 c_QPalette__cacheKey(void *thisObj) {
  const auto &result = fromPtr(thisObj)->cacheKey();
  return result;
}
// color(QPalette::ColorGroup cg, QPalette::ColorRole cr) const
void *c_QPalette__color_ColorGroup_ColorRole(void *thisObj, int cg, int cr) {
  const auto &result = const_cast<void *>(static_cast<const void *>(
      &fromPtr(thisObj)->color(static_cast<QPalette::ColorGroup>(cg),
                               static_cast<QPalette::ColorRole>(cr))));
  return result;
}
// color(QPalette::ColorRole cr) const
void *c_QPalette__color_ColorRole(void *thisObj, int cr) {
  const auto &result = const_cast<void *>(static_cast<const void *>(
      &fromPtr(thisObj)->color(static_cast<QPalette::ColorRole>(cr))));
  return result;
}
// currentColorGroup() const
int c_QPalette__currentColorGroup(void *thisObj) {
  const auto &result = int(fromPtr(thisObj)->currentColorGroup());
  return result;
}
// dark() const
void *c_QPalette__dark(void *thisObj) {
  const auto &result =
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->dark()));
  return result;
}
// highlight() const
void *c_QPalette__highlight(void *thisObj) {
  const auto &result = const_cast<void *>(
      static_cast<const void *>(&fromPtr(thisObj)->highlight()));
  return result;
}
// highlightedText() const
void *c_QPalette__highlightedText(void *thisObj) {
  const auto &result = const_cast<void *>(
      static_cast<const void *>(&fromPtr(thisObj)->highlightedText()));
  return result;
}
// isBrushSet(QPalette::ColorGroup cg, QPalette::ColorRole cr) const
bool c_QPalette__isBrushSet_ColorGroup_ColorRole(void *thisObj, int cg,
                                                 int cr) {
  const auto &result =
      fromPtr(thisObj)->isBrushSet(static_cast<QPalette::ColorGroup>(cg),
                                   static_cast<QPalette::ColorRole>(cr));
  return result;
}
// isCopyOf(const QPalette & p) const
bool c_QPalette__isCopyOf_QPalette(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPalette *>(p_);
  const auto &result = fromPtr(thisObj)->isCopyOf(p);
  return result;
}
// isEqual(QPalette::ColorGroup cr1, QPalette::ColorGroup cr2) const
bool c_QPalette__isEqual_ColorGroup_ColorGroup(void *thisObj, int cr1,
                                               int cr2) {
  const auto &result =
      fromPtr(thisObj)->isEqual(static_cast<QPalette::ColorGroup>(cr1),
                                static_cast<QPalette::ColorGroup>(cr2));
  return result;
}
// light() const
void *c_QPalette__light(void *thisObj) {
  const auto &result =
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->light()));
  return result;
}
// link() const
void *c_QPalette__link(void *thisObj) {
  const auto &result =
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->link()));
  return result;
}
// linkVisited() const
void *c_QPalette__linkVisited(void *thisObj) {
  const auto &result = const_cast<void *>(
      static_cast<const void *>(&fromPtr(thisObj)->linkVisited()));
  return result;
}
// mid() const
void *c_QPalette__mid(void *thisObj) {
  const auto &result =
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->mid()));
  return result;
}
// midlight() const
void *c_QPalette__midlight(void *thisObj) {
  const auto &result = const_cast<void *>(
      static_cast<const void *>(&fromPtr(thisObj)->midlight()));
  return result;
}
// placeholderText() const
void *c_QPalette__placeholderText(void *thisObj) {
  const auto &result = const_cast<void *>(
      static_cast<const void *>(&fromPtr(thisObj)->placeholderText()));
  return result;
}
// resolve(const QPalette & other) const
void *c_QPalette__resolve_QPalette(void *thisObj, void *other_) {
  assert(other_);
  auto &other = *reinterpret_cast<QPalette *>(other_);
  const auto &result =
      new Dartagnan::ValueWrapper<QPalette>{fromPtr(thisObj)->resolve(other)};
  return result;
}
// setBrush(QPalette::ColorGroup cg, QPalette::ColorRole cr, const QBrush &
// brush)
void c_QPalette__setBrush_ColorGroup_ColorRole_QBrush(void *thisObj, int cg,
                                                      int cr, void *brush_) {
  assert(brush_);
  auto &brush = *reinterpret_cast<QBrush *>(brush_);
  fromPtr(thisObj)->setBrush(static_cast<QPalette::ColorGroup>(cg),
                             static_cast<QPalette::ColorRole>(cr), brush);
}
// setBrush(QPalette::ColorRole cr, const QBrush & brush)
void c_QPalette__setBrush_ColorRole_QBrush(void *thisObj, int cr,
                                           void *brush_) {
  assert(brush_);
  auto &brush = *reinterpret_cast<QBrush *>(brush_);
  fromPtr(thisObj)->setBrush(static_cast<QPalette::ColorRole>(cr), brush);
}
// setColor(QPalette::ColorGroup cg, QPalette::ColorRole cr, const QColor &
// color)
void c_QPalette__setColor_ColorGroup_ColorRole_QColor(void *thisObj, int cg,
                                                      int cr, void *color_) {
  assert(color_);
  auto &color = *reinterpret_cast<QColor *>(color_);
  fromPtr(thisObj)->setColor(static_cast<QPalette::ColorGroup>(cg),
                             static_cast<QPalette::ColorRole>(cr), color);
}
// setColor(QPalette::ColorRole cr, const QColor & color)
void c_QPalette__setColor_ColorRole_QColor(void *thisObj, int cr,
                                           void *color_) {
  assert(color_);
  auto &color = *reinterpret_cast<QColor *>(color_);
  fromPtr(thisObj)->setColor(static_cast<QPalette::ColorRole>(cr), color);
}
// setColorGroup(QPalette::ColorGroup cr, const QBrush & windowText, const
// QBrush & button, const QBrush & light, const QBrush & dark, const QBrush &
// mid, const QBrush & text, const QBrush & bright_text, const QBrush & base,
// const QBrush & window)
void c_QPalette__setColorGroup_ColorGroup_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush(
    void *thisObj, int cr, void *windowText_, void *button_, void *light_,
    void *dark_, void *mid_, void *text_, void *bright_text_, void *base_,
    void *window_) {
  assert(windowText_);
  auto &windowText = *reinterpret_cast<QBrush *>(windowText_);
  assert(button_);
  auto &button = *reinterpret_cast<QBrush *>(button_);
  assert(light_);
  auto &light = *reinterpret_cast<QBrush *>(light_);
  assert(dark_);
  auto &dark = *reinterpret_cast<QBrush *>(dark_);
  assert(mid_);
  auto &mid = *reinterpret_cast<QBrush *>(mid_);
  assert(text_);
  auto &text = *reinterpret_cast<QBrush *>(text_);
  assert(bright_text_);
  auto &bright_text = *reinterpret_cast<QBrush *>(bright_text_);
  assert(base_);
  auto &base = *reinterpret_cast<QBrush *>(base_);
  assert(window_);
  auto &window = *reinterpret_cast<QBrush *>(window_);
  fromPtr(thisObj)->setColorGroup(static_cast<QPalette::ColorGroup>(cr),
                                  windowText, button, light, dark, mid, text,
                                  bright_text, base, window);
}
// setCurrentColorGroup(QPalette::ColorGroup cg)
void c_QPalette__setCurrentColorGroup_ColorGroup(void *thisObj, int cg) {
  fromPtr(thisObj)->setCurrentColorGroup(static_cast<QPalette::ColorGroup>(cg));
}
// shadow() const
void *c_QPalette__shadow(void *thisObj) {
  const auto &result = const_cast<void *>(
      static_cast<const void *>(&fromPtr(thisObj)->shadow()));
  return result;
}
// text() const
void *c_QPalette__text(void *thisObj) {
  const auto &result =
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->text()));
  return result;
}
// toolTipBase() const
void *c_QPalette__toolTipBase(void *thisObj) {
  const auto &result = const_cast<void *>(
      static_cast<const void *>(&fromPtr(thisObj)->toolTipBase()));
  return result;
}
// toolTipText() const
void *c_QPalette__toolTipText(void *thisObj) {
  const auto &result = const_cast<void *>(
      static_cast<const void *>(&fromPtr(thisObj)->toolTipText()));
  return result;
}
// window() const
void *c_QPalette__window(void *thisObj) {
  const auto &result = const_cast<void *>(
      static_cast<const void *>(&fromPtr(thisObj)->window()));
  return result;
}
// windowText() const
void *c_QPalette__windowText(void *thisObj) {
  const auto &result = const_cast<void *>(
      static_cast<const void *>(&fromPtr(thisObj)->windowText()));
  return result;
}
void c_QPalette__destructor(void *thisObj) { delete fromPtr(thisObj); }
}
