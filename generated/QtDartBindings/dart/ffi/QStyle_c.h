/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qapplication.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qicon.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qstring.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qvariant.h>
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
class QStyle_wrapper : public ::QStyle {
public:
  ~QStyle_wrapper();
  QStyle_wrapper();
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  virtual void drawComplexControl(QStyle::ComplexControl cc,
                                  const QStyleOptionComplex *opt, QPainter *p,
                                  const QWidget *widget = nullptr) const;
  virtual void
  drawComplexControl_nocallback(QStyle::ComplexControl cc,
                                const QStyleOptionComplex *opt, QPainter *p,
                                const QWidget *widget = nullptr) const;
  virtual void drawControl(QStyle::ControlElement element,
                           const QStyleOption *opt, QPainter *p,
                           const QWidget *w = nullptr) const;
  virtual void drawControl_nocallback(QStyle::ControlElement element,
                                      const QStyleOption *opt, QPainter *p,
                                      const QWidget *w = nullptr) const;
  virtual void drawItemPixmap(QPainter *painter, const QRect &rect,
                              int alignment, const QPixmap &pixmap) const;
  virtual void drawItemPixmap_nocallback(QPainter *painter, const QRect &rect,
                                         int alignment,
                                         const QPixmap &pixmap) const;
  virtual void
  drawItemText(QPainter *painter, const QRect &rect, int flags,
               const QPalette &pal, bool enabled, const QString &text,
               QPalette::ColorRole textRole = QPalette::NoRole) const;
  virtual void drawItemText_nocallback(
      QPainter *painter, const QRect &rect, int flags, const QPalette &pal,
      bool enabled, const QString &text,
      QPalette::ColorRole textRole = QPalette::NoRole) const;
  virtual void drawPrimitive(QStyle::PrimitiveElement pe,
                             const QStyleOption *opt, QPainter *p,
                             const QWidget *w = nullptr) const;
  virtual void drawPrimitive_nocallback(QStyle::PrimitiveElement pe,
                                        const QStyleOption *opt, QPainter *p,
                                        const QWidget *w = nullptr) const;
  virtual bool event(QEvent *event);
  virtual bool event_nocallback(QEvent *event);
  virtual bool eventFilter(QObject *watched, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  virtual QPixmap generatedIconPixmap(QIcon::Mode iconMode,
                                      const QPixmap &pixmap,
                                      const QStyleOption *opt) const;
  virtual QPixmap generatedIconPixmap_nocallback(QIcon::Mode iconMode,
                                                 const QPixmap &pixmap,
                                                 const QStyleOption *opt) const;
  virtual QStyle::SubControl
  hitTestComplexControl(QStyle::ComplexControl cc,
                        const QStyleOptionComplex *opt, const QPoint &pt,
                        const QWidget *widget = nullptr) const;
  virtual QStyle::SubControl hitTestComplexControl_nocallback(
      QStyle::ComplexControl cc, const QStyleOptionComplex *opt,
      const QPoint &pt, const QWidget *widget = nullptr) const;
  virtual QRect itemPixmapRect(const QRect &r, int flags,
                               const QPixmap &pixmap) const;
  virtual QRect itemPixmapRect_nocallback(const QRect &r, int flags,
                                          const QPixmap &pixmap) const;
  virtual int layoutSpacing(QSizePolicy::ControlType control1,
                            QSizePolicy::ControlType control2,
                            Qt::Orientation orientation,
                            const QStyleOption *option = nullptr,
                            const QWidget *widget = nullptr) const;
  virtual int layoutSpacing_nocallback(QSizePolicy::ControlType control1,
                                       QSizePolicy::ControlType control2,
                                       Qt::Orientation orientation,
                                       const QStyleOption *option = nullptr,
                                       const QWidget *widget = nullptr) const;
  QString name() const;
  virtual int pixelMetric(QStyle::PixelMetric metric,
                          const QStyleOption *option = nullptr,
                          const QWidget *widget = nullptr) const;
  virtual int pixelMetric_nocallback(QStyle::PixelMetric metric,
                                     const QStyleOption *option = nullptr,
                                     const QWidget *widget = nullptr) const;
  virtual void polish(QApplication *application);
  virtual void polish_nocallback(QApplication *application);
  virtual void polish(QPalette &palette);
  virtual void polish_nocallback(QPalette &palette);
  virtual void polish(QWidget *widget);
  virtual void polish_nocallback(QWidget *widget);
  const QStyle *proxy() const;
  virtual QSize sizeFromContents(QStyle::ContentsType ct,
                                 const QStyleOption *opt,
                                 const QSize &contentsSize,
                                 const QWidget *w = nullptr) const;
  virtual QSize sizeFromContents_nocallback(QStyle::ContentsType ct,
                                            const QStyleOption *opt,
                                            const QSize &contentsSize,
                                            const QWidget *w = nullptr) const;
  static int sliderPositionFromValue(int min, int max, int val, int space,
                                     bool upsideDown = false);
  static int sliderValueFromPosition(int min, int max, int pos, int space,
                                     bool upsideDown = false);
  virtual QIcon standardIcon(QStyle::StandardPixmap standardIcon,
                             const QStyleOption *option = nullptr,
                             const QWidget *widget = nullptr) const;
  virtual QIcon standardIcon_nocallback(QStyle::StandardPixmap standardIcon,
                                        const QStyleOption *option = nullptr,
                                        const QWidget *widget = nullptr) const;
  virtual QPalette standardPalette() const;
  virtual QPalette standardPalette_nocallback() const;
  virtual QPixmap standardPixmap(QStyle::StandardPixmap standardPixmap,
                                 const QStyleOption *opt = nullptr,
                                 const QWidget *widget = nullptr) const;
  virtual QPixmap
  standardPixmap_nocallback(QStyle::StandardPixmap standardPixmap,
                            const QStyleOption *opt = nullptr,
                            const QWidget *widget = nullptr) const;
  virtual int styleHint(QStyle::StyleHint stylehint,
                        const QStyleOption *opt = nullptr,
                        const QWidget *widget = nullptr,
                        QStyleHintReturn *returnData = nullptr) const;
  virtual int
  styleHint_nocallback(QStyle::StyleHint stylehint,
                       const QStyleOption *opt = nullptr,
                       const QWidget *widget = nullptr,
                       QStyleHintReturn *returnData = nullptr) const;
  virtual QRect subControlRect(QStyle::ComplexControl cc,
                               const QStyleOptionComplex *opt,
                               QStyle::SubControl sc,
                               const QWidget *widget = nullptr) const;
  virtual QRect subControlRect_nocallback(
      QStyle::ComplexControl cc, const QStyleOptionComplex *opt,
      QStyle::SubControl sc, const QWidget *widget = nullptr) const;
  virtual QRect subElementRect(QStyle::SubElement subElement,
                               const QStyleOption *option,
                               const QWidget *widget = nullptr) const;
  virtual QRect
  subElementRect_nocallback(QStyle::SubElement subElement,
                            const QStyleOption *option,
                            const QWidget *widget = nullptr) const;
  static QString tr(const char *s, const char *c, int n);
  virtual void unpolish(QApplication *application);
  virtual void unpolish_nocallback(QApplication *application);
  virtual void unpolish(QWidget *widget);
  virtual void unpolish_nocallback(QWidget *widget);
  static QPoint visualPos(Qt::LayoutDirection direction,
                          const QRect &boundingRect, const QPoint &logicalPos);
  static QRect visualRect(Qt::LayoutDirection direction,
                          const QRect &boundingRect, const QRect &logicalRect);
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  typedef void (*Callback_drawComplexControl)(void *, QStyle::ComplexControl cc,
                                              const QStyleOptionComplex *opt,
                                              QPainter *p,
                                              const QWidget *widget);
  Callback_drawComplexControl m_drawComplexControlCallback = nullptr;
  typedef void (*Callback_drawControl)(void *, QStyle::ControlElement element,
                                       const QStyleOption *opt, QPainter *p,
                                       const QWidget *w);
  Callback_drawControl m_drawControlCallback = nullptr;
  typedef void (*Callback_drawItemPixmap)(void *, QPainter *painter,
                                          const QRect &rect, int alignment,
                                          const QPixmap &pixmap);
  Callback_drawItemPixmap m_drawItemPixmapCallback = nullptr;
  typedef void (*Callback_drawItemText)(void *, QPainter *painter,
                                        const QRect &rect, int flags,
                                        const QPalette &pal, bool enabled,
                                        const QString &text,
                                        QPalette::ColorRole textRole);
  Callback_drawItemText m_drawItemTextCallback = nullptr;
  typedef void (*Callback_drawPrimitive)(void *, QStyle::PrimitiveElement pe,
                                         const QStyleOption *opt, QPainter *p,
                                         const QWidget *w);
  Callback_drawPrimitive m_drawPrimitiveCallback = nullptr;
  typedef bool (*Callback_event)(void *, QEvent *event);
  Callback_event m_eventCallback = nullptr;
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  typedef QPixmap *(*Callback_generatedIconPixmap)(void *, QIcon::Mode iconMode,
                                                   const QPixmap &pixmap,
                                                   const QStyleOption *opt);
  Callback_generatedIconPixmap m_generatedIconPixmapCallback = nullptr;
  typedef QStyle::SubControl (*Callback_hitTestComplexControl)(
      void *, QStyle::ComplexControl cc, const QStyleOptionComplex *opt,
      const QPoint &pt, const QWidget *widget);
  Callback_hitTestComplexControl m_hitTestComplexControlCallback = nullptr;
  typedef QRect *(*Callback_itemPixmapRect)(void *, const QRect &r, int flags,
                                            const QPixmap &pixmap);
  Callback_itemPixmapRect m_itemPixmapRectCallback = nullptr;
  typedef int (*Callback_layoutSpacing)(void *,
                                        QSizePolicy::ControlType control1,
                                        QSizePolicy::ControlType control2,
                                        Qt::Orientation orientation,
                                        const QStyleOption *option,
                                        const QWidget *widget);
  Callback_layoutSpacing m_layoutSpacingCallback = nullptr;
  typedef int (*Callback_pixelMetric)(void *, QStyle::PixelMetric metric,
                                      const QStyleOption *option,
                                      const QWidget *widget);
  Callback_pixelMetric m_pixelMetricCallback = nullptr;
  typedef void (*Callback_polishApplication)(void *, QApplication *application);
  Callback_polishApplication m_polishApplicationCallback = nullptr;
  typedef void (*Callback_polish)(void *, QPalette &palette);
  Callback_polish m_polishCallback = nullptr;
  typedef void (*Callback_polishWidget)(void *, QWidget *widget);
  Callback_polishWidget m_polishWidgetCallback = nullptr;
  typedef QSize *(*Callback_sizeFromContents)(void *, QStyle::ContentsType ct,
                                              const QStyleOption *opt,
                                              const QSize &contentsSize,
                                              const QWidget *w);
  Callback_sizeFromContents m_sizeFromContentsCallback = nullptr;
  typedef QIcon *(*Callback_standardIcon)(void *,
                                          QStyle::StandardPixmap standardIcon,
                                          const QStyleOption *option,
                                          const QWidget *widget);
  Callback_standardIcon m_standardIconCallback = nullptr;
  typedef QPalette *(*Callback_standardPalette)(void *);
  Callback_standardPalette m_standardPaletteCallback = nullptr;
  typedef QPixmap *(*Callback_standardPixmap)(
      void *, QStyle::StandardPixmap standardPixmap, const QStyleOption *opt,
      const QWidget *widget);
  Callback_standardPixmap m_standardPixmapCallback = nullptr;
  typedef int (*Callback_styleHint)(void *, QStyle::StyleHint stylehint,
                                    const QStyleOption *opt,
                                    const QWidget *widget,
                                    QStyleHintReturn *returnData);
  Callback_styleHint m_styleHintCallback = nullptr;
  typedef QRect *(*Callback_subControlRect)(void *, QStyle::ComplexControl cc,
                                            const QStyleOptionComplex *opt,
                                            QStyle::SubControl sc,
                                            const QWidget *widget);
  Callback_subControlRect m_subControlRectCallback = nullptr;
  typedef QRect *(*Callback_subElementRect)(void *,
                                            QStyle::SubElement subElement,
                                            const QStyleOption *option,
                                            const QWidget *widget);
  Callback_subElementRect m_subElementRectCallback = nullptr;
  typedef void (*Callback_unpolishApplication)(void *,
                                               QApplication *application);
  Callback_unpolishApplication m_unpolishApplicationCallback = nullptr;
  typedef void (*Callback_unpolish)(void *, QWidget *widget);
  Callback_unpolish m_unpolishCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QStyle::QStyle()
QtDartBindings_EXPORT void *c_QStyle__constructor();
// QStyle::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QStyle__customEvent_QEvent(void *thisObj,
                                                        void *event_);
// QStyle::drawComplexControl(QStyle::ComplexControl cc, const
// QStyleOptionComplex * opt, QPainter * p, const QWidget * widget) const
QtDartBindings_EXPORT void
c_QStyle__drawComplexControl_ComplexControl_QStyleOptionComplex_QPainter_QWidget(
    void *thisObj, int cc, void *opt_, void *p_, void *widget_);
// QStyle::drawControl(QStyle::ControlElement element, const QStyleOption * opt,
// QPainter * p, const QWidget * w) const
QtDartBindings_EXPORT void
c_QStyle__drawControl_ControlElement_QStyleOption_QPainter_QWidget(
    void *thisObj, int element, void *opt_, void *p_, void *w_);
// QStyle::drawItemPixmap(QPainter * painter, const QRect & rect, int alignment,
// const QPixmap & pixmap) const
QtDartBindings_EXPORT void c_QStyle__drawItemPixmap_QPainter_QRect_int_QPixmap(
    void *thisObj, void *painter_, void *rect_, int alignment, void *pixmap_);
// QStyle::drawItemText(QPainter * painter, const QRect & rect, int flags, const
// QPalette & pal, bool enabled, const QString & text, QPalette::ColorRole
// textRole) const
QtDartBindings_EXPORT void
c_QStyle__drawItemText_QPainter_QRect_int_QPalette_bool_QString_ColorRole(
    void *thisObj, void *painter_, void *rect_, int flags, void *pal_,
    bool enabled, const char *text_, int textRole);
// QStyle::drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption * opt,
// QPainter * p, const QWidget * w) const
QtDartBindings_EXPORT void
c_QStyle__drawPrimitive_PrimitiveElement_QStyleOption_QPainter_QWidget(
    void *thisObj, int pe, void *opt_, void *p_, void *w_);
// QStyle::event(QEvent * event)
QtDartBindings_EXPORT bool c_QStyle__event_QEvent(void *thisObj, void *event_);
// QStyle::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool c_QStyle__eventFilter_QObject_QEvent(void *thisObj,
                                                                void *watched_,
                                                                void *event_);
// QStyle::generatedIconPixmap(QIcon::Mode iconMode, const QPixmap & pixmap,
// const QStyleOption * opt) const
QtDartBindings_EXPORT void *
c_QStyle__generatedIconPixmap_Mode_QPixmap_QStyleOption(void *thisObj,
                                                        int iconMode,
                                                        void *pixmap_,
                                                        void *opt_);
// QStyle::hitTestComplexControl(QStyle::ComplexControl cc, const
// QStyleOptionComplex * opt, const QPoint & pt, const QWidget * widget) const
QtDartBindings_EXPORT int
c_QStyle__hitTestComplexControl_ComplexControl_QStyleOptionComplex_QPoint_QWidget(
    void *thisObj, int cc, void *opt_, void *pt_, void *widget_);
// QStyle::itemPixmapRect(const QRect & r, int flags, const QPixmap & pixmap)
// const
QtDartBindings_EXPORT void *
c_QStyle__itemPixmapRect_QRect_int_QPixmap(void *thisObj, void *r_, int flags,
                                           void *pixmap_);
// QStyle::layoutSpacing(QSizePolicy::ControlType control1,
// QSizePolicy::ControlType control2, Qt::Orientation orientation, const
// QStyleOption * option, const QWidget * widget) const
QtDartBindings_EXPORT int
c_QStyle__layoutSpacing_ControlType_ControlType_Orientation_QStyleOption_QWidget(
    void *thisObj, int control1, int control2, int orientation, void *option_,
    void *widget_);
// QStyle::name() const
QtDartBindings_EXPORT void *c_QStyle__name(void *thisObj);
// QStyle::pixelMetric(QStyle::PixelMetric metric, const QStyleOption * option,
// const QWidget * widget) const
QtDartBindings_EXPORT int
c_QStyle__pixelMetric_PixelMetric_QStyleOption_QWidget(void *thisObj,
                                                       int metric,
                                                       void *option_,
                                                       void *widget_);
// QStyle::polish(QApplication * application)
QtDartBindings_EXPORT void
c_QStyle__polishApplication_QApplication(void *thisObj, void *application_);
// QStyle::polish(QPalette & palette)
QtDartBindings_EXPORT void c_QStyle__polish_QPalette(void *thisObj,
                                                     void *palette_);
// QStyle::polish(QWidget * widget)
QtDartBindings_EXPORT void c_QStyle__polishWidget_QWidget(void *thisObj,
                                                          void *widget_);
// QStyle::proxy() const
QtDartBindings_EXPORT void *c_QStyle__proxy(void *thisObj);
// QStyle::sizeFromContents(QStyle::ContentsType ct, const QStyleOption * opt,
// const QSize & contentsSize, const QWidget * w) const
QtDartBindings_EXPORT void *
c_QStyle__sizeFromContents_ContentsType_QStyleOption_QSize_QWidget(
    void *thisObj, int ct, void *opt_, void *contentsSize_, void *w_);
// QStyle::sliderPositionFromValue(int min, int max, int val, int space, bool
// upsideDown)
QtDartBindings_EXPORT int
c_static_QStyle__sliderPositionFromValue_int_int_int_int_bool(int min, int max,
                                                              int val,
                                                              int space,
                                                              bool upsideDown);
// QStyle::sliderValueFromPosition(int min, int max, int pos, int space, bool
// upsideDown)
QtDartBindings_EXPORT int
c_static_QStyle__sliderValueFromPosition_int_int_int_int_bool(int min, int max,
                                                              int pos,
                                                              int space,
                                                              bool upsideDown);
// QStyle::standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption
// * option, const QWidget * widget) const
QtDartBindings_EXPORT void *
c_QStyle__standardIcon_StandardPixmap_QStyleOption_QWidget(void *thisObj,
                                                           int standardIcon,
                                                           void *option_,
                                                           void *widget_);
// QStyle::standardPalette() const
QtDartBindings_EXPORT void *c_QStyle__standardPalette(void *thisObj);
// QStyle::standardPixmap(QStyle::StandardPixmap standardPixmap, const
// QStyleOption * opt, const QWidget * widget) const
QtDartBindings_EXPORT void *
c_QStyle__standardPixmap_StandardPixmap_QStyleOption_QWidget(void *thisObj,
                                                             int standardPixmap,
                                                             void *opt_,
                                                             void *widget_);
// QStyle::styleHint(QStyle::StyleHint stylehint, const QStyleOption * opt,
// const QWidget * widget, QStyleHintReturn * returnData) const
QtDartBindings_EXPORT int
c_QStyle__styleHint_StyleHint_QStyleOption_QWidget_QStyleHintReturn(
    void *thisObj, int stylehint, void *opt_, void *widget_, void *returnData_);
// QStyle::subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex *
// opt, QStyle::SubControl sc, const QWidget * widget) const
QtDartBindings_EXPORT void *
c_QStyle__subControlRect_ComplexControl_QStyleOptionComplex_SubControl_QWidget(
    void *thisObj, int cc, void *opt_, int sc, void *widget_);
// QStyle::subElementRect(QStyle::SubElement subElement, const QStyleOption *
// option, const QWidget * widget) const
QtDartBindings_EXPORT void *
c_QStyle__subElementRect_SubElement_QStyleOption_QWidget(void *thisObj,
                                                         int subElement,
                                                         void *option_,
                                                         void *widget_);
// QStyle::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QStyle__tr_char_char_int(const char *s, const char *c, int n);
// QStyle::unpolish(QApplication * application)
QtDartBindings_EXPORT void
c_QStyle__unpolishApplication_QApplication(void *thisObj, void *application_);
// QStyle::unpolish(QWidget * widget)
QtDartBindings_EXPORT void c_QStyle__unpolish_QWidget(void *thisObj,
                                                      void *widget_);
// QStyle::visualPos(Qt::LayoutDirection direction, const QRect & boundingRect,
// const QPoint & logicalPos)
QtDartBindings_EXPORT void *
c_static_QStyle__visualPos_LayoutDirection_QRect_QPoint(int direction,
                                                        void *boundingRect_,
                                                        void *logicalPos_);
// QStyle::visualRect(Qt::LayoutDirection direction, const QRect & boundingRect,
// const QRect & logicalRect)
QtDartBindings_EXPORT void *
c_static_QStyle__visualRect_LayoutDirection_QRect_QRect(int direction,
                                                        void *boundingRect_,
                                                        void *logicalRect_);
QtDartBindings_EXPORT void c_QStyle__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QStyle__registerVirtualMethodCallback(void *ptr, void *callback,
                                        int methodId);
QtDartBindings_EXPORT void c_QStyle_Finalizer(void *cppObj);
}
