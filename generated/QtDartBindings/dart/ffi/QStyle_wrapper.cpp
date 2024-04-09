#include "QStyle_wrapper.h"

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
QStyle_wrapper::QStyle_wrapper() : ::QStyle() {}
void QStyle_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QStyle::customEvent(event);
  }
}
// tag=1009
void QStyle_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QStyle::customEvent(event);
}
void QStyle_wrapper::drawComplexControl(QStyle::ComplexControl cc,
                                        const QStyleOptionComplex *opt,
                                        QPainter *p,
                                        const QWidget *widget) const {
  // tag=1000
  if (m_drawComplexControlCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_drawComplexControlCallback(const_cast<void *>(thisPtr), cc, opt, p,
                                 widget);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return;
  }
}
// tag=1009
void QStyle_wrapper::drawComplexControl_nocallback(
    QStyle::ComplexControl cc, const QStyleOptionComplex *opt, QPainter *p,
    const QWidget *widget) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return;
}
void QStyle_wrapper::drawControl(QStyle::ControlElement element,
                                 const QStyleOption *opt, QPainter *p,
                                 const QWidget *w) const {
  // tag=1000
  if (m_drawControlCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_drawControlCallback(const_cast<void *>(thisPtr), element, opt, p, w);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return;
  }
}
// tag=1009
void QStyle_wrapper::drawControl_nocallback(QStyle::ControlElement element,
                                            const QStyleOption *opt,
                                            QPainter *p,
                                            const QWidget *w) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return;
}
void QStyle_wrapper::drawItemPixmap(QPainter *painter, const QRect &rect,
                                    int alignment,
                                    const QPixmap &pixmap) const {
  // tag=1000
  if (m_drawItemPixmapCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_drawItemPixmapCallback(const_cast<void *>(thisPtr), painter, rect,
                             alignment, pixmap);
  } else {
    // tag=1002
    ::QStyle::drawItemPixmap(painter, rect, alignment, pixmap);
  }
}
// tag=1009
void QStyle_wrapper::drawItemPixmap_nocallback(QPainter *painter,
                                               const QRect &rect, int alignment,
                                               const QPixmap &pixmap) const {
  // tag=1003
  ::QStyle::drawItemPixmap(painter, rect, alignment, pixmap);
}
void QStyle_wrapper::drawItemText(QPainter *painter, const QRect &rect,
                                  int flags, const QPalette &pal, bool enabled,
                                  const QString &text,
                                  QPalette::ColorRole textRole) const {
  // tag=1000
  if (m_drawItemTextCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_drawItemTextCallback(const_cast<void *>(thisPtr), painter, rect, flags,
                           pal, enabled, text, textRole);
  } else {
    // tag=1002
    ::QStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
  }
}
// tag=1009
void QStyle_wrapper::drawItemText_nocallback(
    QPainter *painter, const QRect &rect, int flags, const QPalette &pal,
    bool enabled, const QString &text, QPalette::ColorRole textRole) const {
  // tag=1003
  ::QStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
}
void QStyle_wrapper::drawPrimitive(QStyle::PrimitiveElement pe,
                                   const QStyleOption *opt, QPainter *p,
                                   const QWidget *w) const {
  // tag=1000
  if (m_drawPrimitiveCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_drawPrimitiveCallback(const_cast<void *>(thisPtr), pe, opt, p, w);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return;
  }
}
// tag=1009
void QStyle_wrapper::drawPrimitive_nocallback(QStyle::PrimitiveElement pe,
                                              const QStyleOption *opt,
                                              QPainter *p,
                                              const QWidget *w) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return;
}
bool QStyle_wrapper::event(QEvent *event) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QStyle::event(event);
  }
}
// tag=1009
bool QStyle_wrapper::event_nocallback(QEvent *event) {
  // tag=1003
  return ::QStyle::event(event);
}
bool QStyle_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QStyle::eventFilter(watched, event);
  }
}
// tag=1009
bool QStyle_wrapper::eventFilter_nocallback(QObject *watched, QEvent *event) {
  // tag=1003
  return ::QStyle::eventFilter(watched, event);
}
QPixmap QStyle_wrapper::generatedIconPixmap(QIcon::Mode iconMode,
                                            const QPixmap &pixmap,
                                            const QStyleOption *opt) const {
  // tag=1000
  if (m_generatedIconPixmapCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_generatedIconPixmapCallback(const_cast<void *>(thisPtr), iconMode,
                                          pixmap, opt);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
QPixmap
QStyle_wrapper::generatedIconPixmap_nocallback(QIcon::Mode iconMode,
                                               const QPixmap &pixmap,
                                               const QStyleOption *opt) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
QStyle::SubControl QStyle_wrapper::hitTestComplexControl(
    QStyle::ComplexControl cc, const QStyleOptionComplex *opt, const QPoint &pt,
    const QWidget *widget) const {
  // tag=1000
  if (m_hitTestComplexControlCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hitTestComplexControlCallback(const_cast<void *>(thisPtr), cc, opt,
                                           pt, widget);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
QStyle::SubControl QStyle_wrapper::hitTestComplexControl_nocallback(
    QStyle::ComplexControl cc, const QStyleOptionComplex *opt, const QPoint &pt,
    const QWidget *widget) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
QRect QStyle_wrapper::itemPixmapRect(const QRect &r, int flags,
                                     const QPixmap &pixmap) const {
  // tag=1000
  if (m_itemPixmapRectCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_itemPixmapRectCallback(const_cast<void *>(thisPtr), r, flags,
                                     pixmap);
  } else {
    // tag=1002
    return ::QStyle::itemPixmapRect(r, flags, pixmap);
  }
}
// tag=1009
QRect QStyle_wrapper::itemPixmapRect_nocallback(const QRect &r, int flags,
                                                const QPixmap &pixmap) const {
  // tag=1003
  return ::QStyle::itemPixmapRect(r, flags, pixmap);
}
int QStyle_wrapper::layoutSpacing(QSizePolicy::ControlType control1,
                                  QSizePolicy::ControlType control2,
                                  Qt::Orientation orientation,
                                  const QStyleOption *option,
                                  const QWidget *widget) const {
  // tag=1000
  if (m_layoutSpacingCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_layoutSpacingCallback(const_cast<void *>(thisPtr), control1,
                                   control2, orientation, option, widget);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
int QStyle_wrapper::layoutSpacing_nocallback(QSizePolicy::ControlType control1,
                                             QSizePolicy::ControlType control2,
                                             Qt::Orientation orientation,
                                             const QStyleOption *option,
                                             const QWidget *widget) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
QString QStyle_wrapper::name() const {
  // tag=1000

  // tag=1004
  return ::QStyle::name();
}
int QStyle_wrapper::pixelMetric(QStyle::PixelMetric metric,
                                const QStyleOption *option,
                                const QWidget *widget) const {
  // tag=1000
  if (m_pixelMetricCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_pixelMetricCallback(const_cast<void *>(thisPtr), metric, option,
                                 widget);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
int QStyle_wrapper::pixelMetric_nocallback(QStyle::PixelMetric metric,
                                           const QStyleOption *option,
                                           const QWidget *widget) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
void QStyle_wrapper::polish(QApplication *application) {
  // tag=1000
  if (m_polishApplicationCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_polishApplicationCallback(const_cast<void *>(thisPtr), application);
  } else {
    // tag=1002
    ::QStyle::polish(application);
  }
}
// tag=1009
void QStyle_wrapper::polish_nocallback(QApplication *application) {
  // tag=1003
  ::QStyle::polish(application);
}
void QStyle_wrapper::polish(QPalette &palette) {
  // tag=1000
  if (m_polishCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_polishCallback(const_cast<void *>(thisPtr), palette);
  } else {
    // tag=1002
    ::QStyle::polish(palette);
  }
}
// tag=1009
void QStyle_wrapper::polish_nocallback(QPalette &palette) {
  // tag=1003
  ::QStyle::polish(palette);
}
void QStyle_wrapper::polish(QWidget *widget) {
  // tag=1000
  if (m_polishWidgetCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_polishWidgetCallback(const_cast<void *>(thisPtr), widget);
  } else {
    // tag=1002
    ::QStyle::polish(widget);
  }
}
// tag=1009
void QStyle_wrapper::polish_nocallback(QWidget *widget) {
  // tag=1003
  ::QStyle::polish(widget);
}
const QStyle *QStyle_wrapper::proxy() const {
  // tag=1000

  // tag=1004
  return ::QStyle::proxy();
}
QSize QStyle_wrapper::sizeFromContents(QStyle::ContentsType ct,
                                       const QStyleOption *opt,
                                       const QSize &contentsSize,
                                       const QWidget *w) const {
  // tag=1000
  if (m_sizeFromContentsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeFromContentsCallback(const_cast<void *>(thisPtr), ct, opt,
                                       contentsSize, w);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
QSize QStyle_wrapper::sizeFromContents_nocallback(QStyle::ContentsType ct,
                                                  const QStyleOption *opt,
                                                  const QSize &contentsSize,
                                                  const QWidget *w) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
int QStyle_wrapper::sliderPositionFromValue(int min, int max, int val,
                                            int space, bool upsideDown) {
  // tag=1000

  // tag=1004
  return ::QStyle::sliderPositionFromValue(min, max, val, space, upsideDown);
}
int QStyle_wrapper::sliderValueFromPosition(int min, int max, int pos,
                                            int space, bool upsideDown) {
  // tag=1000

  // tag=1004
  return ::QStyle::sliderValueFromPosition(min, max, pos, space, upsideDown);
}
QIcon QStyle_wrapper::standardIcon(QStyle::StandardPixmap standardIcon,
                                   const QStyleOption *option,
                                   const QWidget *widget) const {
  // tag=1000
  if (m_standardIconCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_standardIconCallback(const_cast<void *>(thisPtr), standardIcon,
                                   option, widget);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
QIcon QStyle_wrapper::standardIcon_nocallback(
    QStyle::StandardPixmap standardIcon, const QStyleOption *option,
    const QWidget *widget) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
QPalette QStyle_wrapper::standardPalette() const {
  // tag=1000
  if (m_standardPaletteCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_standardPaletteCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QStyle::standardPalette();
  }
}
// tag=1009
QPalette QStyle_wrapper::standardPalette_nocallback() const {
  // tag=1003
  return ::QStyle::standardPalette();
}
QPixmap QStyle_wrapper::standardPixmap(QStyle::StandardPixmap standardPixmap,
                                       const QStyleOption *opt,
                                       const QWidget *widget) const {
  // tag=1000
  if (m_standardPixmapCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_standardPixmapCallback(const_cast<void *>(thisPtr),
                                     standardPixmap, opt, widget);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
QPixmap
QStyle_wrapper::standardPixmap_nocallback(QStyle::StandardPixmap standardPixmap,
                                          const QStyleOption *opt,
                                          const QWidget *widget) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
int QStyle_wrapper::styleHint(QStyle::StyleHint stylehint,
                              const QStyleOption *opt, const QWidget *widget,
                              QStyleHintReturn *returnData) const {
  // tag=1000
  if (m_styleHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_styleHintCallback(const_cast<void *>(thisPtr), stylehint, opt,
                               widget, returnData);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
int QStyle_wrapper::styleHint_nocallback(QStyle::StyleHint stylehint,
                                         const QStyleOption *opt,
                                         const QWidget *widget,
                                         QStyleHintReturn *returnData) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
QRect QStyle_wrapper::subControlRect(QStyle::ComplexControl cc,
                                     const QStyleOptionComplex *opt,
                                     QStyle::SubControl sc,
                                     const QWidget *widget) const {
  // tag=1000
  if (m_subControlRectCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_subControlRectCallback(const_cast<void *>(thisPtr), cc, opt, sc,
                                     widget);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
QRect QStyle_wrapper::subControlRect_nocallback(QStyle::ComplexControl cc,
                                                const QStyleOptionComplex *opt,
                                                QStyle::SubControl sc,
                                                const QWidget *widget) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
QRect QStyle_wrapper::subElementRect(QStyle::SubElement subElement,
                                     const QStyleOption *option,
                                     const QWidget *widget) const {
  // tag=1000
  if (m_subElementRectCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_subElementRectCallback(const_cast<void *>(thisPtr), subElement,
                                     option, widget);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
QRect QStyle_wrapper::subElementRect_nocallback(QStyle::SubElement subElement,
                                                const QStyleOption *option,
                                                const QWidget *widget) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
QString QStyle_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QStyle::tr(s, c, n);
}
void QStyle_wrapper::unpolish(QApplication *application) {
  // tag=1000
  if (m_unpolishApplicationCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_unpolishApplicationCallback(const_cast<void *>(thisPtr), application);
  } else {
    // tag=1002
    ::QStyle::unpolish(application);
  }
}
// tag=1009
void QStyle_wrapper::unpolish_nocallback(QApplication *application) {
  // tag=1003
  ::QStyle::unpolish(application);
}
void QStyle_wrapper::unpolish(QWidget *widget) {
  // tag=1000
  if (m_unpolishCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_unpolishCallback(const_cast<void *>(thisPtr), widget);
  } else {
    // tag=1002
    ::QStyle::unpolish(widget);
  }
}
// tag=1009
void QStyle_wrapper::unpolish_nocallback(QWidget *widget) {
  // tag=1003
  ::QStyle::unpolish(widget);
}
QPoint QStyle_wrapper::visualPos(Qt::LayoutDirection direction,
                                 const QRect &boundingRect,
                                 const QPoint &logicalPos) {
  // tag=1000

  // tag=1004
  return ::QStyle::visualPos(direction, boundingRect, logicalPos);
}
QRect QStyle_wrapper::visualRect(Qt::LayoutDirection direction,
                                 const QRect &boundingRect,
                                 const QRect &logicalRect) {
  // tag=1000

  // tag=1004
  return ::QStyle::visualRect(direction, boundingRect, logicalRect);
}

// tag=1005
QStyle_wrapper::~QStyle_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QStyle *fromPtr(void *ptr) { return reinterpret_cast<QStyle *>(ptr); }
// tag=1014
static QtDartBindings_wrappersNS::QStyle_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QStyle_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(cppObj);
}
void *c_QStyle__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QStyle_wrapper();
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// customEvent(QEvent * event)
void c_QStyle__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1079
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

// tag=1050
// drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex *
// opt, QPainter * p, const QWidget * widget) const
void c_QStyle__drawComplexControl_ComplexControl_QStyleOptionComplex_QPainter_QWidget(
    void *thisObj, int cc, void *opt_, void *p_, void *widget_) {
  auto opt = reinterpret_cast<QStyleOptionComplex *>(opt_);
  auto p = reinterpret_cast<QPainter *>(p_);
  auto widget = reinterpret_cast<QWidget *>(widget_);
  // tag=1016
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

// tag=1050
// drawControl(QStyle::ControlElement element, const QStyleOption * opt,
// QPainter * p, const QWidget * w) const
void c_QStyle__drawControl_ControlElement_QStyleOption_QPainter_QWidget(
    void *thisObj, int element, void *opt_, void *p_, void *w_) {
  auto opt = reinterpret_cast<QStyleOption *>(opt_);
  auto p = reinterpret_cast<QPainter *>(p_);
  auto w = reinterpret_cast<QWidget *>(w_);
  // tag=1016
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

// tag=1050
// drawItemPixmap(QPainter * painter, const QRect & rect, int alignment, const
// QPixmap & pixmap) const
void c_QStyle__drawItemPixmap_QPainter_QRect_int_QPixmap(
    void *thisObj, void *painter_, void *rect_, int alignment, void *pixmap_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  auto &pixmap = *reinterpret_cast<QPixmap *>(pixmap_);
  // tag=1016
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

// tag=1050
// drawItemText(QPainter * painter, const QRect & rect, int flags, const
// QPalette & pal, bool enabled, const QString & text, QPalette::ColorRole
// textRole) const
void c_QStyle__drawItemText_QPainter_QRect_int_QPalette_bool_QString_ColorRole(
    void *thisObj, void *painter_, void *rect_, int flags, void *pal_,
    bool enabled, const char *text_, int textRole) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  auto &pal = *reinterpret_cast<QPalette *>(pal_);
  const auto text = QString::fromUtf8(text_);
  // tag=1016
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
}

// tag=1050
// drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption * opt, QPainter
// * p, const QWidget * w) const
void c_QStyle__drawPrimitive_PrimitiveElement_QStyleOption_QPainter_QWidget(
    void *thisObj, int pe, void *opt_, void *p_, void *w_) {
  auto opt = reinterpret_cast<QStyleOption *>(opt_);
  auto p = reinterpret_cast<QPainter *>(p_);
  auto w = reinterpret_cast<QWidget *>(w_);
  // tag=1016
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

// tag=1050
// event(QEvent * event)
bool c_QStyle__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->event_nocallback(event);
        } else {
          return targetPtr->event(event);
        }
      }();
}

// tag=1050
// eventFilter(QObject * watched, QEvent * event)
bool c_QStyle__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                          void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->eventFilter_nocallback(watched, event);
        } else {
          return targetPtr->eventFilter(watched, event);
        }
      }();
}

// tag=1050
// generatedIconPixmap(QIcon::Mode iconMode, const QPixmap & pixmap, const
// QStyleOption * opt) const
void *c_QStyle__generatedIconPixmap_Mode_QPixmap_QStyleOption(void *thisObj,
                                                              int iconMode,
                                                              void *pixmap_,
                                                              void *opt_) {
  auto &pixmap = *reinterpret_cast<QPixmap *>(pixmap_);
  auto opt = reinterpret_cast<QStyleOption *>(opt_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QPixmap>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->generatedIconPixmap_nocallback(
              static_cast<QIcon::Mode>(iconMode), pixmap, opt);
        } else {
          return targetPtr->generatedIconPixmap(
              static_cast<QIcon::Mode>(iconMode), pixmap, opt);
        }
      }()};
}

// tag=1050
// hitTestComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex *
// opt, const QPoint & pt, const QWidget * widget) const
int c_QStyle__hitTestComplexControl_ComplexControl_QStyleOptionComplex_QPoint_QWidget(
    void *thisObj, int cc, void *opt_, void *pt_, void *widget_) {
  auto opt = reinterpret_cast<QStyleOptionComplex *>(opt_);
  auto &pt = *reinterpret_cast<QPoint *>(pt_);
  auto widget = reinterpret_cast<QWidget *>(widget_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->hitTestComplexControl_nocallback(
              static_cast<QStyle::ComplexControl>(cc), opt, pt, widget);
        } else {
          return targetPtr->hitTestComplexControl(
              static_cast<QStyle::ComplexControl>(cc), opt, pt, widget);
        }
      }();
}

// tag=1050
// itemPixmapRect(const QRect & r, int flags, const QPixmap & pixmap) const
void *c_QStyle__itemPixmapRect_QRect_int_QPixmap(void *thisObj, void *r_,
                                                 int flags, void *pixmap_) {
  auto &r = *reinterpret_cast<QRect *>(r_);
  auto &pixmap = *reinterpret_cast<QPixmap *>(pixmap_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->itemPixmapRect_nocallback(r, flags, pixmap);
        } else {
          return targetPtr->itemPixmapRect(r, flags, pixmap);
        }
      }()};
}

// tag=1050
// layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType
// control2, Qt::Orientation orientation, const QStyleOption * option, const
// QWidget * widget) const
int c_QStyle__layoutSpacing_ControlType_ControlType_Orientation_QStyleOption_QWidget(
    void *thisObj, int control1, int control2, int orientation, void *option_,
    void *widget_) {
  auto option = reinterpret_cast<QStyleOption *>(option_);
  auto widget = reinterpret_cast<QWidget *>(widget_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(
                targetPtr);
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
}

// tag=1050
// name() const
void *c_QStyle__name(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->name()};
}

// tag=1050
// pixelMetric(QStyle::PixelMetric metric, const QStyleOption * option, const
// QWidget * widget) const
int c_QStyle__pixelMetric_PixelMetric_QStyleOption_QWidget(void *thisObj,
                                                           int metric,
                                                           void *option_,
                                                           void *widget_) {
  auto option = reinterpret_cast<QStyleOption *>(option_);
  auto widget = reinterpret_cast<QWidget *>(widget_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->pixelMetric_nocallback(
              static_cast<QStyle::PixelMetric>(metric), option, widget);
        } else {
          return targetPtr->pixelMetric(
              static_cast<QStyle::PixelMetric>(metric), option, widget);
        }
      }();
}

// tag=1050
// polish(QApplication * application)
void c_QStyle__polishApplication_QApplication(void *thisObj,
                                              void *application_) {
  auto application = reinterpret_cast<QApplication *>(application_);
  // tag=1016
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

// tag=1050
// polish(QPalette & palette)
void c_QStyle__polish_QPalette(void *thisObj, void *palette_) {
  auto &palette = *reinterpret_cast<QPalette *>(palette_);
  // tag=1016
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

// tag=1050
// polish(QWidget * widget)
void c_QStyle__polishWidget_QWidget(void *thisObj, void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  // tag=1016
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

// tag=1050
// proxy() const
void *c_QStyle__proxy(void *thisObj) {
  return
      // tag=1010

      // tag=1069
      const_cast<void *>(static_cast<const void *>(fromPtr(thisObj)->proxy()));
}

// tag=1050
// sizeFromContents(QStyle::ContentsType ct, const QStyleOption * opt, const
// QSize & contentsSize, const QWidget * w) const
void *c_QStyle__sizeFromContents_ContentsType_QStyleOption_QSize_QWidget(
    void *thisObj, int ct, void *opt_, void *contentsSize_, void *w_) {
  auto opt = reinterpret_cast<QStyleOption *>(opt_);
  auto &contentsSize = *reinterpret_cast<QSize *>(contentsSize_);
  auto w = reinterpret_cast<QWidget *>(w_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sizeFromContents_nocallback(
              static_cast<QStyle::ContentsType>(ct), opt, contentsSize, w);
        } else {
          return targetPtr->sizeFromContents(
              static_cast<QStyle::ContentsType>(ct), opt, contentsSize, w);
        }
      }()};
}

// tag=1050
// sliderPositionFromValue(int min, int max, int val, int space, bool
// upsideDown)
int c_static_QStyle__sliderPositionFromValue_int_int_int_int_bool(
    int min, int max, int val, int space, bool upsideDown) {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QStyle_wrapper::sliderPositionFromValue(
          min, max, val, space, upsideDown);
}

// tag=1050
// sliderValueFromPosition(int min, int max, int pos, int space, bool
// upsideDown)
int c_static_QStyle__sliderValueFromPosition_int_int_int_int_bool(
    int min, int max, int pos, int space, bool upsideDown) {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QStyle_wrapper::sliderValueFromPosition(
          min, max, pos, space, upsideDown);
}

// tag=1050
// standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption *
// option, const QWidget * widget) const
void *c_QStyle__standardIcon_StandardPixmap_QStyleOption_QWidget(
    void *thisObj, int standardIcon, void *option_, void *widget_) {
  auto option = reinterpret_cast<QStyleOption *>(option_);
  auto widget = reinterpret_cast<QWidget *>(widget_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QIcon>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->standardIcon_nocallback(
              static_cast<QStyle::StandardPixmap>(standardIcon), option,
              widget);
        } else {
          return targetPtr->standardIcon(
              static_cast<QStyle::StandardPixmap>(standardIcon), option,
              widget);
        }
      }()};
}

// tag=1050
// standardPalette() const
void *c_QStyle__standardPalette(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QPalette>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->standardPalette_nocallback();
        } else {
          return targetPtr->standardPalette();
        }
      }()};
}

// tag=1050
// standardPixmap(QStyle::StandardPixmap standardPixmap, const QStyleOption *
// opt, const QWidget * widget) const
void *c_QStyle__standardPixmap_StandardPixmap_QStyleOption_QWidget(
    void *thisObj, int standardPixmap, void *opt_, void *widget_) {
  auto opt = reinterpret_cast<QStyleOption *>(opt_);
  auto widget = reinterpret_cast<QWidget *>(widget_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QPixmap>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->standardPixmap_nocallback(
              static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget);
        } else {
          return targetPtr->standardPixmap(
              static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget);
        }
      }()};
}

// tag=1050
// styleHint(QStyle::StyleHint stylehint, const QStyleOption * opt, const
// QWidget * widget, QStyleHintReturn * returnData) const
int c_QStyle__styleHint_StyleHint_QStyleOption_QWidget_QStyleHintReturn(
    void *thisObj, int stylehint, void *opt_, void *widget_,
    void *returnData_) {
  auto opt = reinterpret_cast<QStyleOption *>(opt_);
  auto widget = reinterpret_cast<QWidget *>(widget_);
  auto returnData = reinterpret_cast<QStyleHintReturn *>(returnData_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->styleHint_nocallback(
              static_cast<QStyle::StyleHint>(stylehint), opt, widget,
              returnData);
        } else {
          return targetPtr->styleHint(static_cast<QStyle::StyleHint>(stylehint),
                                      opt, widget, returnData);
        }
      }();
}

// tag=1050
// subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex * opt,
// QStyle::SubControl sc, const QWidget * widget) const
void *
c_QStyle__subControlRect_ComplexControl_QStyleOptionComplex_SubControl_QWidget(
    void *thisObj, int cc, void *opt_, int sc, void *widget_) {
  auto opt = reinterpret_cast<QStyleOptionComplex *>(opt_);
  auto widget = reinterpret_cast<QWidget *>(widget_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->subControlRect_nocallback(
              static_cast<QStyle::ComplexControl>(cc), opt,
              static_cast<QStyle::SubControl>(sc), widget);
        } else {
          return targetPtr->subControlRect(
              static_cast<QStyle::ComplexControl>(cc), opt,
              static_cast<QStyle::SubControl>(sc), widget);
        }
      }()};
}

// tag=1050
// subElementRect(QStyle::SubElement subElement, const QStyleOption * option,
// const QWidget * widget) const
void *c_QStyle__subElementRect_SubElement_QStyleOption_QWidget(void *thisObj,
                                                               int subElement,
                                                               void *option_,
                                                               void *widget_) {
  auto option = reinterpret_cast<QStyleOption *>(option_);
  auto widget = reinterpret_cast<QWidget *>(widget_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QStyle_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->subElementRect_nocallback(
              static_cast<QStyle::SubElement>(subElement), option, widget);
        } else {
          return targetPtr->subElementRect(
              static_cast<QStyle::SubElement>(subElement), option, widget);
        }
      }()};
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QStyle__tr_char_char_int(const char *s, const char *c, int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QStyle_wrapper::tr(s, c, n)};
}

// tag=1050
// unpolish(QApplication * application)
void c_QStyle__unpolishApplication_QApplication(void *thisObj,
                                                void *application_) {
  auto application = reinterpret_cast<QApplication *>(application_);
  // tag=1016
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

// tag=1050
// unpolish(QWidget * widget)
void c_QStyle__unpolish_QWidget(void *thisObj, void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  // tag=1016
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

// tag=1050
// visualPos(Qt::LayoutDirection direction, const QRect & boundingRect, const
// QPoint & logicalPos)
void *c_static_QStyle__visualPos_LayoutDirection_QRect_QPoint(
    int direction, void *boundingRect_, void *logicalPos_) {
  auto &boundingRect = *reinterpret_cast<QRect *>(boundingRect_);
  auto &logicalPos = *reinterpret_cast<QPoint *>(logicalPos_);
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QPoint>{
          QtDartBindings_wrappersNS::QStyle_wrapper::visualPos(
              static_cast<Qt::LayoutDirection>(direction), boundingRect,
              logicalPos)};
}

// tag=1050
// visualRect(Qt::LayoutDirection direction, const QRect & boundingRect, const
// QRect & logicalRect)
void *c_static_QStyle__visualRect_LayoutDirection_QRect_QRect(
    int direction, void *boundingRect_, void *logicalRect_) {
  auto &boundingRect = *reinterpret_cast<QRect *>(boundingRect_);
  auto &logicalRect = *reinterpret_cast<QRect *>(logicalRect_);
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{
          QtDartBindings_wrappersNS::QStyle_wrapper::visualRect(
              static_cast<Qt::LayoutDirection>(direction), boundingRect,
              logicalRect)};
}
void c_QStyle__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QStyle__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1899:
    wrapper->m_drawComplexControlCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_drawComplexControl>(
        callback);
    break;
  case 1900:
    wrapper->m_drawControlCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_drawControl>(
        callback);
    break;
  case 1901:
    wrapper->m_drawItemPixmapCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_drawItemPixmap>(
        callback);
    break;
  case 1902:
    wrapper->m_drawItemTextCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_drawItemText>(
        callback);
    break;
  case 1903:
    wrapper->m_drawPrimitiveCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_drawPrimitive>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_event>(callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1907:
    wrapper->m_generatedIconPixmapCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStyle_wrapper::
                             Callback_generatedIconPixmap>(callback);
    break;
  case 1908:
    wrapper->m_hitTestComplexControlCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStyle_wrapper::
                             Callback_hitTestComplexControl>(callback);
    break;
  case 1913:
    wrapper->m_itemPixmapRectCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_itemPixmapRect>(
        callback);
    break;
  case 1915:
    wrapper->m_layoutSpacingCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_layoutSpacing>(
        callback);
    break;
  case 1919:
    wrapper->m_pixelMetricCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_pixelMetric>(
        callback);
    break;
  case 1920:
    wrapper->m_polishApplicationCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_polishApplication>(
        callback);
    break;
  case 1921:
    wrapper->m_polishCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_polish>(callback);
    break;
  case 1922:
    wrapper->m_polishWidgetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_polishWidget>(
        callback);
    break;
  case 1935:
    wrapper->m_sizeFromContentsCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_sizeFromContents>(
        callback);
    break;
  case 1938:
    wrapper->m_standardIconCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_standardIcon>(
        callback);
    break;
  case 1939:
    wrapper->m_standardPaletteCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_standardPalette>(
        callback);
    break;
  case 1940:
    wrapper->m_standardPixmapCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_standardPixmap>(
        callback);
    break;
  case 1942:
    wrapper->m_styleHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_styleHint>(
        callback);
    break;
  case 1943:
    wrapper->m_subControlRectCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_subControlRect>(
        callback);
    break;
  case 1944:
    wrapper->m_subElementRectCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_subElementRect>(
        callback);
    break;
  case 1946:
    wrapper->m_unpolishApplicationCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStyle_wrapper::
                             Callback_unpolishApplication>(callback);
    break;
  case 1947:
    wrapper->m_unpolishCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStyle_wrapper::Callback_unpolish>(callback);
    break;
  }
}
}
