
// tag=1040
#include "QtDartBindings_exports.h"
#include <qbrush.h>
#include <qcolor.h>
#include <qpixmap.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QBrush_wrapper : public ::QBrush {
public:
  ~QBrush_wrapper();
  // tag=1041
  QBrush_wrapper();
  // tag=1041
  QBrush_wrapper(const QColor &color);
  // tag=1041
  QBrush_wrapper(const QColor &color, const QPixmap &pixmap);
  // tag=1041
  QBrush_wrapper(const QPixmap &pixmap);
  // tag=1041
  const QColor &color() const;
  // tag=1041
  bool isDetached() const;
  // tag=1041
  bool isOpaque() const;
  // tag=1041
  void setColor(const QColor &color);
  // tag=1041
  void setTexture(const QPixmap &pixmap);
  // tag=1041
  QPixmap texture() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QBrush::QBrush()
QtDartBindings_EXPORT void *c_QBrush__constructor();

// tag=1067
//  QBrush::QBrush(const QColor & color)
QtDartBindings_EXPORT void *c_QBrush__constructor_QColor(void *color_);

// tag=1067
//  QBrush::QBrush(const QColor & color, const QPixmap & pixmap)
QtDartBindings_EXPORT void *c_QBrush__constructor_QColor_QPixmap(void *color_,
                                                                 void *pixmap_);

// tag=1067
//  QBrush::QBrush(const QPixmap & pixmap)
QtDartBindings_EXPORT void *c_QBrush__constructor_QPixmap(void *pixmap_);

// tag=1067
//  QBrush::color() const
QtDartBindings_EXPORT void *c_QBrush__color(void *thisObj);

// tag=1067
//  QBrush::isDetached() const
QtDartBindings_EXPORT bool c_QBrush__isDetached(void *thisObj);

// tag=1067
//  QBrush::isOpaque() const
QtDartBindings_EXPORT bool c_QBrush__isOpaque(void *thisObj);

// tag=1067
//  QBrush::setColor(const QColor & color)
QtDartBindings_EXPORT void c_QBrush__setColor_QColor(void *thisObj,
                                                     void *color_);

// tag=1067
//  QBrush::setTexture(const QPixmap & pixmap)
QtDartBindings_EXPORT void c_QBrush__setTexture_QPixmap(void *thisObj,
                                                        void *pixmap_);

// tag=1067
//  QBrush::texture() const
QtDartBindings_EXPORT void *c_QBrush__texture(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QBrush__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QBrush_Finalizer(void *, void *cppObj, void *);
}
