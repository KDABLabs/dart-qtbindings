
// tag=1040
#include "QtDartBindings_exports.h"
#include <qpoint.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QPointF_wrapper : public ::QPointF {
public:
  ~QPointF_wrapper();
  // tag=1041
  QPointF_wrapper();
  // tag=1041
  QPointF_wrapper(const QPoint &p);
  // tag=1041
  QPointF_wrapper(qreal xpos, qreal ypos);
  // tag=1041
  static qreal dotProduct(const QPointF &p1, const QPointF &p2);
  // tag=1041
  bool isNull() const;
  // tag=1041
  qreal manhattanLength() const;
  // tag=1041
  void setX(qreal x);
  // tag=1041
  void setY(qreal y);
  // tag=1041
  QPoint toPoint() const;
  // tag=1041
  QPointF transposed() const;
  // tag=1041
  qreal x() const;
  // tag=1041
  qreal y() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QPointF::QPointF()
QtDartBindings_EXPORT void *c_QPointF__constructor();

// tag=1067
//  QPointF::QPointF(const QPoint & p)
QtDartBindings_EXPORT void *c_QPointF__constructor_QPoint(void *p_);

// tag=1067
//  QPointF::QPointF(qreal xpos, qreal ypos)
QtDartBindings_EXPORT void *c_QPointF__constructor_qreal_qreal(qreal xpos,
                                                               qreal ypos);

// tag=1067
//  QPointF::dotProduct(const QPointF & p1, const QPointF & p2)
QtDartBindings_EXPORT qreal
c_static_QPointF__dotProduct_QPointF_QPointF(void *p1_, void *p2_);

// tag=1067
//  QPointF::isNull() const
QtDartBindings_EXPORT bool c_QPointF__isNull(void *thisObj);

// tag=1067
//  QPointF::manhattanLength() const
QtDartBindings_EXPORT qreal c_QPointF__manhattanLength(void *thisObj);

// tag=1067
//  QPointF::setX(qreal x)
QtDartBindings_EXPORT void c_QPointF__setX_qreal(void *thisObj, qreal x);

// tag=1067
//  QPointF::setY(qreal y)
QtDartBindings_EXPORT void c_QPointF__setY_qreal(void *thisObj, qreal y);

// tag=1067
//  QPointF::toPoint() const
QtDartBindings_EXPORT void *c_QPointF__toPoint(void *thisObj);

// tag=1067
//  QPointF::transposed() const
QtDartBindings_EXPORT void *c_QPointF__transposed(void *thisObj);

// tag=1067
//  QPointF::x() const
QtDartBindings_EXPORT qreal c_QPointF__x(void *thisObj);

// tag=1067
//  QPointF::y() const
QtDartBindings_EXPORT qreal c_QPointF__y(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QPointF__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QPointF_Finalizer(void *, void *cppObj, void *);
}
