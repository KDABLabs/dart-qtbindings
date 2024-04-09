/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QStyle_c.h"

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
QStyle_wrapper::QStyle_wrapper() : ::QStyle() {}
void QStyle_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QStyle::customEvent(event);
  }
}
void QStyle_wrapper::customEvent_nocallback(QEvent *event) {
  ::QStyle::customEvent(event);
}
void QStyle_wrapper::drawComplexControl(QStyle::ComplexControl cc,
                                        const QStyleOptionComplex *opt,
                                        QPainter *p,
                                        const QWidget *widget) const {
  if (m_drawComplexControlCallback) {
    const void *thisPtr = this;
    m_drawComplexControlCallback(const_cast<void *>(thisPtr), cc, opt, p,
                                 widget);
  } else {
    std::cerr << "drawComplexControl: Warning: Calling pure-virtual\n";
    return;
  }
}
void QStyle_wrapper::drawComplexControl_nocallback(
    QStyle::ComplexControl cc, const QStyleOptionComplex *opt, QPainter *p,
    const QWidget *widget) const {
  std::cerr << "drawComplexControl: Warning: Calling pure-virtual\n";
  return;
}
void QStyle_wrapper::drawControl(QStyle::ControlElement element,
                                 const QStyleOption *opt, QPainter *p,
                                 const QWidget *w) const {
  if (m_drawControlCallback) {
    const void *thisPtr = this;
    m_drawControlCallback(const_cast<void *>(thisPtr), element, opt, p, w);
  } else {
    std::cerr << "drawControl: Warning: Calling pure-virtual\n";
    return;
  }
}
void QStyle_wrapper::drawControl_nocallback(QStyle::ControlElement element,
                                            const QStyleOption *opt,
                                            QPainter *p,
                                            const QWidget *w) const {
  std::cerr << "drawControl: Warning: Calling pure-virtual\n";
  return;
}
void QStyle_wrapper::drawItemPixmap(QPainter *painter, const QRect &rect,
                                    int alignment,
                                    const QPixmap &pixmap) const {
  if (m_drawItemPixmapCallback) {
    const void *thisPtr = this;
    m_drawItemPixmapCallback(const_cast<void *>(thisPtr), painter, rect,
                             alignment, pixmap);
  } else {
    ::QStyle::drawItemPixmap(painter, rect, alignment, pixmap);
  }
}
void QStyle_wrapper::drawItemPixmap_nocallback(QPainter *painter,
                                               const QRect &rect, int alignment,
                                               const QPixmap &pixmap) const {
  ::QStyle::drawItemPixmap(painter, rect, alignment, pixmap);
}
void QStyle_wrapper::drawItemText(QPainter *painter, const QRect &rect,
                                  int flags, const QPalette &pal, bool enabled,
                                  const QString &text,
                                  QPalette::ColorRole textRole) const {
  if (m_drawItemTextCallback) {
    const void *thisPtr = this;
    m_drawItemTextCallback(const_cast<void *>(thisPtr), painter, rect, flags,
                           pal, enabled, text, textRole);
  } else {
    ::QStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
  }
}
void QStyle_wrapper::drawItemText_nocallback(
    QPainter *painter, const QRect &rect, int flags, const QPalette &pal,
    bool enabled, const QString &text, QPalette::ColorRole textRole) const {
  ::QStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
}
void QStyle_wrapper::drawPrimitive(QStyle::PrimitiveElement pe,
                                   const QStyleOption *opt, QPainter *p,
                                   const QWidget *w) const {
  if (m_drawPrimitiveCallback) {
    const void *thisPtr = this;
    m_drawPrimitiveCallback(const_cast<void *>(thisPtr), pe, opt, p, w);
  } else {
    std::cerr << "drawPrimitive: Warning: Calling pure-virtual\n";
    return;
  }
}
void QStyle_wrapper::drawPrimitive_nocallback(QStyle::PrimitiveElement pe,
                                              const QStyleOption *opt,
                                              QPainter *p,
                                              const QWidget *w) const {
  std::cerr << "drawPrimitive: Warning: Calling pure-virtual\n";
  return;
}
bool QStyle_wrapper::event(QEvent *event) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QStyle::event(event);
  }
}
bool QStyle_wrapper::event_nocallback(QEvent *event) {
  return ::QStyle::event(event);
}
bool QStyle_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QStyle::eventFilter(watched, event);
  }
}
bool QStyle_wrapper::eventFilter_nocallback(QObject *watched, QEvent *event) {
  return ::QStyle::eventFilter(watched, event);
}
QPixmap QStyle_wrapper::generatedIconPixmap(QIcon::Mode iconMode,
                                            const QPixmap &pixmap,
                                            const QStyleOption *opt) const {
  if (m_generatedIconPixmapCallback) {
    const void *thisPtr = this;
    return *m_generatedIconPixmapCallback(const_cast<void *>(thisPtr), iconMode,
                                          pixmap, opt);
  } else {
    std::cerr << "generatedIconPixmap: Warning: Calling pure-virtual\n";
    return {};
  }
}
QPixmap
QStyle_wrapper::generatedIconPixmap_nocallback(QIcon::Mode iconMode,
                                               const QPixmap &pixmap,
                                               const QStyleOption *opt) const {
  std::cerr << "generatedIconPixmap: Warning: Calling pure-virtual\n";
  return {};
}
QStyle::SubControl QStyle_wrapper::hitTestComplexControl(
    QStyle::ComplexControl cc, const QStyleOptionComplex *opt, const QPoint &pt,
    const QWidget *widget) const {
  if (m_hitTestComplexControlCallback) {
    const void *thisPtr = this;
    return m_hitTestComplexControlCallback(const_cast<void *>(thisPtr), cc, opt,
                                           pt, widget);
  } else {
    std::cerr << "hitTestComplexControl: Warning: Calling pure-virtual\n";
    return {};
  }
}
QStyle::SubControl QStyle_wrapper::hitTestComplexControl_nocallback(
    QStyle::ComplexControl cc, const QStyleOptionComplex *opt, const QPoint &pt,
    const QWidget *widget) const {
  std::cerr << "hitTestComplexControl: Warning: Calling pure-virtual\n";
  return {};
}
QRect QStyle_wrapper::itemPixmapRect(const QRect &r, int flags,
                                     const QPixmap &pixmap) const {
  if (m_itemPixmapRectCallback) {
    const void *thisPtr = this;
    return *m_itemPixmapRectCallback(const_cast<void *>(thisPtr), r, flags,
                                     pixmap);
  } else {
    return ::QStyle::itemPixmapRect(r, flags, pixmap);
  }
}
QRect QStyle_wrapper::itemPixmapRect_nocallback(const QRect &r, int flags,
                                                const QPixmap &pixmap) const {
  return ::QStyle::itemPixmapRect(r, flags, pixmap);
}
int QStyle_wrapper::layoutSpacing(QSizePolicy::ControlType control1,
                                  QSizePolicy::ControlType control2,
                                  Qt::Orientation orientation,
                                  const QStyleOption *option,
                                  const QWidget *widget) const {
  if (m_layoutSpacingCallback) {
    const void *thisPtr = this;
    return m_layoutSpacingCallback(const_cast<void *>(thisPtr), control1,
                                   control2, orientation, option, widget);
  } else {
    std::cerr << "layoutSpacing: Warning: Calling pure-virtual\n";
    return {};
  }
}
int QStyle_wrapper::layoutSpacing_nocallback(QSizePolicy::ControlType control1,
                                             QSizePolicy::ControlType control2,
                                             Qt::Orientation orientation,
                                             const QStyleOption *option,
                                             const QWidget *widget) const {
  std::cerr << "layoutSpacing: Warning: Calling pure-virtual\n";
  return {};
}
QString QStyle_wrapper::name() const { return ::QStyle::name(); }
int QStyle_wrapper::pixelMetric(QStyle::PixelMetric metric,
                                const QStyleOption *option,
                                const QWidget *widget) const {
  if (m_pixelMetricCallback) {
    const void *thisPtr = this;
    return m_pixelMetricCallback(const_cast<void *>(thisPtr), metric, option,
                                 widget);
  } else {
    std::cerr << "pixelMetric: Warning: Calling pure-virtual\n";
    return {};
  }
}
int QStyle_wrapper::pixelMetric_nocallback(QStyle::PixelMetric metric,
                                           const QStyleOption *option,
                                           const QWidget *widget) const {
  std::cerr << "pixelMetric: Warning: Calling pure-virtual\n";
  return {};
}
void QStyle_wrapper::polish(QApplication *application) {
  if (m_polishApplicationCallback) {
    const void *thisPtr = this;
    m_polishApplicationCallback(const_cast<void *>(thisPtr), application);
  } else {
    ::QStyle::polish(application);
  }
}
void QStyle_wrapper::polish_nocallback(QApplication *application) {
  ::QStyle::polish(application);
}
void QStyle_wrapper::polish(QPalette &palette) {
  if (m_polishCallback) {
    const void *thisPtr = this;
    m_polishCallback(const_cast<void *>(thisPtr), palette);
  } else {
    ::QStyle::polish(palette);
  }
}
void QStyle_wrapper::polish_nocallback(QPalette &palette) {
  ::QStyle::polish(palette);
}
void QStyle_wrapper::polish(QWidget *widget) {
  if (m_polishWidgetCallback) {
    const void *thisPtr = this;
    m_polishWidgetCallback(const_cast<void *>(thisPtr), widget);
  } else {
    ::QStyle::polish(widget);
  }
}
void QStyle_wrapper::polish_nocallback(QWidget *widget) {
  ::QStyle::polish(widget);
}
const QStyle *QStyle_wrapper::proxy() const { return ::QStyle::proxy(); }
QSize QStyle_wrapper::sizeFromContents(QStyle::ContentsType ct,
                                       const QStyleOption *opt,
                                       const QSize &contentsSize,
                                       const QWidget *w) const {
  if (m_sizeFromContentsCallback) {
    const void *thisPtr = this;
    return *m_sizeFromContentsCallback(const_cast<void *>(thisPtr), ct, opt,
                                       contentsSize, w);
  } else {
    std::cerr << "sizeFromContents: Warning: Calling pure-virtual\n";
    return {};
  }
}
QSize QStyle_wrapper::sizeFromContents_nocallback(QStyle::ContentsType ct,
                                                  const QStyleOption *opt,
                                                  const QSize &contentsSize,
                                                  const QWidget *w) const {
  std::cerr << "sizeFromContents: Warning: Calling pure-virtual\n";
  return {};
}
int QStyle_wrapper::sliderPositionFromValue(int min, int max, int val,
                                            int space, bool upsideDown) {
  return ::QStyle::sliderPositionFromValue(min, max, val, space, upsideDown);
}
int QStyle_wrapper::sliderValueFromPosition(int min, int max, int pos,
                                            int space, bool upsideDown) {
  return ::QStyle::sliderValueFromPosition(min, max, pos, space, upsideDown);
}
QIcon QStyle_wrapper::standardIcon(QStyle::StandardPixmap standardIcon,
                                   const QStyleOption *option,
                                   const QWidget *widget) const {
  if (m_standardIconCallback) {
    const void *thisPtr = this;
    return *m_standardIconCallback(const_cast<void *>(thisPtr), standardIcon,
                                   option, widget);
  } else {
    std::cerr << "standardIcon: Warning: Calling pure-virtual\n";
    return {};
  }
}
QIcon QStyle_wrapper::standardIcon_nocallback(
    QStyle::StandardPixmap standardIcon, const QStyleOption *option,
    const QWidget *widget) const {
  std::cerr << "standardIcon: Warning: Calling pure-virtual\n";
  return {};
}
QPalette QStyle_wrapper::standardPalette() const {
  if (m_standardPaletteCallback) {
    const void *thisPtr = this;
    return *m_standardPaletteCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QStyle::standardPalette();
  }
}
QPalette QStyle_wrapper::standardPalette_nocallback() const {
  return ::QStyle::standardPalette();
}
QPixmap QStyle_wrapper::standardPixmap(QStyle::StandardPixmap standardPixmap,
                                       const QStyleOption *opt,
                                       const QWidget *widget) const {
  if (m_standardPixmapCallback) {
    const void *thisPtr = this;
    return *m_standardPixmapCallback(const_cast<void *>(thisPtr),
                                     standardPixmap, opt, widget);
  } else {
    std::cerr << "standardPixmap: Warning: Calling pure-virtual\n";
    return {};
  }
}
QPixmap
QStyle_wrapper::standardPixmap_nocallback(QStyle::StandardPixmap standardPixmap,
                                          const QStyleOption *opt,
                                          const QWidget *widget) const {
  std::cerr << "standardPixmap: Warning: Calling pure-virtual\n";
  return {};
}
int QStyle_wrapper::styleHint(QStyle::StyleHint stylehint,
                              const QStyleOption *opt, const QWidget *widget,
                              QStyleHintReturn *returnData) const {
  if (m_styleHintCallback) {
    const void *thisPtr = this;
    return m_styleHintCallback(const_cast<void *>(thisPtr), stylehint, opt,
                               widget, returnData);
  } else {
    std::cerr << "styleHint: Warning: Calling pure-virtual\n";
    return {};
  }
}
int QStyle_wrapper::styleHint_nocallback(QStyle::StyleHint stylehint,
                                         const QStyleOption *opt,
                                         const QWidget *widget,
                                         QStyleHintReturn *returnData) const {
  std::cerr << "styleHint: Warning: Calling pure-virtual\n";
  return {};
}
QRect QStyle_wrapper::subControlRect(QStyle::ComplexControl cc,
                                     const QStyleOptionComplex *opt,
                                     QStyle::SubControl sc,
                                     const QWidget *widget) const {
  if (m_subControlRectCallback) {
    const void *thisPtr = this;
    return *m_subControlRectCallback(const_cast<void *>(thisPtr), cc, opt, sc,
                                     widget);
  } else {
    std::cerr << "subControlRect: Warning: Calling pure-virtual\n";
    return {};
  }
}
QRect QStyle_wrapper::subControlRect_nocallback(QStyle::ComplexControl cc,
                                                const QStyleOptionComplex *opt,
                                                QStyle::SubControl sc,
                                                const QWidget *widget) const {
  std::cerr << "subControlRect: Warning: Calling pure-virtual\n";
  return {};
}
QRect QStyle_wrapper::subElementRect(QStyle::SubElement subElement,
                                     const QStyleOption *option,
                                     const QWidget *widget) const {
  if (m_subElementRectCallback) {
    const void *thisPtr = this;
    return *m_subElementRectCallback(const_cast<void *>(thisPtr), subElement,
                                     option, widget);
  } else {
    std::cerr << "subElementRect: Warning: Calling pure-virtual\n";
    return {};
  }
}
QRect QStyle_wrapper::subElementRect_nocallback(QStyle::SubElement subElement,
                                                const QStyleOption *option,
                                                const QWidget *widget) const {
  std::cerr << "subElementRect: Warning: Calling pure-virtual\n";
  return {};
}
QString QStyle_wrapper::tr(const char *s, const char *c, int n) {
  return ::QStyle::tr(s, c, n);
}
void QStyle_wrapper::unpolish(QApplication *application) {
  if (m_unpolishApplicationCallback) {
    const void *thisPtr = this;
    m_unpolishApplicationCallback(const_cast<void *>(thisPtr), application);
  } else {
    ::QStyle::unpolish(application);
  }
}
void QStyle_wrapper::unpolish_nocallback(QApplication *application) {
  ::QStyle::unpolish(application);
}
void QStyle_wrapper::unpolish(QWidget *widget) {
  if (m_unpolishCallback) {
    const void *thisPtr = this;
    m_unpolishCallback(const_cast<void *>(thisPtr), widget);
  } else {
    ::QStyle::unpolish(widget);
  }
}
void QStyle_wrapper::unpolish_nocallback(QWidget *widget) {
  ::QStyle::unpolish(widget);
}
QPoint QStyle_wrapper::visualPos(Qt::LayoutDirection direction,
                                 const QRect &boundingRect,
                                 const QPoint &logicalPos) {
  return ::QStyle::visualPos(direction, boundingRect, logicalPos);
}
QRect QStyle_wrapper::visualRect(Qt::LayoutDirection direction,
                                 const QRect &boundingRect,
                                 const QRect &logicalRect) {
  return ::QStyle::visualRect(direction, boundingRect, logicalRect);
}
QStyle_wrapper::~QStyle_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QStyle *fromPtr(void *ptr) { return reinterpret_cast<QStyle *>(ptr); }
static QtDartBindings_wrappersNS::QStyle_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(ptr);
}
extern "C" {
void c_QStyle_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(cppObj);
}
void *c_QStyle__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QStyle_wrapper();
  return reinterpret_cast<void *>(ptr);
}
// customEvent(QEvent * event)
void c_QStyle__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
void c_QStyle__onDestroyed_QObject(void *thisObj, void *contextQObject,
                                   void *callback) {
  auto instance = reinterpret_cast<QStyle *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QStyle::destroyed, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex *
// opt, QPainter * p, const QWidget * widget) const
void c_QStyle__drawComplexControl_ComplexControl_QStyleOptionComplex_QPainter_QWidget(
    void *thisObj, int cc, void *opt_, void *p_, void *widget_) {
  auto opt = reinterpret_cast<QStyleOptionComplex *>(opt_);
  auto p = reinterpret_cast<QPainter *>(p_);
  auto widget = reinterpret_cast<QWidget *>(widget_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->drawComplexControl_nocallback(
          static_cast<QStyle::ComplexControl>(cc), opt, p, widget);
    } else {
      return targetPtr->drawComplexControl(
          static_cast<QStyle::ComplexControl>(cc), opt, p, widget);
    }
  }();
}
// drawControl(QStyle::ControlElement element, const QStyleOption * opt,
// QPainter * p, const QWidget * w) const
void c_QStyle__drawControl_ControlElement_QStyleOption_QPainter_QWidget(
    void *thisObj, int element, void *opt_, void *p_, void *w_) {
  auto opt = reinterpret_cast<QStyleOption *>(opt_);
  auto p = reinterpret_cast<QPainter *>(p_);
  auto w = reinterpret_cast<QWidget *>(w_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->drawControl_nocallback(
          static_cast<QStyle::ControlElement>(element), opt, p, w);
    } else {
      return targetPtr->drawControl(
          static_cast<QStyle::ControlElement>(element), opt, p, w);
    }
  }();
}
// drawItemPixmap(QPainter * painter, const QRect & rect, int alignment, const
// QPixmap & pixmap) const
void c_QStyle__drawItemPixmap_QPainter_QRect_int_QPixmap(
    void *thisObj, void *painter_, void *rect_, int alignment, void *pixmap_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  assert(rect_);
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  assert(pixmap_);
  auto &pixmap = *reinterpret_cast<QPixmap *>(pixmap_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->drawItemPixmap_nocallback(painter, rect, alignment,
                                                   pixmap);
    } else {
      return targetPtr->drawItemPixmap(painter, rect, alignment, pixmap);
    }
  }();
}
// drawItemText(QPainter * painter, const QRect & rect, int flags, const
// QPalette & pal, bool enabled, const QString & text, QPalette::ColorRole
// textRole) const
void c_QStyle__drawItemText_QPainter_QRect_int_QPalette_bool_QString_ColorRole(
    void *thisObj, void *painter_, void *rect_, int flags, void *pal_,
    bool enabled, const char *text_, int textRole) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  assert(rect_);
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  assert(pal_);
  auto &pal = *reinterpret_cast<QPalette *>(pal_);
  const auto text = QString::fromUtf8(text_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->drawItemText_nocallback(
          painter, rect, flags, pal, enabled, text,
          static_cast<QPalette::ColorRole>(textRole));
    } else {
      return targetPtr->drawItemText(
          painter, rect, flags, pal, enabled, text,
          static_cast<QPalette::ColorRole>(textRole));
    }
  }();
  free((char *)text_);
}
// drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption * opt, QPainter
// * p, const QWidget * w) const
void c_QStyle__drawPrimitive_PrimitiveElement_QStyleOption_QPainter_QWidget(
    void *thisObj, int pe, void *opt_, void *p_, void *w_) {
  auto opt = reinterpret_cast<QStyleOption *>(opt_);
  auto p = reinterpret_cast<QPainter *>(p_);
  auto w = reinterpret_cast<QWidget *>(w_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->drawPrimitive_nocallback(
          static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
    } else {
      return targetPtr->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe),
                                      opt, p, w);
    }
  }();
}
// event(QEvent * event)
bool c_QStyle__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->event_nocallback(event);
    } else {
      return targetPtr->event(event);
    }
  }();
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QStyle__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                          void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->eventFilter_nocallback(watched, event);
    } else {
      return targetPtr->eventFilter(watched, event);
    }
  }();
  return result;
}
// generatedIconPixmap(QIcon::Mode iconMode, const QPixmap & pixmap, const
// QStyleOption * opt) const
void *c_QStyle__generatedIconPixmap_Mode_QPixmap_QStyleOption(void *thisObj,
                                                              int iconMode,
                                                              void *pixmap_,
                                                              void *opt_) {
  assert(pixmap_);
  auto &pixmap = *reinterpret_cast<QPixmap *>(pixmap_);
  auto opt = reinterpret_cast<QStyleOption *>(opt_);
  const auto &result = new Dartagnan::ValueWrapper<QPixmap>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->generatedIconPixmap_nocallback(
          static_cast<QIcon::Mode>(iconMode), pixmap, opt);
    } else {
      return targetPtr->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode),
                                            pixmap, opt);
    }
  }()};
  return result;
}
// hitTestComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex *
// opt, const QPoint & pt, const QWidget * widget) const
int c_QStyle__hitTestComplexControl_ComplexControl_QStyleOptionComplex_QPoint_QWidget(
    void *thisObj, int cc, void *opt_, void *pt_, void *widget_) {
  auto opt = reinterpret_cast<QStyleOptionComplex *>(opt_);
  assert(pt_);
  auto &pt = *reinterpret_cast<QPoint *>(pt_);
  auto widget = reinterpret_cast<QWidget *>(widget_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->hitTestComplexControl_nocallback(
          static_cast<QStyle::ComplexControl>(cc), opt, pt, widget);
    } else {
      return targetPtr->hitTestComplexControl(
          static_cast<QStyle::ComplexControl>(cc), opt, pt, widget);
    }
  }();
  return result;
}
// itemPixmapRect(const QRect & r, int flags, const QPixmap & pixmap) const
void *c_QStyle__itemPixmapRect_QRect_int_QPixmap(void *thisObj, void *r_,
                                                 int flags, void *pixmap_) {
  assert(r_);
  auto &r = *reinterpret_cast<QRect *>(r_);
  assert(pixmap_);
  auto &pixmap = *reinterpret_cast<QPixmap *>(pixmap_);
  const auto &result = new Dartagnan::ValueWrapper<QRect>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->itemPixmapRect_nocallback(r, flags, pixmap);
    } else {
      return targetPtr->itemPixmapRect(r, flags, pixmap);
    }
  }()};
  return result;
}
// layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType
// control2, Qt::Orientation orientation, const QStyleOption * option, const
// QWidget * widget) const
int c_QStyle__layoutSpacing_ControlType_ControlType_Orientation_QStyleOption_QWidget(
    void *thisObj, int control1, int control2, int orientation, void *option_,
    void *widget_) {
  auto option = reinterpret_cast<QStyleOption *>(option_);
  auto widget = reinterpret_cast<QWidget *>(widget_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->layoutSpacing_nocallback(
          static_cast<QSizePolicy::ControlType>(control1),
          static_cast<QSizePolicy::ControlType>(control2),
          static_cast<Qt::Orientation>(orientation), option, widget);
    } else {
      return targetPtr->layoutSpacing(
          static_cast<QSizePolicy::ControlType>(control1),
          static_cast<QSizePolicy::ControlType>(control2),
          static_cast<Qt::Orientation>(orientation), option, widget);
    }
  }();
  return result;
}
// name() const
void *c_QStyle__name(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->name()};
  return result;
}
// pixelMetric(QStyle::PixelMetric metric, const QStyleOption * option, const
// QWidget * widget) const
int c_QStyle__pixelMetric_PixelMetric_QStyleOption_QWidget(void *thisObj,
                                                           int metric,
                                                           void *option_,
                                                           void *widget_) {
  auto option = reinterpret_cast<QStyleOption *>(option_);
  auto widget = reinterpret_cast<QWidget *>(widget_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->pixelMetric_nocallback(
          static_cast<QStyle::PixelMetric>(metric), option, widget);
    } else {
      return targetPtr->pixelMetric(static_cast<QStyle::PixelMetric>(metric),
                                    option, widget);
    }
  }();
  return result;
}
// polish(QApplication * application)
void c_QStyle__polishApplication_QApplication(void *thisObj,
                                              void *application_) {
  auto application = reinterpret_cast<QApplication *>(application_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->polish_nocallback(application);
    } else {
      return targetPtr->polish(application);
    }
  }();
}
// polish(QPalette & palette)
void c_QStyle__polish_QPalette(void *thisObj, void *palette_) {
  assert(palette_);
  auto &palette = *reinterpret_cast<QPalette *>(palette_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->polish_nocallback(palette);
    } else {
      return targetPtr->polish(palette);
    }
  }();
}
// polish(QWidget * widget)
void c_QStyle__polishWidget_QWidget(void *thisObj, void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->polish_nocallback(widget);
    } else {
      return targetPtr->polish(widget);
    }
  }();
}
// proxy() const
void *c_QStyle__proxy(void *thisObj) {
  const auto &result =
      const_cast<void *>(static_cast<const void *>(fromPtr(thisObj)->proxy()));
  return result;
}
// sizeFromContents(QStyle::ContentsType ct, const QStyleOption * opt, const
// QSize & contentsSize, const QWidget * w) const
void *c_QStyle__sizeFromContents_ContentsType_QStyleOption_QSize_QWidget(
    void *thisObj, int ct, void *opt_, void *contentsSize_, void *w_) {
  auto opt = reinterpret_cast<QStyleOption *>(opt_);
  assert(contentsSize_);
  auto &contentsSize = *reinterpret_cast<QSize *>(contentsSize_);
  auto w = reinterpret_cast<QWidget *>(w_);
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeFromContents_nocallback(
          static_cast<QStyle::ContentsType>(ct), opt, contentsSize, w);
    } else {
      return targetPtr->sizeFromContents(static_cast<QStyle::ContentsType>(ct),
                                         opt, contentsSize, w);
    }
  }()};
  return result;
}
// sliderPositionFromValue(int min, int max, int val, int space, bool
// upsideDown)
int c_static_QStyle__sliderPositionFromValue_int_int_int_int_bool(
    int min, int max, int val, int space, bool upsideDown) {
  const auto &result =
      QtDartBindings_wrappersNS::QStyle_wrapper::sliderPositionFromValue(
          min, max, val, space, upsideDown);
  return result;
}
// sliderValueFromPosition(int min, int max, int pos, int space, bool
// upsideDown)
int c_static_QStyle__sliderValueFromPosition_int_int_int_int_bool(
    int min, int max, int pos, int space, bool upsideDown) {
  const auto &result =
      QtDartBindings_wrappersNS::QStyle_wrapper::sliderValueFromPosition(
          min, max, pos, space, upsideDown);
  return result;
}
// standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption *
// option, const QWidget * widget) const
void *c_QStyle__standardIcon_StandardPixmap_QStyleOption_QWidget(
    void *thisObj, int standardIcon, void *option_, void *widget_) {
  auto option = reinterpret_cast<QStyleOption *>(option_);
  auto widget = reinterpret_cast<QWidget *>(widget_);
  const auto &result = new Dartagnan::ValueWrapper<QIcon>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->standardIcon_nocallback(
          static_cast<QStyle::StandardPixmap>(standardIcon), option, widget);
    } else {
      return targetPtr->standardIcon(
          static_cast<QStyle::StandardPixmap>(standardIcon), option, widget);
    }
  }()};
  return result;
}
// standardPalette() const
void *c_QStyle__standardPalette(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QPalette>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->standardPalette_nocallback();
    } else {
      return targetPtr->standardPalette();
    }
  }()};
  return result;
}
// standardPixmap(QStyle::StandardPixmap standardPixmap, const QStyleOption *
// opt, const QWidget * widget) const
void *c_QStyle__standardPixmap_StandardPixmap_QStyleOption_QWidget(
    void *thisObj, int standardPixmap, void *opt_, void *widget_) {
  auto opt = reinterpret_cast<QStyleOption *>(opt_);
  auto widget = reinterpret_cast<QWidget *>(widget_);
  const auto &result = new Dartagnan::ValueWrapper<QPixmap>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->standardPixmap_nocallback(
          static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget);
    } else {
      return targetPtr->standardPixmap(
          static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget);
    }
  }()};
  return result;
}
// styleHint(QStyle::StyleHint stylehint, const QStyleOption * opt, const
// QWidget * widget, QStyleHintReturn * returnData) const
int c_QStyle__styleHint_StyleHint_QStyleOption_QWidget_QStyleHintReturn(
    void *thisObj, int stylehint, void *opt_, void *widget_,
    void *returnData_) {
  auto opt = reinterpret_cast<QStyleOption *>(opt_);
  auto widget = reinterpret_cast<QWidget *>(widget_);
  auto returnData = reinterpret_cast<QStyleHintReturn *>(returnData_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->styleHint_nocallback(
          static_cast<QStyle::StyleHint>(stylehint), opt, widget, returnData);
    } else {
      return targetPtr->styleHint(static_cast<QStyle::StyleHint>(stylehint),
                                  opt, widget, returnData);
    }
  }();
  return result;
}
// subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex * opt,
// QStyle::SubControl sc, const QWidget * widget) const
void *
c_QStyle__subControlRect_ComplexControl_QStyleOptionComplex_SubControl_QWidget(
    void *thisObj, int cc, void *opt_, int sc, void *widget_) {
  auto opt = reinterpret_cast<QStyleOptionComplex *>(opt_);
  auto widget = reinterpret_cast<QWidget *>(widget_);
  const auto &result = new Dartagnan::ValueWrapper<QRect>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->subControlRect_nocallback(
          static_cast<QStyle::ComplexControl>(cc), opt,
          static_cast<QStyle::SubControl>(sc), widget);
    } else {
      return targetPtr->subControlRect(static_cast<QStyle::ComplexControl>(cc),
                                       opt, static_cast<QStyle::SubControl>(sc),
                                       widget);
    }
  }()};
  return result;
}
// subElementRect(QStyle::SubElement subElement, const QStyleOption * option,
// const QWidget * widget) const
void *c_QStyle__subElementRect_SubElement_QStyleOption_QWidget(void *thisObj,
                                                               int subElement,
                                                               void *option_,
                                                               void *widget_) {
  auto option = reinterpret_cast<QStyleOption *>(option_);
  auto widget = reinterpret_cast<QWidget *>(widget_);
  const auto &result = new Dartagnan::ValueWrapper<QRect>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->subElementRect_nocallback(
          static_cast<QStyle::SubElement>(subElement), option, widget);
    } else {
      return targetPtr->subElementRect(
          static_cast<QStyle::SubElement>(subElement), option, widget);
    }
  }()};
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QStyle__tr_char_char_int(const char *s, const char *c, int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QStyle_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// unpolish(QApplication * application)
void c_QStyle__unpolishApplication_QApplication(void *thisObj,
                                                void *application_) {
  auto application = reinterpret_cast<QApplication *>(application_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->unpolish_nocallback(application);
    } else {
      return targetPtr->unpolish(application);
    }
  }();
}
// unpolish(QWidget * widget)
void c_QStyle__unpolish_QWidget(void *thisObj, void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->unpolish_nocallback(widget);
    } else {
      return targetPtr->unpolish(widget);
    }
  }();
}
// visualPos(Qt::LayoutDirection direction, const QRect & boundingRect, const
// QPoint & logicalPos)
void *c_static_QStyle__visualPos_LayoutDirection_QRect_QPoint(
    int direction, void *boundingRect_, void *logicalPos_) {
  assert(boundingRect_);
  auto &boundingRect = *reinterpret_cast<QRect *>(boundingRect_);
  assert(logicalPos_);
  auto &logicalPos = *reinterpret_cast<QPoint *>(logicalPos_);
  const auto &result = new Dartagnan::ValueWrapper<QPoint>{
      QtDartBindings_wrappersNS::QStyle_wrapper::visualPos(
          static_cast<Qt::LayoutDirection>(direction), boundingRect,
          logicalPos)};
  return result;
}
// visualRect(Qt::LayoutDirection direction, const QRect & boundingRect, const
// QRect & logicalRect)
void *c_static_QStyle__visualRect_LayoutDirection_QRect_QRect(
    int direction, void *boundingRect_, void *logicalRect_) {
  assert(boundingRect_);
  auto &boundingRect = *reinterpret_cast<QRect *>(boundingRect_);
  assert(logicalRect_);
  auto &logicalRect = *reinterpret_cast<QRect *>(logicalRect_);
  const auto &result = new Dartagnan::ValueWrapper<QRect>{
      QtDartBindings_wrappersNS::QStyle_wrapper::visualRect(
          static_cast<Qt::LayoutDirection>(direction), boundingRect,
          logicalRect)};
  return result;
}
void c_QStyle__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QStyle__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1906:
    wrapper->m_drawComplexControlCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_drawComplexControl>(
        callback);
    break;
  case 1907:
    wrapper->m_drawControlCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_drawControl>(
        callback);
    break;
  case 1908:
    wrapper->m_drawItemPixmapCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_drawItemPixmap>(
        callback);
    break;
  case 1909:
    wrapper->m_drawItemTextCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_drawItemText>(
        callback);
    break;
  case 1910:
    wrapper->m_drawPrimitiveCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_drawPrimitive>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_event>(callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1914:
    wrapper->m_generatedIconPixmapCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStyle_wrapper::
                             Callback_generatedIconPixmap>(callback);
    break;
  case 1915:
    wrapper->m_hitTestComplexControlCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStyle_wrapper::
                             Callback_hitTestComplexControl>(callback);
    break;
  case 1921:
    wrapper->m_itemPixmapRectCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_itemPixmapRect>(
        callback);
    break;
  case 1923:
    wrapper->m_layoutSpacingCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_layoutSpacing>(
        callback);
    break;
  case 1927:
    wrapper->m_pixelMetricCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_pixelMetric>(
        callback);
    break;
  case 1928:
    wrapper->m_polishApplicationCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_polishApplication>(
        callback);
    break;
  case 1929:
    wrapper->m_polishCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_polish>(callback);
    break;
  case 1930:
    wrapper->m_polishWidgetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_polishWidget>(
        callback);
    break;
  case 1942:
    wrapper->m_sizeFromContentsCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_sizeFromContents>(
        callback);
    break;
  case 1945:
    wrapper->m_standardIconCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_standardIcon>(
        callback);
    break;
  case 1946:
    wrapper->m_standardPaletteCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_standardPalette>(
        callback);
    break;
  case 1947:
    wrapper->m_standardPixmapCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_standardPixmap>(
        callback);
    break;
  case 1949:
    wrapper->m_styleHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_styleHint>(
        callback);
    break;
  case 1950:
    wrapper->m_subControlRectCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_subControlRect>(
        callback);
    break;
  case 1951:
    wrapper->m_subElementRectCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_subElementRect>(
        callback);
    break;
  case 1953:
    wrapper->m_unpolishApplicationCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStyle_wrapper::
                             Callback_unpolishApplication>(callback);
    break;
  case 1954:
    wrapper->m_unpolishCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_unpolish>(callback);
    break;
  }
}
}
