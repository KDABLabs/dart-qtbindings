
// tag=1040
#include "QtDartBindings_exports.h"
#include <qbrush.h>
#include <qcolor.h>
#include <qpalette.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QPalette_wrapper : public ::QPalette {
public:
  ~QPalette_wrapper();
  // tag=1041
  QPalette_wrapper();
  // tag=1041
  QPalette_wrapper(const QBrush &windowText, const QBrush &button,
                   const QBrush &light, const QBrush &dark, const QBrush &mid,
                   const QBrush &text, const QBrush &bright_text,
                   const QBrush &base, const QBrush &window);
  // tag=1041
  QPalette_wrapper(const QColor &button);
  // tag=1041
  QPalette_wrapper(const QColor &button, const QColor &window);
  // tag=1041
  QPalette_wrapper(const QColor &windowText, const QColor &window,
                   const QColor &light, const QColor &dark, const QColor &mid,
                   const QColor &text, const QColor &base);
  // tag=1041
  const QBrush &alternateBase() const;
  // tag=1041
  const QBrush &base() const;
  // tag=1041
  const QBrush &brightText() const;
  // tag=1041
  const QBrush &brush(QPalette::ColorGroup cg, QPalette::ColorRole cr) const;
  // tag=1041
  const QBrush &brush(QPalette::ColorRole cr) const;
  // tag=1041
  const QBrush &button() const;
  // tag=1041
  const QBrush &buttonText() const;
  // tag=1041
  qint64 cacheKey() const;
  // tag=1041
  const QColor &color(QPalette::ColorGroup cg, QPalette::ColorRole cr) const;
  // tag=1041
  const QColor &color(QPalette::ColorRole cr) const;
  // tag=1041
  QPalette::ColorGroup currentColorGroup() const;
  // tag=1041
  const QBrush &dark() const;
  // tag=1041
  const QBrush &highlight() const;
  // tag=1041
  const QBrush &highlightedText() const;
  // tag=1041
  bool isBrushSet(QPalette::ColorGroup cg, QPalette::ColorRole cr) const;
  // tag=1041
  bool isCopyOf(const QPalette &p) const;
  // tag=1041
  bool isEqual(QPalette::ColorGroup cr1, QPalette::ColorGroup cr2) const;
  // tag=1041
  const QBrush &light() const;
  // tag=1041
  const QBrush &link() const;
  // tag=1041
  const QBrush &linkVisited() const;
  // tag=1041
  const QBrush &mid() const;
  // tag=1041
  const QBrush &midlight() const;
  // tag=1041
  const QBrush &placeholderText() const;
  // tag=1041
  QPalette resolve(const QPalette &other) const;
  // tag=1041
  void setBrush(QPalette::ColorGroup cg, QPalette::ColorRole cr,
                const QBrush &brush);
  // tag=1041
  void setBrush(QPalette::ColorRole cr, const QBrush &brush);
  // tag=1041
  void setColor(QPalette::ColorGroup cg, QPalette::ColorRole cr,
                const QColor &color);
  // tag=1041
  void setColor(QPalette::ColorRole cr, const QColor &color);
  // tag=1041
  void setColorGroup(QPalette::ColorGroup cr, const QBrush &windowText,
                     const QBrush &button, const QBrush &light,
                     const QBrush &dark, const QBrush &mid, const QBrush &text,
                     const QBrush &bright_text, const QBrush &base,
                     const QBrush &window);
  // tag=1041
  void setCurrentColorGroup(QPalette::ColorGroup cg);
  // tag=1041
  const QBrush &shadow() const;
  // tag=1041
  const QBrush &text() const;
  // tag=1041
  const QBrush &toolTipBase() const;
  // tag=1041
  const QBrush &toolTipText() const;
  // tag=1041
  const QBrush &window() const;
  // tag=1041
  const QBrush &windowText() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QPalette::QPalette()
QtDartBindings_EXPORT void *c_QPalette__constructor();

// tag=1067
//  QPalette::QPalette(const QBrush & windowText, const QBrush & button, const
//  QBrush & light, const QBrush & dark, const QBrush & mid, const QBrush &
//  text, const QBrush & bright_text, const QBrush & base, const QBrush &
//  window)
QtDartBindings_EXPORT void *
c_QPalette__constructor_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush(
    void *windowText_, void *button_, void *light_, void *dark_, void *mid_,
    void *text_, void *bright_text_, void *base_, void *window_);

// tag=1067
//  QPalette::QPalette(const QColor & button)
QtDartBindings_EXPORT void *c_QPalette__constructor_QColor(void *button_);

// tag=1067
//  QPalette::QPalette(const QColor & button, const QColor & window)
QtDartBindings_EXPORT void *
c_QPalette__constructor_QColor_QColor(void *button_, void *window_);

// tag=1067
//  QPalette::QPalette(const QColor & windowText, const QColor & window, const
//  QColor & light, const QColor & dark, const QColor & mid, const QColor &
//  text, const QColor & base)
QtDartBindings_EXPORT void *
c_QPalette__constructor_QColor_QColor_QColor_QColor_QColor_QColor_QColor(
    void *windowText_, void *window_, void *light_, void *dark_, void *mid_,
    void *text_, void *base_);

// tag=1067
//  QPalette::alternateBase() const
QtDartBindings_EXPORT void *c_QPalette__alternateBase(void *thisObj);

// tag=1067
//  QPalette::base() const
QtDartBindings_EXPORT void *c_QPalette__base(void *thisObj);

// tag=1067
//  QPalette::brightText() const
QtDartBindings_EXPORT void *c_QPalette__brightText(void *thisObj);

// tag=1067
//  QPalette::brush(QPalette::ColorGroup cg, QPalette::ColorRole cr) const
QtDartBindings_EXPORT void *
c_QPalette__brush_ColorGroup_ColorRole(void *thisObj, int cg, int cr);

// tag=1067
//  QPalette::brush(QPalette::ColorRole cr) const
QtDartBindings_EXPORT void *c_QPalette__brush_ColorRole(void *thisObj, int cr);

// tag=1067
//  QPalette::button() const
QtDartBindings_EXPORT void *c_QPalette__button(void *thisObj);

// tag=1067
//  QPalette::buttonText() const
QtDartBindings_EXPORT void *c_QPalette__buttonText(void *thisObj);

// tag=1067
//  QPalette::cacheKey() const
QtDartBindings_EXPORT qint64 c_QPalette__cacheKey(void *thisObj);

// tag=1067
//  QPalette::color(QPalette::ColorGroup cg, QPalette::ColorRole cr) const
QtDartBindings_EXPORT void *
c_QPalette__color_ColorGroup_ColorRole(void *thisObj, int cg, int cr);

// tag=1067
//  QPalette::color(QPalette::ColorRole cr) const
QtDartBindings_EXPORT void *c_QPalette__color_ColorRole(void *thisObj, int cr);

// tag=1067
//  QPalette::currentColorGroup() const
QtDartBindings_EXPORT int c_QPalette__currentColorGroup(void *thisObj);

// tag=1067
//  QPalette::dark() const
QtDartBindings_EXPORT void *c_QPalette__dark(void *thisObj);

// tag=1067
//  QPalette::highlight() const
QtDartBindings_EXPORT void *c_QPalette__highlight(void *thisObj);

// tag=1067
//  QPalette::highlightedText() const
QtDartBindings_EXPORT void *c_QPalette__highlightedText(void *thisObj);

// tag=1067
//  QPalette::isBrushSet(QPalette::ColorGroup cg, QPalette::ColorRole cr) const
QtDartBindings_EXPORT bool
c_QPalette__isBrushSet_ColorGroup_ColorRole(void *thisObj, int cg, int cr);

// tag=1067
//  QPalette::isCopyOf(const QPalette & p) const
QtDartBindings_EXPORT bool c_QPalette__isCopyOf_QPalette(void *thisObj,
                                                         void *p_);

// tag=1067
//  QPalette::isEqual(QPalette::ColorGroup cr1, QPalette::ColorGroup cr2) const
QtDartBindings_EXPORT bool
c_QPalette__isEqual_ColorGroup_ColorGroup(void *thisObj, int cr1, int cr2);

// tag=1067
//  QPalette::light() const
QtDartBindings_EXPORT void *c_QPalette__light(void *thisObj);

// tag=1067
//  QPalette::link() const
QtDartBindings_EXPORT void *c_QPalette__link(void *thisObj);

// tag=1067
//  QPalette::linkVisited() const
QtDartBindings_EXPORT void *c_QPalette__linkVisited(void *thisObj);

// tag=1067
//  QPalette::mid() const
QtDartBindings_EXPORT void *c_QPalette__mid(void *thisObj);

// tag=1067
//  QPalette::midlight() const
QtDartBindings_EXPORT void *c_QPalette__midlight(void *thisObj);

// tag=1067
//  QPalette::placeholderText() const
QtDartBindings_EXPORT void *c_QPalette__placeholderText(void *thisObj);

// tag=1067
//  QPalette::resolve(const QPalette & other) const
QtDartBindings_EXPORT void *c_QPalette__resolve_QPalette(void *thisObj,
                                                         void *other_);

// tag=1067
//  QPalette::setBrush(QPalette::ColorGroup cg, QPalette::ColorRole cr, const
//  QBrush & brush)
QtDartBindings_EXPORT void
c_QPalette__setBrush_ColorGroup_ColorRole_QBrush(void *thisObj, int cg, int cr,
                                                 void *brush_);

// tag=1067
//  QPalette::setBrush(QPalette::ColorRole cr, const QBrush & brush)
QtDartBindings_EXPORT void
c_QPalette__setBrush_ColorRole_QBrush(void *thisObj, int cr, void *brush_);

// tag=1067
//  QPalette::setColor(QPalette::ColorGroup cg, QPalette::ColorRole cr, const
//  QColor & color)
QtDartBindings_EXPORT void
c_QPalette__setColor_ColorGroup_ColorRole_QColor(void *thisObj, int cg, int cr,
                                                 void *color_);

// tag=1067
//  QPalette::setColor(QPalette::ColorRole cr, const QColor & color)
QtDartBindings_EXPORT void
c_QPalette__setColor_ColorRole_QColor(void *thisObj, int cr, void *color_);

// tag=1067
//  QPalette::setColorGroup(QPalette::ColorGroup cr, const QBrush & windowText,
//  const QBrush & button, const QBrush & light, const QBrush & dark, const
//  QBrush & mid, const QBrush & text, const QBrush & bright_text, const QBrush
//  & base, const QBrush & window)
QtDartBindings_EXPORT void
c_QPalette__setColorGroup_ColorGroup_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush(
    void *thisObj, int cr, void *windowText_, void *button_, void *light_,
    void *dark_, void *mid_, void *text_, void *bright_text_, void *base_,
    void *window_);

// tag=1067
//  QPalette::setCurrentColorGroup(QPalette::ColorGroup cg)
QtDartBindings_EXPORT void
c_QPalette__setCurrentColorGroup_ColorGroup(void *thisObj, int cg);

// tag=1067
//  QPalette::shadow() const
QtDartBindings_EXPORT void *c_QPalette__shadow(void *thisObj);

// tag=1067
//  QPalette::text() const
QtDartBindings_EXPORT void *c_QPalette__text(void *thisObj);

// tag=1067
//  QPalette::toolTipBase() const
QtDartBindings_EXPORT void *c_QPalette__toolTipBase(void *thisObj);

// tag=1067
//  QPalette::toolTipText() const
QtDartBindings_EXPORT void *c_QPalette__toolTipText(void *thisObj);

// tag=1067
//  QPalette::window() const
QtDartBindings_EXPORT void *c_QPalette__window(void *thisObj);

// tag=1067
//  QPalette::windowText() const
QtDartBindings_EXPORT void *c_QPalette__windowText(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QPalette__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QPalette_Finalizer(void *, void *cppObj, void *);
}
