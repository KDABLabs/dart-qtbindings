#include "QPalette_wrapper.h"

#include <QDebug>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
// tag=1006
QPalette_wrapper::QPalette_wrapper() : ::QPalette() {}

// tag=1006
QPalette_wrapper::QPalette_wrapper(const QBrush &windowText,
                                   const QBrush &button, const QBrush &light,
                                   const QBrush &dark, const QBrush &mid,
                                   const QBrush &text,
                                   const QBrush &bright_text,
                                   const QBrush &base, const QBrush &window)
    : ::QPalette(windowText, button, light, dark, mid, text, bright_text, base,
                 window) {}

// tag=1006
QPalette_wrapper::QPalette_wrapper(const QColor &button) : ::QPalette(button) {}

// tag=1006
QPalette_wrapper::QPalette_wrapper(const QColor &button, const QColor &window)
    : ::QPalette(button, window) {}

// tag=1006
QPalette_wrapper::QPalette_wrapper(const QColor &windowText,
                                   const QColor &window, const QColor &light,
                                   const QColor &dark, const QColor &mid,
                                   const QColor &text, const QColor &base)
    : ::QPalette(windowText, window, light, dark, mid, text, base) {}
const QBrush &QPalette_wrapper::alternateBase() const {
  // tag=1000

  // tag=1004
  return ::QPalette::alternateBase();
}
const QBrush &QPalette_wrapper::base() const {
  // tag=1000

  // tag=1004
  return ::QPalette::base();
}
const QBrush &QPalette_wrapper::brightText() const {
  // tag=1000

  // tag=1004
  return ::QPalette::brightText();
}
const QBrush &QPalette_wrapper::brush(QPalette::ColorGroup cg,
                                      QPalette::ColorRole cr) const {
  // tag=1000

  // tag=1004
  return ::QPalette::brush(cg, cr);
}
const QBrush &QPalette_wrapper::brush(QPalette::ColorRole cr) const {
  // tag=1000

  // tag=1004
  return ::QPalette::brush(cr);
}
const QBrush &QPalette_wrapper::button() const {
  // tag=1000

  // tag=1004
  return ::QPalette::button();
}
const QBrush &QPalette_wrapper::buttonText() const {
  // tag=1000

  // tag=1004
  return ::QPalette::buttonText();
}
qint64 QPalette_wrapper::cacheKey() const {
  // tag=1000

  // tag=1004
  return ::QPalette::cacheKey();
}
const QColor &QPalette_wrapper::color(QPalette::ColorGroup cg,
                                      QPalette::ColorRole cr) const {
  // tag=1000

  // tag=1004
  return ::QPalette::color(cg, cr);
}
const QColor &QPalette_wrapper::color(QPalette::ColorRole cr) const {
  // tag=1000

  // tag=1004
  return ::QPalette::color(cr);
}
QPalette::ColorGroup QPalette_wrapper::currentColorGroup() const {
  // tag=1000

  // tag=1004
  return ::QPalette::currentColorGroup();
}
const QBrush &QPalette_wrapper::dark() const {
  // tag=1000

  // tag=1004
  return ::QPalette::dark();
}
const QBrush &QPalette_wrapper::highlight() const {
  // tag=1000

  // tag=1004
  return ::QPalette::highlight();
}
const QBrush &QPalette_wrapper::highlightedText() const {
  // tag=1000

  // tag=1004
  return ::QPalette::highlightedText();
}
bool QPalette_wrapper::isBrushSet(QPalette::ColorGroup cg,
                                  QPalette::ColorRole cr) const {
  // tag=1000

  // tag=1004
  return ::QPalette::isBrushSet(cg, cr);
}
bool QPalette_wrapper::isCopyOf(const QPalette &p) const {
  // tag=1000

  // tag=1004
  return ::QPalette::isCopyOf(p);
}
bool QPalette_wrapper::isEqual(QPalette::ColorGroup cr1,
                               QPalette::ColorGroup cr2) const {
  // tag=1000

  // tag=1004
  return ::QPalette::isEqual(cr1, cr2);
}
const QBrush &QPalette_wrapper::light() const {
  // tag=1000

  // tag=1004
  return ::QPalette::light();
}
const QBrush &QPalette_wrapper::link() const {
  // tag=1000

  // tag=1004
  return ::QPalette::link();
}
const QBrush &QPalette_wrapper::linkVisited() const {
  // tag=1000

  // tag=1004
  return ::QPalette::linkVisited();
}
const QBrush &QPalette_wrapper::mid() const {
  // tag=1000

  // tag=1004
  return ::QPalette::mid();
}
const QBrush &QPalette_wrapper::midlight() const {
  // tag=1000

  // tag=1004
  return ::QPalette::midlight();
}
const QBrush &QPalette_wrapper::placeholderText() const {
  // tag=1000

  // tag=1004
  return ::QPalette::placeholderText();
}
QPalette QPalette_wrapper::resolve(const QPalette &other) const {
  // tag=1000

  // tag=1004
  return ::QPalette::resolve(other);
}
void QPalette_wrapper::setBrush(QPalette::ColorGroup cg, QPalette::ColorRole cr,
                                const QBrush &brush) {
  // tag=1000

  // tag=1004
  ::QPalette::setBrush(cg, cr, brush);
}
void QPalette_wrapper::setBrush(QPalette::ColorRole cr, const QBrush &brush) {
  // tag=1000

  // tag=1004
  ::QPalette::setBrush(cr, brush);
}
void QPalette_wrapper::setColor(QPalette::ColorGroup cg, QPalette::ColorRole cr,
                                const QColor &color) {
  // tag=1000

  // tag=1004
  ::QPalette::setColor(cg, cr, color);
}
void QPalette_wrapper::setColor(QPalette::ColorRole cr, const QColor &color) {
  // tag=1000

  // tag=1004
  ::QPalette::setColor(cr, color);
}
void QPalette_wrapper::setColorGroup(QPalette::ColorGroup cr,
                                     const QBrush &windowText,
                                     const QBrush &button, const QBrush &light,
                                     const QBrush &dark, const QBrush &mid,
                                     const QBrush &text,
                                     const QBrush &bright_text,
                                     const QBrush &base, const QBrush &window) {
  // tag=1000

  // tag=1004
  ::QPalette::setColorGroup(cr, windowText, button, light, dark, mid, text,
                            bright_text, base, window);
}
void QPalette_wrapper::setCurrentColorGroup(QPalette::ColorGroup cg) {
  // tag=1000

  // tag=1004
  ::QPalette::setCurrentColorGroup(cg);
}
const QBrush &QPalette_wrapper::shadow() const {
  // tag=1000

  // tag=1004
  return ::QPalette::shadow();
}
const QBrush &QPalette_wrapper::text() const {
  // tag=1000

  // tag=1004
  return ::QPalette::text();
}
const QBrush &QPalette_wrapper::toolTipBase() const {
  // tag=1000

  // tag=1004
  return ::QPalette::toolTipBase();
}
const QBrush &QPalette_wrapper::toolTipText() const {
  // tag=1000

  // tag=1004
  return ::QPalette::toolTipText();
}
const QBrush &QPalette_wrapper::window() const {
  // tag=1000

  // tag=1004
  return ::QPalette::window();
}
const QBrush &QPalette_wrapper::windowText() const {
  // tag=1000

  // tag=1004
  return ::QPalette::windowText();
}

// tag=1005
QPalette_wrapper::~QPalette_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QPalette *fromPtr(void *ptr) {
  return reinterpret_cast<QPalette *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QPalette_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QPalette_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QPalette_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QPalette_wrapper *>(
      cppObj);
}
void *c_QPalette__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QPalette_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *
c_QPalette__constructor_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush(
    void *windowText_, void *button_, void *light_, void *dark_, void *mid_,
    void *text_, void *bright_text_, void *base_, void *window_) {
  auto &windowText = *reinterpret_cast<QBrush *>(windowText_);
  auto &button = *reinterpret_cast<QBrush *>(button_);
  auto &light = *reinterpret_cast<QBrush *>(light_);
  auto &dark = *reinterpret_cast<QBrush *>(dark_);
  auto &mid = *reinterpret_cast<QBrush *>(mid_);
  auto &text = *reinterpret_cast<QBrush *>(text_);
  auto &bright_text = *reinterpret_cast<QBrush *>(bright_text_);
  auto &base = *reinterpret_cast<QBrush *>(base_);
  auto &window = *reinterpret_cast<QBrush *>(window_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QPalette_wrapper(
      windowText, button, light, dark, mid, text, bright_text, base, window);
  return reinterpret_cast<void *>(ptr);
}
void *c_QPalette__constructor_QColor(void *button_) {
  auto &button = *reinterpret_cast<QColor *>(button_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QPalette_wrapper(button);
  return reinterpret_cast<void *>(ptr);
}
void *c_QPalette__constructor_QColor_QColor(void *button_, void *window_) {
  auto &button = *reinterpret_cast<QColor *>(button_);
  auto &window = *reinterpret_cast<QColor *>(window_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QPalette_wrapper(button, window);
  return reinterpret_cast<void *>(ptr);
}
void *c_QPalette__constructor_QColor_QColor_QColor_QColor_QColor_QColor_QColor(
    void *windowText_, void *window_, void *light_, void *dark_, void *mid_,
    void *text_, void *base_) {
  auto &windowText = *reinterpret_cast<QColor *>(windowText_);
  auto &window = *reinterpret_cast<QColor *>(window_);
  auto &light = *reinterpret_cast<QColor *>(light_);
  auto &dark = *reinterpret_cast<QColor *>(dark_);
  auto &mid = *reinterpret_cast<QColor *>(mid_);
  auto &text = *reinterpret_cast<QColor *>(text_);
  auto &base = *reinterpret_cast<QColor *>(base_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QPalette_wrapper(
      windowText, window, light, dark, mid, text, base);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// alternateBase() const
void *c_QPalette__alternateBase(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(
          static_cast<const void *>(&fromPtr(thisObj)->alternateBase()));
}

// tag=1050
// base() const
void *c_QPalette__base(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->base()));
}

// tag=1050
// brightText() const
void *c_QPalette__brightText(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(
          static_cast<const void *>(&fromPtr(thisObj)->brightText()));
}

// tag=1050
// brush(QPalette::ColorGroup cg, QPalette::ColorRole cr) const
void *c_QPalette__brush_ColorGroup_ColorRole(void *thisObj, int cg, int cr) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(static_cast<const void *>(
          &fromPtr(thisObj)->brush(static_cast<QPalette::ColorGroup>(cg),
                                   static_cast<QPalette::ColorRole>(cr))));
}

// tag=1050
// brush(QPalette::ColorRole cr) const
void *c_QPalette__brush_ColorRole(void *thisObj, int cr) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(static_cast<const void *>(
          &fromPtr(thisObj)->brush(static_cast<QPalette::ColorRole>(cr))));
}

// tag=1050
// button() const
void *c_QPalette__button(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(
          static_cast<const void *>(&fromPtr(thisObj)->button()));
}

// tag=1050
// buttonText() const
void *c_QPalette__buttonText(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(
          static_cast<const void *>(&fromPtr(thisObj)->buttonText()));
}

// tag=1050
// cacheKey() const
qint64 c_QPalette__cacheKey(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->cacheKey();
}

// tag=1050
// color(QPalette::ColorGroup cg, QPalette::ColorRole cr) const
void *c_QPalette__color_ColorGroup_ColorRole(void *thisObj, int cg, int cr) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(static_cast<const void *>(
          &fromPtr(thisObj)->color(static_cast<QPalette::ColorGroup>(cg),
                                   static_cast<QPalette::ColorRole>(cr))));
}

// tag=1050
// color(QPalette::ColorRole cr) const
void *c_QPalette__color_ColorRole(void *thisObj, int cr) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(static_cast<const void *>(
          &fromPtr(thisObj)->color(static_cast<QPalette::ColorRole>(cr))));
}

// tag=1050
// currentColorGroup() const
int c_QPalette__currentColorGroup(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->currentColorGroup();
}

// tag=1050
// dark() const
void *c_QPalette__dark(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->dark()));
}

// tag=1050
// highlight() const
void *c_QPalette__highlight(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(
          static_cast<const void *>(&fromPtr(thisObj)->highlight()));
}

// tag=1050
// highlightedText() const
void *c_QPalette__highlightedText(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(
          static_cast<const void *>(&fromPtr(thisObj)->highlightedText()));
}

// tag=1050
// isBrushSet(QPalette::ColorGroup cg, QPalette::ColorRole cr) const
bool c_QPalette__isBrushSet_ColorGroup_ColorRole(void *thisObj, int cg,
                                                 int cr) {
  return
      // tag=1010
      fromPtr(thisObj)->isBrushSet(static_cast<QPalette::ColorGroup>(cg),
                                   static_cast<QPalette::ColorRole>(cr));
}

// tag=1050
// isCopyOf(const QPalette & p) const
bool c_QPalette__isCopyOf_QPalette(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPalette *>(p_);
  return
      // tag=1010
      fromPtr(thisObj)->isCopyOf(p);
}

// tag=1050
// isEqual(QPalette::ColorGroup cr1, QPalette::ColorGroup cr2) const
bool c_QPalette__isEqual_ColorGroup_ColorGroup(void *thisObj, int cr1,
                                               int cr2) {
  return
      // tag=1010
      fromPtr(thisObj)->isEqual(static_cast<QPalette::ColorGroup>(cr1),
                                static_cast<QPalette::ColorGroup>(cr2));
}

// tag=1050
// light() const
void *c_QPalette__light(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->light()));
}

// tag=1050
// link() const
void *c_QPalette__link(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->link()));
}

// tag=1050
// linkVisited() const
void *c_QPalette__linkVisited(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(
          static_cast<const void *>(&fromPtr(thisObj)->linkVisited()));
}

// tag=1050
// mid() const
void *c_QPalette__mid(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->mid()));
}

// tag=1050
// midlight() const
void *c_QPalette__midlight(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(
          static_cast<const void *>(&fromPtr(thisObj)->midlight()));
}

// tag=1050
// placeholderText() const
void *c_QPalette__placeholderText(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(
          static_cast<const void *>(&fromPtr(thisObj)->placeholderText()));
}

// tag=1050
// resolve(const QPalette & other) const
void *c_QPalette__resolve_QPalette(void *thisObj, void *other_) {
  auto &other = *reinterpret_cast<QPalette *>(other_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPalette>{fromPtr(thisObj)->resolve(other)};
}

// tag=1050
// setBrush(QPalette::ColorGroup cg, QPalette::ColorRole cr, const QBrush &
// brush)
void c_QPalette__setBrush_ColorGroup_ColorRole_QBrush(void *thisObj, int cg,
                                                      int cr, void *brush_) {
  auto &brush = *reinterpret_cast<QBrush *>(brush_);
  // tag=1010
  fromPtr(thisObj)->setBrush(static_cast<QPalette::ColorGroup>(cg),
                             static_cast<QPalette::ColorRole>(cr), brush);
}

// tag=1050
// setBrush(QPalette::ColorRole cr, const QBrush & brush)
void c_QPalette__setBrush_ColorRole_QBrush(void *thisObj, int cr,
                                           void *brush_) {
  auto &brush = *reinterpret_cast<QBrush *>(brush_);
  // tag=1010
  fromPtr(thisObj)->setBrush(static_cast<QPalette::ColorRole>(cr), brush);
}

// tag=1050
// setColor(QPalette::ColorGroup cg, QPalette::ColorRole cr, const QColor &
// color)
void c_QPalette__setColor_ColorGroup_ColorRole_QColor(void *thisObj, int cg,
                                                      int cr, void *color_) {
  auto &color = *reinterpret_cast<QColor *>(color_);
  // tag=1010
  fromPtr(thisObj)->setColor(static_cast<QPalette::ColorGroup>(cg),
                             static_cast<QPalette::ColorRole>(cr), color);
}

// tag=1050
// setColor(QPalette::ColorRole cr, const QColor & color)
void c_QPalette__setColor_ColorRole_QColor(void *thisObj, int cr,
                                           void *color_) {
  auto &color = *reinterpret_cast<QColor *>(color_);
  // tag=1010
  fromPtr(thisObj)->setColor(static_cast<QPalette::ColorRole>(cr), color);
}

// tag=1050
// setColorGroup(QPalette::ColorGroup cr, const QBrush & windowText, const
// QBrush & button, const QBrush & light, const QBrush & dark, const QBrush &
// mid, const QBrush & text, const QBrush & bright_text, const QBrush & base,
// const QBrush & window)
void c_QPalette__setColorGroup_ColorGroup_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush(
    void *thisObj, int cr, void *windowText_, void *button_, void *light_,
    void *dark_, void *mid_, void *text_, void *bright_text_, void *base_,
    void *window_) {
  auto &windowText = *reinterpret_cast<QBrush *>(windowText_);
  auto &button = *reinterpret_cast<QBrush *>(button_);
  auto &light = *reinterpret_cast<QBrush *>(light_);
  auto &dark = *reinterpret_cast<QBrush *>(dark_);
  auto &mid = *reinterpret_cast<QBrush *>(mid_);
  auto &text = *reinterpret_cast<QBrush *>(text_);
  auto &bright_text = *reinterpret_cast<QBrush *>(bright_text_);
  auto &base = *reinterpret_cast<QBrush *>(base_);
  auto &window = *reinterpret_cast<QBrush *>(window_);
  // tag=1010
  fromPtr(thisObj)->setColorGroup(static_cast<QPalette::ColorGroup>(cr),
                                  windowText, button, light, dark, mid, text,
                                  bright_text, base, window);
}

// tag=1050
// setCurrentColorGroup(QPalette::ColorGroup cg)
void c_QPalette__setCurrentColorGroup_ColorGroup(void *thisObj, int cg) {
  // tag=1010
  fromPtr(thisObj)->setCurrentColorGroup(static_cast<QPalette::ColorGroup>(cg));
}

// tag=1050
// shadow() const
void *c_QPalette__shadow(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(
          static_cast<const void *>(&fromPtr(thisObj)->shadow()));
}

// tag=1050
// text() const
void *c_QPalette__text(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->text()));
}

// tag=1050
// toolTipBase() const
void *c_QPalette__toolTipBase(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(
          static_cast<const void *>(&fromPtr(thisObj)->toolTipBase()));
}

// tag=1050
// toolTipText() const
void *c_QPalette__toolTipText(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(
          static_cast<const void *>(&fromPtr(thisObj)->toolTipText()));
}

// tag=1050
// window() const
void *c_QPalette__window(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(
          static_cast<const void *>(&fromPtr(thisObj)->window()));
}

// tag=1050
// windowText() const
void *c_QPalette__windowText(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(
          static_cast<const void *>(&fromPtr(thisObj)->windowText()));
}
void c_QPalette__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
}
