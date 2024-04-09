
// tag=1040
#include "QtDartBindings_exports.h"
#include <qbrush.h>
#include <qcolor.h>
#include <qlist.h>
#include <qpen.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QPen_wrapper : public ::QPen {
public:
  ~QPen_wrapper();
  // tag=1041
  QPen_wrapper();
  // tag=1041
  QPen_wrapper(const QBrush &brush, qreal width);
  // tag=1041
  QPen_wrapper(const QColor &color);
  // tag=1041
  QBrush brush() const;
  // tag=1041
  QColor color() const;
  // tag=1041
  qreal dashOffset() const;
  // tag=1041
  QList<qreal> dashPattern() const;
  // tag=1041
  bool isCosmetic() const;
  // tag=1041
  bool isDetached();
  // tag=1041
  bool isSolid() const;
  // tag=1041
  qreal miterLimit() const;
  // tag=1041
  void setBrush(const QBrush &brush);
  // tag=1041
  void setColor(const QColor &color);
  // tag=1041
  void setCosmetic(bool cosmetic);
  // tag=1041
  void setDashOffset(qreal doffset);
  // tag=1041
  void setDashPattern(const QList<qreal> &pattern);
  // tag=1041
  void setMiterLimit(qreal limit);
  // tag=1041
  void setWidth(int width);
  // tag=1041
  void setWidthF(qreal width);
  // tag=1041
  int width() const;
  // tag=1041
  qreal widthF() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QPen::QPen()
QtDartBindings_EXPORT void *c_QPen__constructor();

// tag=1067
//  QPen::QPen(const QBrush & brush, qreal width)
QtDartBindings_EXPORT void *c_QPen__constructor_QBrush_qreal(void *brush_,
                                                             qreal width);

// tag=1067
//  QPen::QPen(const QColor & color)
QtDartBindings_EXPORT void *c_QPen__constructor_QColor(void *color_);

// tag=1067
//  QPen::brush() const
QtDartBindings_EXPORT void *c_QPen__brush(void *thisObj);

// tag=1067
//  QPen::color() const
QtDartBindings_EXPORT void *c_QPen__color(void *thisObj);

// tag=1067
//  QPen::dashOffset() const
QtDartBindings_EXPORT qreal c_QPen__dashOffset(void *thisObj);

// tag=1067
//  QPen::dashPattern() const
QtDartBindings_EXPORT void *c_QPen__dashPattern(void *thisObj);

// tag=1067
//  QPen::isCosmetic() const
QtDartBindings_EXPORT bool c_QPen__isCosmetic(void *thisObj);

// tag=1067
//  QPen::isDetached()
QtDartBindings_EXPORT bool c_QPen__isDetached(void *thisObj);

// tag=1067
//  QPen::isSolid() const
QtDartBindings_EXPORT bool c_QPen__isSolid(void *thisObj);

// tag=1067
//  QPen::miterLimit() const
QtDartBindings_EXPORT qreal c_QPen__miterLimit(void *thisObj);

// tag=1067
//  QPen::setBrush(const QBrush & brush)
QtDartBindings_EXPORT void c_QPen__setBrush_QBrush(void *thisObj, void *brush_);

// tag=1067
//  QPen::setColor(const QColor & color)
QtDartBindings_EXPORT void c_QPen__setColor_QColor(void *thisObj, void *color_);

// tag=1067
//  QPen::setCosmetic(bool cosmetic)
QtDartBindings_EXPORT void c_QPen__setCosmetic_bool(void *thisObj,
                                                    bool cosmetic);

// tag=1067
//  QPen::setDashOffset(qreal doffset)
QtDartBindings_EXPORT void c_QPen__setDashOffset_qreal(void *thisObj,
                                                       qreal doffset);

// tag=1067
//  QPen::setDashPattern(const QList<qreal > & pattern)
QtDartBindings_EXPORT void c_QPen__setDashPattern_QList_qreal(void *thisObj,
                                                              void *pattern_);

// tag=1067
//  QPen::setMiterLimit(qreal limit)
QtDartBindings_EXPORT void c_QPen__setMiterLimit_qreal(void *thisObj,
                                                       qreal limit);

// tag=1067
//  QPen::setWidth(int width)
QtDartBindings_EXPORT void c_QPen__setWidth_int(void *thisObj, int width);

// tag=1067
//  QPen::setWidthF(qreal width)
QtDartBindings_EXPORT void c_QPen__setWidthF_qreal(void *thisObj, qreal width);

// tag=1067
//  QPen::width() const
QtDartBindings_EXPORT int c_QPen__width(void *thisObj);

// tag=1067
//  QPen::widthF() const
QtDartBindings_EXPORT qreal c_QPen__widthF(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QPen__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QPen_Finalizer(void *, void *cppObj, void *);
}
