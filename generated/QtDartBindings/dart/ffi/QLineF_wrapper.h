
// tag=1040
#include "QtDartBindings_exports.h"
#include <qline.h>
#include <qpoint.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QLineF_wrapper : public ::QLineF {
public:
  ~QLineF_wrapper();
  // tag=1041
  QLineF_wrapper();
  // tag=1041
  QLineF_wrapper(const QLine &line);
  // tag=1041
  QLineF_wrapper(const QPointF &pt1, const QPointF &pt2);
  // tag=1041
  QLineF_wrapper(qreal x1, qreal y1, qreal x2, qreal y2);
  // tag=1041
  qreal angle() const;
  // tag=1041
  qreal angleTo(const QLineF &l) const;
  // tag=1041
  QPointF center() const;
  // tag=1041
  qreal dx() const;
  // tag=1041
  qreal dy() const;
  // tag=1041
  static QLineF fromPolar(qreal length, qreal angle);
  // tag=1041
  bool isNull() const;
  // tag=1041
  qreal length() const;
  // tag=1041
  QLineF normalVector() const;
  // tag=1041
  QPointF p1() const;
  // tag=1041
  QPointF p2() const;
  // tag=1041
  QPointF pointAt(qreal t) const;
  // tag=1041
  void setAngle(qreal angle);
  // tag=1041
  void setLength(qreal len);
  // tag=1041
  void setLine(qreal x1, qreal y1, qreal x2, qreal y2);
  // tag=1041
  void setP1(const QPointF &p1);
  // tag=1041
  void setP2(const QPointF &p2);
  // tag=1041
  void setPoints(const QPointF &p1, const QPointF &p2);
  // tag=1041
  QLine toLine() const;
  // tag=1041
  void translate(const QPointF &p);
  // tag=1041
  void translate(qreal dx, qreal dy);
  // tag=1041
  QLineF translated(const QPointF &p) const;
  // tag=1041
  QLineF translated(qreal dx, qreal dy) const;
  // tag=1041
  QLineF unitVector() const;
  // tag=1041
  qreal x1() const;
  // tag=1041
  qreal x2() const;
  // tag=1041
  qreal y1() const;
  // tag=1041
  qreal y2() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QLineF::QLineF()
QtDartBindings_EXPORT void *c_QLineF__constructor();

// tag=1067
//  QLineF::QLineF(const QLine & line)
QtDartBindings_EXPORT void *c_QLineF__constructor_QLine(void *line_);

// tag=1067
//  QLineF::QLineF(const QPointF & pt1, const QPointF & pt2)
QtDartBindings_EXPORT void *c_QLineF__constructor_QPointF_QPointF(void *pt1_,
                                                                  void *pt2_);

// tag=1067
//  QLineF::QLineF(qreal x1, qreal y1, qreal x2, qreal y2)
QtDartBindings_EXPORT void *
c_QLineF__constructor_qreal_qreal_qreal_qreal(qreal x1, qreal y1, qreal x2,
                                              qreal y2);

// tag=1067
//  QLineF::angle() const
QtDartBindings_EXPORT qreal c_QLineF__angle(void *thisObj);

// tag=1067
//  QLineF::angleTo(const QLineF & l) const
QtDartBindings_EXPORT qreal c_QLineF__angleTo_QLineF(void *thisObj, void *l_);

// tag=1067
//  QLineF::center() const
QtDartBindings_EXPORT void *c_QLineF__center(void *thisObj);

// tag=1067
//  QLineF::dx() const
QtDartBindings_EXPORT qreal c_QLineF__dx(void *thisObj);

// tag=1067
//  QLineF::dy() const
QtDartBindings_EXPORT qreal c_QLineF__dy(void *thisObj);

// tag=1067
//  QLineF::fromPolar(qreal length, qreal angle)
QtDartBindings_EXPORT void *c_static_QLineF__fromPolar_qreal_qreal(qreal length,
                                                                   qreal angle);

// tag=1067
//  QLineF::isNull() const
QtDartBindings_EXPORT bool c_QLineF__isNull(void *thisObj);

// tag=1067
//  QLineF::length() const
QtDartBindings_EXPORT qreal c_QLineF__length(void *thisObj);

// tag=1067
//  QLineF::normalVector() const
QtDartBindings_EXPORT void *c_QLineF__normalVector(void *thisObj);

// tag=1067
//  QLineF::p1() const
QtDartBindings_EXPORT void *c_QLineF__p1(void *thisObj);

// tag=1067
//  QLineF::p2() const
QtDartBindings_EXPORT void *c_QLineF__p2(void *thisObj);

// tag=1067
//  QLineF::pointAt(qreal t) const
QtDartBindings_EXPORT void *c_QLineF__pointAt_qreal(void *thisObj, qreal t);

// tag=1067
//  QLineF::setAngle(qreal angle)
QtDartBindings_EXPORT void c_QLineF__setAngle_qreal(void *thisObj, qreal angle);

// tag=1067
//  QLineF::setLength(qreal len)
QtDartBindings_EXPORT void c_QLineF__setLength_qreal(void *thisObj, qreal len);

// tag=1067
//  QLineF::setLine(qreal x1, qreal y1, qreal x2, qreal y2)
QtDartBindings_EXPORT void
c_QLineF__setLine_qreal_qreal_qreal_qreal(void *thisObj, qreal x1, qreal y1,
                                          qreal x2, qreal y2);

// tag=1067
//  QLineF::setP1(const QPointF & p1)
QtDartBindings_EXPORT void c_QLineF__setP1_QPointF(void *thisObj, void *p1_);

// tag=1067
//  QLineF::setP2(const QPointF & p2)
QtDartBindings_EXPORT void c_QLineF__setP2_QPointF(void *thisObj, void *p2_);

// tag=1067
//  QLineF::setPoints(const QPointF & p1, const QPointF & p2)
QtDartBindings_EXPORT void
c_QLineF__setPoints_QPointF_QPointF(void *thisObj, void *p1_, void *p2_);

// tag=1067
//  QLineF::toLine() const
QtDartBindings_EXPORT void *c_QLineF__toLine(void *thisObj);

// tag=1067
//  QLineF::translate(const QPointF & p)
QtDartBindings_EXPORT void c_QLineF__translate_QPointF(void *thisObj, void *p_);

// tag=1067
//  QLineF::translate(qreal dx, qreal dy)
QtDartBindings_EXPORT void c_QLineF__translate_qreal_qreal(void *thisObj,
                                                           qreal dx, qreal dy);

// tag=1067
//  QLineF::translated(const QPointF & p) const
QtDartBindings_EXPORT void *c_QLineF__translated_QPointF(void *thisObj,
                                                         void *p_);

// tag=1067
//  QLineF::translated(qreal dx, qreal dy) const
QtDartBindings_EXPORT void *
c_QLineF__translated_qreal_qreal(void *thisObj, qreal dx, qreal dy);

// tag=1067
//  QLineF::unitVector() const
QtDartBindings_EXPORT void *c_QLineF__unitVector(void *thisObj);

// tag=1067
//  QLineF::x1() const
QtDartBindings_EXPORT qreal c_QLineF__x1(void *thisObj);

// tag=1067
//  QLineF::x2() const
QtDartBindings_EXPORT qreal c_QLineF__x2(void *thisObj);

// tag=1067
//  QLineF::y1() const
QtDartBindings_EXPORT qreal c_QLineF__y1(void *thisObj);

// tag=1067
//  QLineF::y2() const
QtDartBindings_EXPORT qreal c_QLineF__y2(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QLineF__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QLineF_Finalizer(void *, void *cppObj, void *);
}
